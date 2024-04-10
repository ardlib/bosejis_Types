/**
 * बोसजी की टाइप्स लाइब्रेरी
 * =================
 * जनसाधरण परिचय से मूल्य रूपांतरण करने वाली लाइब्रेरी।
 *
 * एक रचनात्मक भारतीय उत्पाद।
 *
 * Boseji's Types Library
 * Generic Type to Value Conversion Library
 *
 * This library converts given data types into fixed values.
 * Helps in Creating the Types Switch for C++ Template functions and many
 * other applications.
 *
 * By default *Arduino* has `-fno-rtti` flag enabled.
 * Hence `typeid` operator in C++ can't be used.
 *
 * This library is aimed at *solving this issue*.
 *
 * Sources
 * -------
 * https://github.com/ardlib/bosejis_Types
 *
 * License
 * --------
 * SPDX: Apache-2.0
 * 
 * Boseji's Types Library
 *
 * Copyright 2024 Abhijit Bose (aka. Boseji)
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef _BOSEJIS_TYPES_H_
#define _BOSEJIS_TYPES_H_

#include <Arduino.h>

// For uint8_t*, byte* and unsigned char * types
#define TYPE_BYTE_ARR   ((size_t)0x01U)
// For uint16_t type
#define TYPE_UINT16     ((size_t)0x02U)
// For uint32_t type
#define TYPE_UINT32     ((size_t)0x03U)
// For uint64_t type
#define TYPE_UINT64     ((size_t)0x04U)
// For float type
#define TYPE_FLOAT      ((size_t)0x05U)
// For double type
#define TYPE_DOUBLE     ((size_t)0x06U)
// For uint8_t , byte and unsigned char types
#define TYPE_BYTE       ((size_t)0x07U)
// For int8_t and char
#define TYPE_CHAR       ((size_t)0x08U)
// For int16_t and short type
#define TYPE_INT16      ((size_t)0x09U)
// For int32_t and int type
#define TYPE_INT32      ((size_t)0x0AU)
// For Bool type
#define TYPE_BOOL       ((size_t)0x0BU)
// For char* and const char* types
#define TYPE_CHAR_ARR   ((size_t)0x0CU)
// For int64_t and long long type
#define TYPE_INT64      ((size_t)0x0AU)

/* Types functions that return the specific Type value */

size_t types(byte* b) { return TYPE_BYTE_ARR; }
size_t types(const byte* b) { return TYPE_BYTE_ARR; }
size_t types(uint16_t b) { return TYPE_UINT16; }
size_t types(uint32_t b) { return TYPE_UINT32; }
size_t types(uint64_t b) { return TYPE_UINT64; }
size_t types(float b) { return TYPE_FLOAT; }
size_t types(double b) { return TYPE_DOUBLE; }
size_t types(byte b) { return TYPE_BYTE; }
size_t types(char b) { return TYPE_CHAR; }
size_t types(int16_t b) { return TYPE_INT16; }
size_t types(int32_t b) { return TYPE_INT32; }
size_t types(bool b) { return TYPE_BOOL; }
size_t types(char *b) { return TYPE_CHAR_ARR; }
size_t types(const char *b) { return TYPE_CHAR_ARR; }
size_t types(int64_t b) { return TYPE_INT64; }

#endif /* _BOSEJIS_TYPES_H_ */