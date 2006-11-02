/*****************************************************************
|
|      File: MloTypes.h
|
|      Melo - Common Types
|
|      (c) 2004 Gilles Boccon-Gibod
|      Author: Gilles Boccon-Gibod (bok@bok.net)
|
 ****************************************************************/

#ifndef _MLO_TYPES_H_
#define _MLO_TYPES_H_

/*----------------------------------------------------------------------
|       includes
+---------------------------------------------------------------------*/
#include "MloConfig.h"

/*----------------------------------------------------------------------
|       types
+---------------------------------------------------------------------*/
/**
 * Boolean type used for variables that can be true (MLO_TRUE) or false
 * (MLO_FALSE)
 */
typedef enum {
    MLO_FALSE = 0, 
    MLO_TRUE  = 1
} MLO_Boolean;

/**
 * Signed integer value represening a function or method result (return value)
 *
 * When a function or method call succeeds, the return value is always 
 * MLO_SUCCESS unless otherwise documented. Error conditions are always
 * negative values, defined in AtxErrors.h
 */
typedef int  MLO_Result;

/**
 * Type used to represent a bit pattern signifying a combination of flags
 * that can be on or off. Bits set to 1 indicate that the corresponding flag
 * is on, bits set to 0 indicate that the corresponding flag is off. The
 * position and meaning of flags is specific to each method, function, variable
 * or data structure that uses this type, and the corresponding header file
 * will give symbolic constants to represent individual flag bits.
 */
typedef MLO_UInt32  MLO_Flags;

/**
 * An unsigned integer used to represent a bit mask.
 */
typedef MLO_UInt32  MLO_Mask;

/**
 * An unsigned integer used to represent a measurable quantity (eg. the 
 * size of a file)
 */
typedef MLO_UInt32  MLO_Size;

/**
 * A signed integer used to represent an offset from a base value of position.
 */
typedef MLO_Int32   MLO_Offset;

/**
 * An address as a generic pointer, that can be dereferenced as a byte address.
 */
typedef unsigned char* MLO_Address;

/**
 * An unsigned integer used to represent the difference between a maximum 
 * value and a minimum value.
 */
typedef MLO_UInt32  MLO_Range;

/**
 * An unsigned integer used to represent a quantity that can be counted (such
 * as an number of elements in a list).
 */
typedef MLO_UInt32  MLO_Cardinal;

/**
 * An unsigned integer that represents a position in a sequence (such as an
 * index into a list of elements).
 */
typedef MLO_UInt32  MLO_Ordinal;


/**
 * A const pointer to a NULL-terminated character array, used to represent 
 * strings. Strings that cannot be represented by characters in the ASCII set
 * are encoded as UTF-8 unless otherwise specified.
 */
typedef const char* MLO_String;
typedef char*       MLO_StringBuffer;

/**
 * Pointer to void, used to represent pointers to arbitrary untyped data 
 * buffers.
 */
typedef void*       MLO_Any;
typedef const void* MLO_AnyConst;

/**
 * 8-bit Byte
 */
typedef MLO_UInt8 MLO_Byte;

/**
 * Pointer to a byte buffer
 */
typedef MLO_UInt8* MLO_ByteBuffer;

#endif /* _MLO_TYPES_H_ */
