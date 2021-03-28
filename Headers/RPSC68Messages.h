#ifndef RPSC68MESSAGES_H
#define RPSC68MESSAGES_H

#ifdef __cplusplus
extern "C"
{
#endif

typedef enum
{
    RPSC68MessageIDLoadFileRequest       = 1,
    RPSC68MessageIDLoadFileResponse      = 2,
    RPSC68MessageIDSetConfigRequest      = 3,
    RPSC68MessageIDSetConfigResponse     = 4,
    RPSC68MessageIDReadAudioDataRequest  = 5,
    RPSC68MessageIDReadAudioDataResponse = 6,
    RPSC68MessageIDGetSongInfoRequest    = 7,
    RPSC68MessageIDGetSongInfoResponse   = 8,
    RPSC68MessageIDPlaySongRequest       = 9,
    RPSC68MessageIDPlaySongResponse      = 10
}   RPSC68MessageID;

typedef struct
{
    char filePath[256];
} RPSC68LoadFileRequestContent;

typedef struct
{
    uint32_t success;
    uint32_t songCount;
} RPSC68LoadFileResponseContent;

typedef struct
{
    uint32_t sampleRate;
    /* userPath string. */
    /* sharedPath string. */
} RPSC68SetConfigRequestContent;

typedef struct
{
    uint32_t success;
} RPSC68SetConfigResponseContent;

typedef struct
{
    uint32_t sampleCount;
} RPSC68ReadAudioDataRequestContent;

typedef struct
{
    uint32_t success;
    uint32_t sampleCount;
    /* Followed by actual waveform data. */
} RPSC68ReadAudioDataResponseContent;

typedef struct
{
    uint32_t subsong;
} RPSC68GetSongInfoRequestContent;

typedef struct
{
    uint32_t success;
    uint32_t ym;
    uint32_t ste;
    uint32_t amiga;
    uint32_t duration;
    uint32_t startTime;
    uint32_t replayRate;
    uint32_t loadAddress;
    /* Song name string. */
    /* Artist name string. */
    /* Composer name string. */
    /* Replayer name string. */
    /* Hardware description string. */
} RPSC68GetSongInfoResponseContent;

typedef struct
{
    uint32_t subsong;
} RPSC68PlaySongRequestContent;

typedef struct
{
    uint32_t success;
} RPSC68PlaySongResponseContent;

#ifdef __cplusplus
}
#endif

#endif
