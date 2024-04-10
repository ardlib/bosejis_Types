# बोसजी की टाइप्स लाइब्रेरी

> जनसाधरण परिचय से मूल्य रूपांतरण करने वाली लाइब्रेरी।

> ***एक रचनात्मक भारतीय उत्पाद।***

## Boseji's Types Library

> (Generic Type to Value Conversion Library)

This library converts given data types into fixed values.
Helps in Creating the **Types Switch** for **C++ Template functions** and many
other applications.

By default *Arduino* has `-fno-rtti` flag enabled.<br />
Hence `typeid` operator in C++ can't be used.

This library is aimed at *solving this issue*.

## Installation

### Using [Zip File](https://github.com/ardlib/bosejis_Types/archive/refs/heads/main.zip) from this repository

Downloading the Zip file of this repository from :

<https://github.com/ardlib/bosejis_Types/archive/refs/heads/main.zip>

And installing using the **Add .ZIP Library** feature:

- For **Arduino IDE 1.8.19** and above:
    
    Go to Menu `Sketch -> Include Library -> Add .ZIP Library`

## Usage

Here is an example how this library is useful:

**`Defines.h`** Header file for *Template function*:
```c++
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
        default:
            Serial.println("Unknown Type!");
            break;
    }
}
# endif /* _DEFINES_H_ */
```

**`Types_Print.ino`** main file:
```c++
#include "Defines.h"

byte v1;
uint8_t v2;
char *v3;
char v4[10];

void setup() {
    Serial.begin(115200);
    while(!Serial){}
}

void loop() {
    delay(2000);
    printType(v1);
    printType(v2);
    printType(v3);
    printType(v4);
}
```

## Contributing

If you want to contribute to this project:

- Report bugs and errors
- Ask for enhancements
- Create issues and pull requests
- Tell others about this library
- Contribute new Types

Please read [CONTRIBUTING.md](https://github.com/ardlib/bosejis_Types/blob/master/CONTRIBUTING.md) for details on our code of conduct, and the process for submitting pull requests to us.

## Credits

This library is written inspired by a [post](https://arduino.stackexchange.com/questions/3079/how-to-retrieve-the-data-type-of-a-variable) from **Arduino Stack Exchange**.

## License

`SPDX: Apache-2.0`

*Boseji's Types Library*

Copyright 2024 Abhijit Bose (aka. Boseji)

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
