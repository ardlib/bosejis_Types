/**
 * Types Print Header File
 *
 * बोसजी की टाइप्स लाइब्रेरी
 * =================
 * जनसाधरण परिचय से मूल्य रूपांतरण करने वाली लाइब्रेरी।
 *
 * एक रचनात्मक भारतीय उत्पाद।
 *
 * Boseji's Types Library
 * Generic Type to Value Conversion Library
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
#ifndef _DEFINES_H_
#define _DEFINES_H_

#include <bosejis_types.h>

template<typename T>
void printType(T &val) {
  switch(types(val)) {
    case TYPE_BYTE:
      Serial.println("This is a byte type");
      break;
    case TYPE_CHAR_ARR:
      Serial.println("This is Character array");
      break;
    default:
      Serial.println("Unknown Type!");
      break;
  }
}
# endif /* _DEFINES_H_ */
