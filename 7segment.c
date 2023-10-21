#include "7segment.h"


const uint8_t patterns[] = {
    0b00111111,
    0b00000110,
    0b01011011,
    0b01001111,
    0b01100110,
    0b01101101,
    0b01111101,
    0b00000111,
    0b01111111,
    0b01101111
};

void sevenSegmentInit() {

    DDRB = 0xFF;
}

void sevenSegmentDisplay(uint8_t digit) {
    if (digit >= 0 && digit <= 9) {

        PORTB = patterns[digit];
    }
}
