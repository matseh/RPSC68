#ifdef N
#error N should not be defined at this point
#define N(REPT,BYTES) ( ((REPT-1)<<3) | ((BYTES-2)) )

/* Compact table for 68k opcode size. The first number (REPT) is a
 * repeat count (how many consecutive opcodes have the same size. The
 * second number (BYTES) is the size in byte for this serie of
 * opcodes. The final encoding is 1 byte per entry (the the 3 less
 * significant bit are the size in 16-bit word (1-5), the 5 most
 * significant bits is the number of repeat minus 1 (0-31 => 1-32)
 *
 * Generated by oplen68 (tools/oplen68.c)
 */

static const uint8_t opsize_compact[] = {
  N(8,4),N(8,2),N(24,4),N(17,6),N(1,8),N(2,2),N(1,4),N(3,2),
  N(8,4),N(8,2),N(24,4),N(17,6),N(1,8),N(2,2),N(1,4),N(3,2),
  N(8,6),N(8,2),N(24,6),N(17,8),N(1,10),N(32,2),N(32,2),N(14,2),
  N(8,4),N(24,2),N(17,4),N(1,6),N(14,2),N(8,4),N(24,2),N(17,4),
  N(1,6),N(14,2),N(8,4),N(24,2),N(17,4),N(1,6),N(14,2),N(8,4),
  N(24,2),N(17,4),N(1,6),N(6,2),N(8,4),N(8,2),N(24,4),N(17,6),
  N(1,8),N(2,2),N(1,4),N(3,2),N(8,4),N(8,2),N(24,4),N(17,6),
  N(1,8),N(2,2),N(1,4),N(3,2),N(8,6),N(8,2),N(24,6),N(17,8),
  N(1,10),N(32,2),N(32,2),N(14,2),N(8,4),N(24,2),N(17,4),N(1,6),
  N(14,2),N(8,4),N(24,2),N(17,4),N(1,6),N(14,2),N(8,4),N(24,2),
  N(17,4),N(1,6),N(14,2),N(8,4),N(24,2),N(17,4),N(1,6),N(6,2),
  N(8,4),N(8,2),N(24,4),N(17,6),N(1,8),N(6,2),N(8,4),N(8,2),
  N(24,4),N(17,6),N(1,8),N(6,2),N(8,6),N(8,2),N(24,6),N(17,8),
  N(1,10),N(32,2),N(32,2),N(14,2),N(8,4),N(24,2),N(17,4),N(1,6),
  N(14,2),N(8,4),N(24,2),N(17,4),N(1,6),N(14,2),N(8,4),N(24,2),
  N(17,4),N(1,6),N(14,2),N(8,4),N(24,2),N(17,4),N(1,6),N(6,2),
  N(8,4),N(8,2),N(24,4),N(17,6),N(1,8),N(6,2),N(8,4),N(8,2),
  N(24,4),N(17,6),N(1,8),N(6,2),N(8,6),N(8,2),N(24,6),N(17,8),
  N(1,10),N(32,2),N(32,2),N(14,2),N(8,4),N(24,2),N(17,4),N(1,6),
  N(14,2),N(8,4),N(24,2),N(17,4),N(1,6),N(14,2),N(8,4),N(24,2),
  N(17,4),N(1,6),N(14,2),N(8,4),N(24,2),N(17,4),N(1,6),N(6,2),
  N(8,4),N(8,2),N(24,4),N(17,6),N(1,8),N(6,2),N(8,4),N(8,2),
  N(24,4),N(17,6),N(1,8),N(6,2),N(8,4),N(8,2),N(24,4),N(17,6),
  N(1,8),N(6,2),N(8,4),N(8,2),N(24,4),N(17,6),N(1,8),N(14,2),
  N(8,4),N(24,2),N(17,4),N(1,6),N(14,2),N(8,4),N(24,2),N(17,4),
  N(1,6),N(14,2),N(8,4),N(24,2),N(17,4),N(1,6),N(14,2),N(8,4),
  N(24,2),N(17,4),N(1,6),N(6,2),N(8,4),N(8,2),N(24,4),N(17,6),
  N(1,8),N(2,2),N(1,4),N(3,2),N(8,4),N(8,2),N(24,4),N(17,6),
  N(1,8),N(2,2),N(1,4),N(3,2),N(8,6),N(8,2),N(24,6),N(17,8),
  N(1,10),N(32,2),N(32,2),N(14,2),N(8,4),N(24,2),N(17,4),N(1,6),
  N(14,2),N(8,4),N(24,2),N(17,4),N(1,6),N(14,2),N(8,4),N(24,2),
  N(17,4),N(1,6),N(14,2),N(8,4),N(24,2),N(17,4),N(1,6),N(6,2),
  N(8,4),N(8,2),N(24,4),N(17,6),N(1,8),N(6,2),N(8,4),N(8,2),
  N(24,4),N(17,6),N(1,8),N(6,2),N(8,6),N(8,2),N(24,6),N(17,8),
  N(1,10),N(32,2),N(32,2),N(14,2),N(8,4),N(24,2),N(17,4),N(1,6),
  N(14,2),N(8,4),N(24,2),N(17,4),N(1,6),N(14,2),N(8,4),N(24,2),
  N(17,4),N(1,6),N(14,2),N(8,4),N(24,2),N(17,4),N(1,6),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(14,2),
  N(8,4),N(24,2),N(17,4),N(1,6),N(14,2),N(8,4),N(24,2),N(17,4),
  N(1,6),N(14,2),N(8,4),N(24,2),N(17,4),N(1,6),N(14,2),N(8,4),
  N(24,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(3,4),
  N(32,2),N(32,2),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),
  N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),
  N(3,4),N(3,2),N(8,4),N(8,2),N(24,4),N(17,6),N(1,8),N(3,6),
  N(3,2),N(8,4),N(8,2),N(24,4),N(17,6),N(1,8),N(3,6),N(3,2),
  N(8,4),N(8,2),N(24,4),N(17,6),N(1,8),N(3,6),N(32,2),N(11,2),
  N(17,4),N(1,6),N(3,4),N(32,2),N(32,2),N(32,2),N(11,2),N(17,4),
  N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),
  N(11,2),N(17,4),N(1,6),N(3,4),N(3,2),N(8,4),N(8,2),N(24,4),
  N(17,6),N(1,8),N(3,6),N(3,2),N(8,4),N(8,2),N(24,4),N(17,6),
  N(1,8),N(3,6),N(3,2),N(8,6),N(8,2),N(24,6),N(17,8),N(1,10),
  N(3,8),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(32,2),
  N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),
  N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(3,2),
  N(8,4),N(8,2),N(24,4),N(17,6),N(1,8),N(3,6),N(3,2),N(8,4),
  N(8,2),N(24,4),N(17,6),N(1,8),N(3,6),N(32,2),N(32,2),N(32,2),
  N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(32,2),N(32,2),N(11,2),
  N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),
  N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(3,2),N(8,4),N(8,2),
  N(24,4),N(17,6),N(1,8),N(3,6),N(3,2),N(8,4),N(8,2),N(24,4),
  N(17,6),N(1,8),N(3,6),N(32,2),N(32,2),N(32,2),N(11,2),N(17,4),
  N(1,6),N(3,4),N(32,2),N(32,2),N(32,2),N(11,2),N(17,4),N(1,6),
  N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),
  N(17,4),N(1,6),N(3,4),N(3,2),N(8,4),N(8,2),N(24,4),N(17,6),
  N(1,8),N(3,6),N(3,2),N(8,4),N(8,2),N(24,4),N(17,6),N(1,8),
  N(3,6),N(32,2),N(32,2),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),
  N(32,2),N(32,2),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),
  N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),
  N(3,4),N(3,2),N(8,4),N(8,2),N(24,4),N(17,6),N(1,8),N(3,6),
  N(3,2),N(8,4),N(8,2),N(24,4),N(17,6),N(1,8),N(3,6),N(32,2),
  N(32,2),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(32,2),
  N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),
  N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(3,2),
  N(8,4),N(8,2),N(24,4),N(17,6),N(1,8),N(3,6),N(3,2),N(8,4),
  N(8,2),N(24,4),N(17,6),N(1,8),N(3,6),N(32,2),N(32,2),N(32,2),
  N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(32,2),N(32,2),N(11,2),
  N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),
  N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(3,2),N(8,4),N(8,2),
  N(24,4),N(17,6),N(1,8),N(3,6),N(3,2),N(8,4),N(8,2),N(24,4),
  N(17,6),N(1,8),N(3,6),N(32,2),N(32,2),N(32,2),N(11,2),N(17,4),
  N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),
  N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),
  N(11,2),N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),
  N(1,6),N(2,4),N(1,6),N(3,2),N(32,4),N(8,4),N(17,6),N(1,8),
  N(2,6),N(1,8),N(3,2),N(32,4),N(8,4),N(17,6),N(1,8),N(2,6),
  N(1,8),N(3,2),N(32,4),N(8,4),N(17,6),N(1,8),N(2,6),N(1,8),
  N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),
  N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),
  N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),N(1,6),
  N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),N(1,6),N(3,2),N(32,4),
  N(8,4),N(17,6),N(1,8),N(2,6),N(1,8),N(3,2),N(32,4),N(8,4),
  N(17,6),N(1,8),N(2,6),N(1,8),N(3,2),N(32,6),N(8,6),N(17,8),
  N(1,10),N(2,8),N(1,10),N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),
  N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),
  N(11,2),N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),
  N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),
  N(1,6),N(3,2),N(32,4),N(8,4),N(17,6),N(1,8),N(2,6),N(1,8),
  N(3,2),N(32,4),N(8,4),N(17,6),N(1,8),N(2,6),N(1,8),N(32,2),
  N(32,2),N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),
  N(11,2),N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),
  N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),
  N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),N(1,6),N(3,2),
  N(32,4),N(8,4),N(17,6),N(1,8),N(2,6),N(1,8),N(3,2),N(32,4),
  N(8,4),N(17,6),N(1,8),N(2,6),N(1,8),N(32,2),N(32,2),N(32,2),
  N(11,2),N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),
  N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),
  N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),
  N(11,2),N(17,4),N(1,6),N(2,4),N(1,6),N(3,2),N(32,4),N(8,4),
  N(17,6),N(1,8),N(2,6),N(1,8),N(3,2),N(32,4),N(8,4),N(17,6),
  N(1,8),N(2,6),N(1,8),N(32,2),N(32,2),N(32,2),N(11,2),N(17,4),
  N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),
  N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),
  N(11,2),N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),
  N(1,6),N(2,4),N(1,6),N(3,2),N(32,4),N(8,4),N(17,6),N(1,8),
  N(2,6),N(1,8),N(3,2),N(32,4),N(8,4),N(17,6),N(1,8),N(2,6),
  N(1,8),N(32,2),N(32,2),N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),
  N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),
  N(11,2),N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),
  N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),
  N(1,6),N(3,2),N(32,4),N(8,4),N(17,6),N(1,8),N(2,6),N(1,8),
  N(3,2),N(32,4),N(8,4),N(17,6),N(1,8),N(2,6),N(1,8),N(32,2),
  N(32,2),N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),
  N(11,2),N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),
  N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),
  N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),N(1,6),N(3,2),
  N(32,4),N(8,4),N(17,6),N(1,8),N(2,6),N(1,8),N(3,2),N(32,4),
  N(8,4),N(17,6),N(1,8),N(2,6),N(1,8),N(32,2),N(32,2),N(32,2),
  N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),
  N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),
  N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),
  N(3,2),N(32,4),N(8,4),N(17,6),N(1,8),N(3,6),N(3,2),N(32,4),
  N(8,4),N(17,6),N(1,8),N(3,6),N(3,2),N(32,4),N(8,4),N(17,6),
  N(1,8),N(3,6),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),
  N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),
  N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),
  N(17,4),N(1,6),N(3,4),N(3,2),N(32,4),N(8,4),N(17,6),N(1,8),
  N(3,6),N(3,2),N(32,4),N(8,4),N(17,6),N(1,8),N(3,6),N(3,2),
  N(32,6),N(8,6),N(17,8),N(1,10),N(3,8),N(32,2),N(11,2),N(17,4),
  N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),
  N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),
  N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(3,2),N(32,4),
  N(8,4),N(17,6),N(1,8),N(3,6),N(3,2),N(32,4),N(8,4),N(17,6),
  N(1,8),N(3,6),N(32,2),N(32,2),N(32,2),N(11,2),N(17,4),N(1,6),
  N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),
  N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),
  N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(3,2),N(32,4),N(8,4),
  N(17,6),N(1,8),N(3,6),N(3,2),N(32,4),N(8,4),N(17,6),N(1,8),
  N(3,6),N(32,2),N(32,2),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),
  N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),
  N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),
  N(11,2),N(17,4),N(1,6),N(3,4),N(3,2),N(32,4),N(8,4),N(17,6),
  N(1,8),N(3,6),N(3,2),N(32,4),N(8,4),N(17,6),N(1,8),N(3,6),
  N(32,2),N(32,2),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),
  N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),
  N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),
  N(17,4),N(1,6),N(3,4),N(3,2),N(32,4),N(8,4),N(17,6),N(1,8),
  N(3,6),N(3,2),N(32,4),N(8,4),N(17,6),N(1,8),N(3,6),N(32,2),
  N(32,2),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),
  N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),
  N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),
  N(1,6),N(3,4),N(3,2),N(32,4),N(8,4),N(17,6),N(1,8),N(3,6),
  N(3,2),N(32,4),N(8,4),N(17,6),N(1,8),N(3,6),N(32,2),N(32,2),
  N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),
  N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),
  N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),
  N(3,4),N(3,2),N(32,4),N(8,4),N(17,6),N(1,8),N(3,6),N(3,2),
  N(32,4),N(8,4),N(17,6),N(1,8),N(3,6),N(32,2),N(32,2),N(32,2),
  N(11,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),
  N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(14,2),N(17,4),N(1,6),N(3,4),
  N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),N(32,2),N(12,2),N(17,4),
  N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),
  N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(14,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),
  N(17,4),N(1,6),N(2,4),N(32,2),N(12,2),N(17,4),N(1,6),N(32,2),
  N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),
  N(14,2),N(17,4),N(1,6),N(3,4),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),
  N(1,6),N(2,4),N(32,2),N(12,2),N(17,4),N(1,6),N(32,2),N(14,2),
  N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),
  N(17,4),N(1,6),N(3,4),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),
  N(2,4),N(32,2),N(12,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),
  N(1,6),N(2,4),N(20,2),N(8,4),N(8,2),N(8,4),N(17,6),N(1,8),
  N(22,2),N(8,4),N(8,2),N(8,4),N(17,6),N(1,8),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(14,2),N(17,4),N(1,6),N(3,4),N(32,2),
  N(11,2),N(17,4),N(1,6),N(2,4),N(32,2),N(12,2),N(17,4),N(1,6),
  N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),
  N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(14,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),
  N(1,6),N(2,4),N(32,2),N(32,2),N(32,2),N(32,2),N(20,2),N(16,4),
  N(8,2),N(17,6),N(1,8),N(2,6),N(20,2),N(16,4),N(8,2),N(17,6),
  N(1,8),N(2,6),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(12,2),
  N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),
  N(32,2),N(32,2),N(20,2),N(8,4),N(26,2),N(1,4),N(32,2),N(21,2),
  N(17,4),N(1,6),N(2,4),N(32,2),N(12,2),N(17,4),N(1,6),N(2,4),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(12,2),N(17,4),N(1,6),
  N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),N(32,2),N(12,2),
  N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),
  N(17,4),N(1,6),N(14,2),N(8,4),N(24,2),N(17,4),N(1,6),N(32,2),
  N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),
  N(14,2),N(17,4),N(1,6),N(14,2),N(8,4),N(24,2),N(17,4),N(1,6),
  N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),
  N(32,2),N(14,2),N(17,4),N(1,6),N(14,2),N(8,4),N(24,2),N(17,4),
  N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),
  N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(14,2),N(8,4),N(24,2),
  N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),
  N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(14,2),N(8,4),
  N(24,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),
  N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(14,2),
  N(8,4),N(24,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),
  N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),
  N(14,2),N(8,4),N(24,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),
  N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),
  N(1,6),N(14,2),N(8,4),N(24,2),N(17,4),N(1,6),N(32,2),N(14,2),
  N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),
  N(17,4),N(1,6),N(14,2),N(8,4),N(24,2),N(17,4),N(1,6),N(32,2),
  N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),
  N(14,2),N(17,4),N(1,6),N(14,2),N(8,4),N(24,2),N(17,4),N(1,6),
  N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),
  N(32,2),N(14,2),N(17,4),N(1,6),N(14,2),N(8,4),N(24,2),N(17,4),
  N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),
  N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(14,2),N(8,4),N(24,2),
  N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),
  N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(14,2),N(8,4),
  N(24,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),
  N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(14,2),
  N(8,4),N(24,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),
  N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),
  N(14,2),N(8,4),N(24,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),
  N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),
  N(1,6),N(14,2),N(8,4),N(24,2),N(17,4),N(1,6),N(6,2),N(1,4),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(31,2),
  N(1,4),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(31,2),N(1,4),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(31,2),N(1,4),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(31,2),N(1,4),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(31,2),N(1,4),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(31,2),N(1,4),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(31,2),N(1,4),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(31,2),N(1,4),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(31,2),
  N(1,4),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(31,2),N(1,4),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(31,2),N(1,4),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(31,2),N(1,4),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(31,2),N(1,4),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(31,2),N(1,4),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(31,2),N(1,4),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(7,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),
  N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),
  N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),
  N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),
  N(32,2),N(14,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),
  N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),
  N(11,2),N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),
  N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(32,2),N(14,2),
  N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),
  N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),
  N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),
  N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),
  N(32,2),N(11,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),
  N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),
  N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),
  N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),
  N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),
  N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),
  N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(3,4),N(32,2),
  N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),
  N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),
  N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),
  N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),
  N(32,2),N(14,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),
  N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),
  N(11,2),N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),
  N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(32,2),N(14,2),
  N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),
  N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),
  N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),
  N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),
  N(32,2),N(11,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),
  N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),
  N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),
  N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),
  N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),
  N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),
  N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(3,4),N(32,2),
  N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),
  N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),
  N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),
  N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),
  N(32,2),N(14,2),N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),
  N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),
  N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),
  N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(32,2),
  N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),
  N(14,2),N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),
  N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),
  N(11,2),N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),
  N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(32,2),N(14,2),
  N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),
  N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),
  N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),
  N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),
  N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),
  N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),
  N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),
  N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),
  N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),
  N(32,2),N(11,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),
  N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),
  N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),
  N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),
  N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),
  N(11,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),
  N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(2,4),
  N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),
  N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),
  N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),
  N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),
  N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(2,4),N(1,6),
  N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),
  N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),N(1,6),
  N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),
  N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),
  N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),
  N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),
  N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),
  N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),
  N(32,2),N(14,2),N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),
  N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),
  N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),
  N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(32,2),
  N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),
  N(14,2),N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),
  N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),
  N(11,2),N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),
  N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(32,2),N(14,2),
  N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),
  N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),
  N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),
  N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),
  N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),
  N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),
  N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),
  N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),
  N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),
  N(32,2),N(11,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),
  N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),
  N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),
  N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),
  N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),
  N(11,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),
  N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(2,4),
  N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),
  N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),
  N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),
  N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),
  N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(2,4),N(1,6),
  N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),
  N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),N(1,6),
  N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),
  N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),
  N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),
  N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),
  N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),
  N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),
  N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),
  N(32,2),N(14,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),
  N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),
  N(11,2),N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),
  N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(32,2),N(14,2),
  N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),
  N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),
  N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),
  N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),
  N(32,2),N(11,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),
  N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),
  N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),
  N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),
  N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),
  N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),
  N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(3,4),N(32,2),
  N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),
  N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),
  N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),
  N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),
  N(32,2),N(14,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),
  N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),
  N(11,2),N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),
  N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(32,2),N(14,2),
  N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),
  N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),
  N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),
  N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),
  N(32,2),N(11,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),
  N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),
  N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),
  N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),
  N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),
  N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),
  N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(3,4),N(32,2),
  N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),
  N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),
  N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),
  N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),
  N(32,2),N(14,2),N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),
  N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),
  N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),
  N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(32,2),
  N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),
  N(14,2),N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),
  N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),
  N(11,2),N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),
  N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(32,2),N(14,2),
  N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),
  N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),
  N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),
  N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),
  N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),
  N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),
  N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),
  N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),
  N(1,6),N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),
  N(32,2),N(11,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),
  N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),
  N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),
  N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),
  N(2,4),N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),
  N(11,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),
  N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(2,4),
  N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),
  N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),
  N(1,6),N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),
  N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),
  N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(2,4),N(1,6),
  N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),
  N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),N(1,6),N(2,4),N(1,6),
  N(32,2),N(11,2),N(17,4),N(1,6),N(3,4),N(32,2),N(11,2),N(17,4),
  N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(14,2),N(17,4),
  N(1,6),N(32,2),N(14,2),N(17,4),N(1,6),N(2,4),N(1,6),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(11,2),N(17,4),
  N(1,6),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(14,2),N(17,4),N(1,6),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(14,2),N(17,4),
  N(1,6),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(14,2),N(17,4),N(1,6),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(14,2),N(17,4),N(1,6),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),
  N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(32,2),N(6,2),
};

#undef N
