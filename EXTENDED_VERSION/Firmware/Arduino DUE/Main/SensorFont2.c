// SensorFont2.c
// Font type    : Numeric (10 characters)
// Font size    : 32x46 pixels
// Memory usage : 1844 bytes

#if defined(__AVR__)
    #include <avr/pgmspace.h>
    #define fontdatatype const uint8_t
#elif defined(__PIC32MX__)
    #define PROGMEM
    #define fontdatatype const unsigned char
#elif defined(__arm__)
    #define PROGMEM
    #define fontdatatype const unsigned char
#endif

fontdatatype SensorFont2[1844] PROGMEM={
0x20,0x2E,0x30,0x0A,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xC0,0x00,0x00,0x7F,0xC0,0x00,0x00,0x71,0xC0,0x00,0x00,0x71,0xC0,0x00,0x00,0x71,0xC0,0x00,0x00,0x71,0xC0,0x00,0x00,0xF1,0xC0,0x00,0x00,0xE1,0xC0,0x00,0x00,0xE1,0xC0,0x00,0x00,0xE1,0xC0,0x00,0x00,0xE1,0xC0,0x00,0x01,0xC1,0xC0,0x00,0x03,0xC1,0xC0,0x00,0x0F,0x81,0xC0,0x00,0x0F,0x01,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // 0
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0x1C,0x00,0x00,0x00,0x0C,0x00,0x00,0x00,0x0C,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x0E,0x00,0x00,0x00,0x06,0x01,0xF0,0x78,0x06,0x00,0xF8,0xF8,0x0C,0x00,0xED,0xF9,0xF8,0x00,0xEF,0xB8,0x00,0x00,0xEF,0xB8,0x00,0x00,0xE7,0x38,0x00,0x00,0xE7,0x38,0x00,0x00,0xE2,0x38,0x00,0x00,0xE0,0x38,0x00,0x00,0xE0,0x38,0x00,0x00,0xE0,0x38,0x00,0x00,0xE0,0x38,0x00,0x00,0xE0,0x38,0x00,0x01,0xE0,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // 1
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x7F,0xFE,0x00,0x00,0xFF,0xFE,0x00,0x00,0x7F,0xFE,0x00,0x00,0x30,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xE0,0x00,0x00,0x3F,0xF8,0x00,0x00,0x38,0x3C,0x00,0x00,0x38,0x1C,0x00,0x00,0x38,0x1C,0x00,0x00,0x38,0x1C,0x00,0x00,0x38,0x1C,0x00,0x00,0x38,0x38,0x00,0x00,0x3F,0xE0,0x00,0x00,0x3F,0xF8,0x00,0x00,0x38,0x3C,0x00,0x00,0x38,0x1E,0x00,0x00,0x38,0x0E,0x00,0x00,0x38,0x0E,0x00,0x00,0x38,0x0E,0x00,0x00,0x38,0x1E,0x00,0x00,0x38,0x3C,0x00,0x00,0x3F,0xF8,0x00,0x00,0x3F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // 2
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x18,0x00,0x00,0xFF,0xFC,0x00,0x00,0xFF,0xFE,0x00,0x00,0xFF,0xFC,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xC0,0x00,0x00,0x3F,0xF0,0x00,0x00,0x20,0x78,0x00,0x00,0x00,0x38,0x00,0x00,0x00,0x38,0x00,0x00,0x00,0x38,0x00,0x00,0x00,0x38,0x00,0x00,0x00,0xF0,0x00,0x00,0x3F,0xC0,0x00,0x00,0x3F,0xF0,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x1C,0x00,0x00,0x00,0x1C,0x00,0x00,0x00,0x1C,0x00,0x00,0x00,0x38,0x00,0x00,0x40,0x78,0x00,0x00,0x7F,0xF0,0x00,0x00,0x3F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // 3
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xC0,0x00,0x00,0x01,0xC0,0x00,0x00,0x01,0xC0,0x00,0x00,0x01,0xC0,0x00,0x00,0x01,0xC0,0x00,0x00,0x01,0xC0,0x00,0x00,0x01,0xC0,0x00,0x00,0x01,0xC0,0x00,0x00,0x01,0xC0,0x00,0x00,0x01,0xC0,0x00,0x00,0x01,0xC0,0x00,0x00,0x07,0xF0,0x00,0x00,0x03,0xE0,0x00,0x00,0x01,0xC0,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xF8,0x00,0x00,0x0F,0xFC,0x00,0x00,0x1E,0x04,0x00,0x00,0x38,0x00,0x00,0x00,0x70,0x00,0x00,0x00,0x70,0x00,0x00,0x00,0xE0,0x00,0x00,0x00,0xE0,0x00,0x00,0x00,0xE0,0x00,0x00,0x00,0xE0,0x00,0x00,0x00,0xE0,0x00,0x00,0x00,0xE0,0x00,0x00,0x00,0xE0,0x00,0x00,0x00,0x70,0x00,0x00,0x00,0x70,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x3C,0x04,0x00,0x00,0x1F,0xFC,0x00,0x00,0x07,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // 4
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x01,0xC0,0x00,0x00,0x03,0xE0,0x00,0x00,0x07,0xF0,0x00,0x00,0x01,0xC0,0x00,0x00,0x01,0xC0,0x00,0x00,0x01,0xC0,0x00,0x00,0x01,0xC0,0x00,0x00,0x01,0xC0,0x00,0x00,0x01,0xC0,0x00,0x00,0x01,0xC0,0x00,0x00,0x01,0xC0,0x00,0x00,0x01,0xC0,0x00,0x00,0x01,0xC0,0x00,0x00,0x01,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x3C,0x00,0x00,0x70,0xFE,0x00,0x00,0x70,0xEE,0x00,0x00,0x70,0xC7,0x00,0x00,0x71,0xC7,0x00,0x00,0x71,0xC7,0x00,0x00,0x71,0xC7,0x00,0x00,0x71,0xC7,0x00,0x00,0x7F,0xC7,0x00,0x00,0x7F,0xC7,0x00,0x00,0x71,0xC7,0x00,0x00,0x71,0xC7,0x00,0x00,0x71,0xC7,0x00,0x00,0x71,0xC7,0x00,0x00,0x71,0xC7,0x00,0x00,0x70,0xC6,0x00,0x00,0x70,0xEE,0x00,0x00,0x70,0xFC,0x00,0x00,0x70,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // 5
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1B,0xC6,0xF1,0xEE,0x1C,0xC7,0x31,0xB6,0x18,0x66,0x19,0xB6,0x18,0x66,0x19,0xB6,0x18,0x66,0x19,0xB6,0x18,0x66,0x19,0xB6,0x18,0x66,0x19,0xB6,0x18,0xC6,0x31,0xB6,0x1F,0x87,0xE1,0xB6,0x18,0x06,0x00,0x00,0x18,0x06,0x00,0x00,0x18,0x06,0x00,0x00,0x18,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // 6
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // 7
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // 8
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // 9
};