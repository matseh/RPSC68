 /*
 * This file is part of RPSC68, a sc68 based music player.
 *
 * Copyright 2015, 2021 Mats Eirik Hansen <mats.hansen@triumph.no>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version   .
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sc68/sc68.h"
#include "RPIPCMessage.h"
#include "RPSC68Messages.h"

#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif

typedef struct
{
    sc68_t *sc68;
    uint32_t sampleRate;
    RPIPCMessageRef request;
    RPIPCMessageRef response;
} RPSC68Player;

typedef RPSC68Player *RPSC68PlayerRef;

void RPSC68PlayerDelete(RPSC68PlayerRef sc68Player)
{
    if(sc68Player->sc68)
    {
        sc68_destroy(sc68Player->sc68);
    }

    if(sc68Player->request)
    {
        RPIPCMessageDelete(sc68Player->request);
    }

    if(sc68Player->response)
    {
        RPIPCMessageDelete(sc68Player->response);
    }    
}

RPSC68PlayerRef RPSC68PlayerCreate(void)
{

    RPSC68PlayerRef sc68Player = calloc(1, sizeof(RPSC68Player));

    if(sc68Player)
    {
        sc68Player->request  = RPIPCMessageCreate();
        sc68Player->response = RPIPCMessageCreate();            

        if(!sc68Player->request || !sc68Player->response)
        {
            RPSC68PlayerDelete(sc68Player);

            sc68Player = NULL;
        }
    }

    return sc68Player;
}

int RPSC68PlayerSetConfigVariable(RPSC68PlayerRef sc68Player,
                                  const char *variableName,
                                  int variableValue)
{
    int success = TRUE;

    if(0 != sc68_cntl(sc68Player->sc68, SC68_SET_OPT_INT, "amiga-blend", variableValue))
    {
        fprintf(stderr, "RPSC68: Failed to set configuration variable %s to %d.\n", variableName, variableValue);

        success = FALSE;
    }

    return success;
}

void RPSC68PlayerLoadFile(RPSC68PlayerRef sc68Player,
                          RPSC68LoadFileRequestContent *requestContent)
{
    sc68_create_t createParams;
    sc68_music_info_t info;
    uint32_t songCount = 0;
    int success = FALSE;

    RPSC68LoadFileResponseContent *responseContent = (RPSC68LoadFileResponseContent *) RPIPCMessageContent(sc68Player->response);

    if(sc68Player->sc68)
    {
        sc68_destroy(sc68Player->sc68);

        sc68Player->sc68 = NULL;
    }

    memset(&createParams, 0, sizeof(createParams));

    createParams.sampling_rate = sc68Player->sampleRate;

    sc68Player->sc68 = sc68_create(&createParams);

    if(!sc68Player->sc68)
    {
        fprintf(stderr, "RPSC68: Failed to initialize player.\n");
    }
    else
    {
        success = RPSC68PlayerSetConfigVariable(sc68Player, "amiga-blend", 0);

        if(success)
        {
            if(0 != sc68_load_uri(sc68Player->sc68, requestContent->filePath))
            {
                fprintf(stderr, "RPSC68: Failed to load file: %s\n", requestContent->filePath);
                success = FALSE;
            }
        }

        if(success)
        {
            if(0 != sc68_music_info(sc68Player->sc68, &info, 0, 0))
            {
                fprintf(stderr, "RPSC68: Failed to get music info from file: %s\n", requestContent->filePath);
                success = FALSE;
            }
            else
            {
                songCount = info.tracks;
            }
        }
    }

    RPIPCMessageSetID(sc68Player->response, RPSC68MessageIDLoadFileResponse);
    RPIPCMessageSetContentLength(sc68Player->response, sizeof(RPSC68LoadFileResponseContent));
 
    responseContent->success   = success;
    responseContent->songCount = songCount;

    RPIPCMessageSend(sc68Player->response, stdout);
}

void RPSC68PlayerSetConfig(RPSC68PlayerRef sc68Player,
                           RPIPCMessageRef request)
{
    int success = FALSE;

    RPSC68SetConfigRequestContent *requestContent = (RPSC68SetConfigRequestContent *) RPIPCMessageReadBlob(request, sizeof(RPSC68SetConfigRequestContent));

    RPSC68SetConfigResponseContent *responseContent = (RPSC68SetConfigResponseContent *) RPIPCMessageContent(sc68Player->response);

    sc68Player->sampleRate = requestContent->sampleRate;

    RPIPCMessageSetID(sc68Player->response, RPSC68MessageIDSetConfigResponse);
    RPIPCMessageSetContentLength(sc68Player->response, sizeof(RPSC68SetConfigResponseContent));
 
    responseContent->success = success;

    RPIPCMessageSend(sc68Player->response, stdout);
}

void RPSC68PlayerReadAudioData(RPSC68PlayerRef sc68Player,
                               RPSC68ReadAudioDataRequestContent *requestContent)
{
    RPSC68ReadAudioDataResponseContent *responseContent = (RPSC68ReadAudioDataResponseContent *) RPIPCMessageContent(sc68Player->response);

    uint32_t sampleCount = requestContent->sampleCount;

    uint32_t maxSampleCount = (uint32_t) (RPIPCMessageMaxContentLength(sc68Player->response) - sizeof(RPSC68ReadAudioDataResponseContent)) / sizeof(int16_t);

    if(sampleCount > maxSampleCount)
    {
        sampleCount = maxSampleCount;
    }

    int stereoSampleCount = sampleCount / 2;

    if(SC68_ERROR == sc68_process(sc68Player->sc68, &responseContent[1], &stereoSampleCount))
    {
        fprintf(stderr, "RPSC68: Failed to produce audio data.\n");
        stereoSampleCount = 0;
    }

    responseContent->sampleCount = stereoSampleCount * 2;

    RPIPCMessageSetID(sc68Player->response, RPSC68MessageIDReadAudioDataResponse);
    RPIPCMessageSetContentLength(sc68Player->response, sizeof(RPSC68ReadAudioDataResponseContent) + (sizeof(int16_t) * responseContent->sampleCount));
    RPIPCMessageSend(sc68Player->response, stdout);
}

void RPSC68PlayerGetSongInfo(RPSC68PlayerRef sc68Player,
                             RPSC68GetSongInfoRequestContent *requestContent)
{
    sc68_music_info_t info;

    int success = TRUE;

    RPSC68GetSongInfoResponseContent *responseContent = (RPSC68GetSongInfoResponseContent *) RPIPCMessageContent(sc68Player->response);

    RPIPCMessageSetID(sc68Player->response, RPSC68MessageIDGetSongInfoResponse);
    RPIPCMessageSetContentLength(sc68Player->response, sizeof(RPSC68GetSongInfoResponseContent));

    if(0 == sc68_music_info(sc68Player->sc68, &info, requestContent->subsong, 0))
    {
        responseContent->ym          = info.trk.ym;
        responseContent->ste         = info.trk.ste;
        responseContent->amiga       = info.trk.amiga;
        responseContent->duration    = info.trk.time_ms;
        responseContent->startTime   = 0;
        responseContent->replayRate  = info.rate;
        responseContent->loadAddress = info.addr;

        success = RPIPCMessageWriteString(sc68Player->response, info.title);
        
        if(success)
        {
            success = RPIPCMessageWriteString(sc68Player->response, info.artist);
        }
                
        if(success)
        {
            success = RPIPCMessageWriteString(sc68Player->response, info.replay);
        }
        
        if(success)
        {
            success = RPIPCMessageWriteString(sc68Player->response, info.trk.hw);
        }

        if(success)
        {
            success = RPIPCMessageWriteString(sc68Player->response, info.album);
        }

        if(success)
        {
            success = RPIPCMessageWriteString(sc68Player->response, info.format);
        }

        if(success)
        {
            success = RPIPCMessageWriteString(sc68Player->response, info.genre);
        }

        if(success)
        {
            success = RPIPCMessageWriteString(sc68Player->response, info.year);
        }

        if(success)
        {
            success = RPIPCMessageWriteString(sc68Player->response, info.ripper);
        }

        if(success)
        {
            success = RPIPCMessageWriteString(sc68Player->response, info.converter);
        }
    }
    else
    {
        success = FALSE;
    }

    responseContent->success = success;

    RPIPCMessageSend(sc68Player->response, stdout);
}

void RPSC68PlayerPlaySong(RPSC68PlayerRef sc68Player,
                          RPSC68PlaySongRequestContent *requestContent)
{
    int success = TRUE;

    unsigned int subsong = requestContent->subsong;

    if(0 != sc68_play(sc68Player->sc68, subsong, 1))
    {
        fprintf(stderr, "RPSC68: Failed to select subsong: %u\n", subsong);
        success = FALSE;
    }
    else if(SC68_ERROR == sc68_process(sc68Player->sc68, NULL, NULL))
    {
        fprintf(stderr, "RPSC68: Failed to initialize processing: %u\n", subsong);
        success = FALSE;
    }

    RPSC68PlaySongResponseContent *responseContent = (RPSC68PlaySongResponseContent *) RPIPCMessageContent(sc68Player->response);

    responseContent->success = success;

    RPIPCMessageSetID(sc68Player->response, RPSC68MessageIDPlaySongResponse);
    RPIPCMessageSetContentLength(sc68Player->response, sizeof(RPSC68PlaySongResponseContent));
    RPIPCMessageSend(sc68Player->response, stdout);
}

void RPSC68PlayerRun(RPSC68PlayerRef sc68Player)
{
    int success = TRUE;

    do
    {
        success = RPIPCMessageReceive(sc68Player->request, stdin);

        if(success)
        {
            void *requestContent = RPIPCMessageContent(sc68Player->request);

            switch(RPIPCMessageID(sc68Player->request))
            {
                case RPSC68MessageIDLoadFileRequest:
                    RPSC68PlayerLoadFile(sc68Player, (RPSC68LoadFileRequestContent *) requestContent);
                    break;

                case RPSC68MessageIDSetConfigRequest:
                    RPSC68PlayerSetConfig(sc68Player, sc68Player->request);
                    break;

                case RPSC68MessageIDReadAudioDataRequest:
                    RPSC68PlayerReadAudioData(sc68Player, (RPSC68ReadAudioDataRequestContent *) requestContent);
                    break;

                case RPSC68MessageIDGetSongInfoRequest:
                    RPSC68PlayerGetSongInfo(sc68Player, (RPSC68GetSongInfoRequestContent *) requestContent);
                    break;

                case RPSC68MessageIDPlaySongRequest:
                    RPSC68PlayerPlaySong(sc68Player, (RPSC68PlaySongRequestContent *) requestContent);
                    break;

                default:
                    fprintf(stderr, "RPSC68: Unknown request ID: %u\n", RPIPCMessageID(sc68Player->request));
                    success = FALSE;
                    break;
            }
        }

    } while(success);    
}

int main(int argc, char const *argv[])
{
    sc68_init_t initParams;

    memset(&initParams, 0, sizeof(initParams));

    initParams.flags.no_load_config = 1;
    initParams.flags.no_save_config = 1;

    if(0 != sc68_init(&initParams))
    {
        fprintf(stderr, "RPSC68: Failed to initialize SC68 library.\n");        
    }
    else
    {
        RPSC68PlayerRef sc68Player = RPSC68PlayerCreate();

        if(sc68Player)
        {
            RPSC68PlayerRun(sc68Player);

            RPSC68PlayerDelete(sc68Player);
        }

        sc68_shutdown();
    }

    return -1;
}
