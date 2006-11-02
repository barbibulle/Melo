/*----------------------------------------------------------------------
|       Includes
+---------------------------------------------------------------------*/



#include "MloBitStream.h"
#include "MloConfig.h"
#include "MloDebug.h"
#include "MloHcbScaleFactor.h"



/*----------------------------------------------------------------------
|       Types
+---------------------------------------------------------------------*/



typedef struct MLO_HcbScaleFactor_Binary
{
   MLO_Int8       data [2];
}  MLO_HcbScaleFactor_Binary;



/*----------------------------------------------------------------------
|       Constants
+---------------------------------------------------------------------*/



/* 4.A, Table 4.A.1 */
static const MLO_HcbScaleFactor_Binary  MLO_HcbScaleFactor_coodbook [] =
{
   { {   1,  2 } },
   { {  60,  0 } },
   { {   1,  2 } },
   { {   2,  3 } },
   { {   3,  4 } },
   { {  59,  0 } },
   { {   3,  4 } },
   { {   4,  5 } },
   { {   5,  6 } },
   { {  61,  0 } },
   { {  58,  0 } },
   { {  62,  0 } },
   { {   3,  4 } },
   { {   4,  5 } },
   { {   5,  6 } },
   { {  57,  0 } },
   { {  63,  0 } },
   { {   4,  5 } },
   { {   5,  6 } },
   { {   6,  7 } },
   { {   7,  8 } },
   { {  56,  0 } },
   { {  64,  0 } },
   { {  55,  0 } },
   { {  65,  0 } },
   { {   4,  5 } },
   { {   5,  6 } },
   { {   6,  7 } },
   { {   7,  8 } },
   { {  66,  0 } },
   { {  54,  0 } },
   { {  67,  0 } },
   { {   5,  6 } },
   { {   6,  7 } },
   { {   7,  8 } },
   { {   8,  9 } },
   { {   9, 10 } },
   { {  53,  0 } },
   { {  68,  0 } },
   { {  52,  0 } },
   { {  69,  0 } },
   { {  51,  0 } },
   { {   5,  6 } },
   { {   6,  7 } },
   { {   7,  8 } },
   { {   8,  9 } },
   { {   9, 10 } },
   { {  70,  0 } },
   { {  50,  0 } },
   { {  49,  0 } },
   { {  71,  0 } },
   { {   6,  7 } },
   { {   7,  8 } },
   { {   8,  9 } },
   { {   9, 10 } },
   { {  10, 11 } },
   { {  11, 12 } },
   { {  72,  0 } },
   { {  48,  0 } },
   { {  73,  0 } },
   { {  47,  0 } },
   { {  74,  0 } },
   { {  46,  0 } },
   { {   6,  7 } },
   { {   7,  8 } },
   { {   8,  9 } },
   { {   9, 10 } },
   { {  10, 11 } },
   { {  11, 12 } },
   { {  76,  0 } },
   { {  75,  0 } },
   { {  77,  0 } },
   { {  78,  0 } },
   { {  45,  0 } },
   { {  43,  0 } },
   { {   6,  7 } },
   { {   7,  8 } },
   { {   8,  9 } },
   { {   9, 10 } },
   { {  10, 11 } },
   { {  11, 12 } },
   { {  44,  0 } },
   { {  79,  0 } },
   { {  42,  0 } },
   { {  41,  0 } },
   { {  80,  0 } },
   { {  40,  0 } },
   { {   6,  7 } },
   { {   7,  8 } },
   { {   8,  9 } },
   { {   9, 10 } },
   { {  10, 11 } },
   { {  11, 12 } },
   { {  81,  0 } },
   { {  39,  0 } },
   { {  82,  0 } },
   { {  38,  0 } },
   { {  83,  0 } },
   { {   7,  8 } },
   { {   8,  9 } },
   { {   9, 10 } },
   { {  10, 11 } },
   { {  11, 12 } },
   { {  12, 13 } },
   { {  13, 14 } },
   { {  37,  0 } },
   { {  35,  0 } },
   { {  85,  0 } },
   { {  33,  0 } },
   { {  36,  0 } },
   { {  34,  0 } },
   { {  84,  0 } },
   { {  32,  0 } },
   { {   6,  7 } },
   { {   7,  8 } },
   { {   8,  9 } },
   { {   9, 10 } },
   { {  10, 11 } },
   { {  11, 12 } },
   { {  87,  0 } },
   { {  89,  0 } },
   { {  30,  0 } },
   { {  31,  0 } },
   { {   8,  9 } },
   { {   9, 10 } },
   { {  10, 11 } },
   { {  11, 12 } },
   { {  12, 13 } },
   { {  13, 14 } },
   { {  14, 15 } },
   { {  15, 16 } },
   { {  86,  0 } },
   { {  29,  0 } },
   { {  26,  0 } },
   { {  27,  0 } },
   { {  28,  0 } },
   { {  24,  0 } },
   { {  88,  0 } },
   { {   9, 10 } },
   { {  10, 11 } },
   { {  11, 12 } },
   { {  12, 13 } },
   { {  13, 14 } },
   { {  14, 15 } },
   { {  15, 16 } },
   { {  16, 17 } },
   { {  17, 18 } },
   { {  25,  0 } },
   { {  22,  0 } },
   { {  23,  0 } },
   { {  15, 16 } },
   { {  16, 17 } },
   { {  17, 18 } },
   { {  18, 19 } },
   { {  19, 20 } },
   { {  20, 21 } },
   { {  21, 22 } },
   { {  22, 23 } },
   { {  23, 24 } },
   { {  24, 25 } },
   { {  25, 26 } },
   { {  26, 27 } },
   { {  27, 28 } },
   { {  28, 29 } },
   { {  29, 30 } },
   { {  90,  0 } },
   { {  21,  0 } },
   { {  19,  0 } },
   { {   3,  0 } },
   { {   1,  0 } },
   { {   2,  0 } },
   { {   0,  0 } },
   { {  23, 24 } },
   { {  24, 25 } },
   { {  25, 26 } },
   { {  26, 27 } },
   { {  27, 28 } },
   { {  28, 29 } },
   { {  29, 30 } },
   { {  30, 31 } },
   { {  31, 32 } },
   { {  32, 33 } },
   { {  33, 34 } },
   { {  34, 35 } },
   { {  35, 36 } },
   { {  36, 37 } },
   { {  37, 38 } },
   { {  38, 39 } },
   { {  39, 40 } },
   { {  40, 41 } },
   { {  41, 42 } },
   { {  42, 43 } },
   { {  43, 44 } },
   { {  44, 45 } },
   { {  45, 46 } },
   { {  98,  0 } },
   { {  99,  0 } },
   { { 100,  0 } },
   { { 101,  0 } },
   { { 102,  0 } },
   { { 117,  0 } },
   { {  97,  0 } },
   { {  91,  0 } },
   { {  92,  0 } },
   { {  93,  0 } },
   { {  94,  0 } },
   { {  95,  0 } },
   { {  96,  0 } },
   { { 104,  0 } },
   { { 111,  0 } },
   { { 112,  0 } },
   { { 113,  0 } },
   { { 114,  0 } },
   { { 115,  0 } },
   { { 116,  0 } },
   { { 110,  0 } },
   { { 105,  0 } },
   { { 106,  0 } },
   { { 107,  0 } },
   { { 108,  0 } },
   { { 109,  0 } },
   { { 118,  0 } },
   { {   6,  0 } },
   { {   8,  0 } },
   { {   9,  0 } },
   { {  10,  0 } },
   { {   5,  0 } },
   { { 103,  0 } },
   { { 120,  0 } },
   { { 119,  0 } },
   { {   4,  0 } },
   { {   7,  0 } },
   { {  15,  0 } },
   { {  16,  0 } },
   { {  18,  0 } },
   { {  20,  0 } },
   { {  17,  0 } },
   { {  11,  0 } },
   { {  12,  0 } },
   { {  14,  0 } },
   { {  13,  0 } }
};



/*----------------------------------------------------------------------
|       Functions
+---------------------------------------------------------------------*/



/*
==============================================================================
Name: MLO_HcbScaleFactor_decode
Description:
   Decodes a Huffman-compressed Scale Factor. Uses the binary search method.
Input/output parameters:
	- bit_ptr: Stream to decode
Returns: The scale factor
==============================================================================
*/

int   MLO_HcbScaleFactor_decode (MLO_BitStream *bit_ptr)
{
   int            offset = 0;

   MLO_ASSERT (bit_ptr != 0);

   while (MLO_HcbScaleFactor_coodbook [offset].data [1] != 0)
   {
      const int      bit = MLO_BitStream_ReadBit (bit_ptr);
      offset += MLO_HcbScaleFactor_coodbook [offset].data [bit];
      MLO_ASSERT (offset >= 0);
      MLO_ASSERT (offset <= 240);
   }

   return (MLO_HcbScaleFactor_coodbook [offset].data [0]);
}
