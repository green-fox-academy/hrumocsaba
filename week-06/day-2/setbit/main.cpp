
#include <stdio.h>
#include <stdint.h>

void PrintBinary(uint8_t byte) {
    printf("%c%c%c%c %c%c%c%c\n",
           (byte & 0x80 ? '1' : '0'),
           (byte & 0x40 ? '1' : '0'),
           (byte & 0x20 ? '1' : '0'),
           (byte & 0x10 ? '1' : '0'),
           (byte & 0x08 ? '1' : '0'),
           (byte & 0x04 ? '1' : '0'),
           (byte & 0x02 ? '1' : '0'),
           (byte & 0x01 ? '1' : '0'));
}

uint8_t SetBit(uint8_t inp_byte, int bit_position){
    uint8_t bit = 0b00000001 << bit_position;

    inp_byte = inp_byte | bit;
    return inp_byte;

}

int main() {
    /*
     * Write a function called SetBit which takes a byte and a bit position
     * and sets the bit of byte in the specified bit position to 1.
     * E.g. byte = 0b1100, bit position = 1 => returns with 0b1110
     */
    int byte = 0b00001101;
    PrintBinary(SetBit(byte, 5));

    return 0;
}