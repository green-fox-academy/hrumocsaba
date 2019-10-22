
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
uint8_t ClearBit(uint8_t inp_byte, int position){
    uint8_t bit = 0b00000001 << position;
    uint8_t inp_byte2 = inp_byte ^ bit;
    if((inp_byte - inp_byte2) > 0){
        return inp_byte2;
    }else{
        return inp_byte;
    }

}

uint8_t toggle_bit(uint8_t inp_byte, int position){
    uint8_t bitmask = 0b00000001 << position;
    inp_byte = inp_byte ^ bitmask;
    return inp_byte;
}

uint8_t is_even(uint8_t inp_byte){
    uint8_t inp_byte2 = inp_byte;
    uint8_t bitmask = 0b00000001;
    inp_byte = inp_byte | bitmask;
    inp_byte2 = inp_byte2 ^ inp_byte;
    return inp_byte2;
}

uint8_t is_odd(uint8_t inp_byte){
    uint8_t inp_byte2 = inp_byte;
    uint8_t bitmask = 0b00000001;
    inp_byte = inp_byte | bitmask;
    inp_byte2 = inp_byte2 ^ inp_byte;
    return inp_byte2 ^ bitmask;
}

uint8_t rotate_right(uint8_t inp_byte, int number){
    uint8_t bitmask = 0b10000000;
    uint8_t bitmask2 = ~bitmask;

    for (int i = 0; i < number; ++i) {
        if(is_odd(inp_byte)){
            inp_byte = inp_byte >> 1;
            inp_byte = inp_byte | bitmask;
            PrintBinary(inp_byte);
        }else{
            inp_byte = inp_byte >> 1;
            PrintBinary(inp_byte);
        }
    }
    return inp_byte;
}

uint8_t rotate_left(uint8_t inp_byte, int number){
    uint8_t bitmask = 0b00000001;
    uint8_t bitmask2 = ~bitmask;

    for (int i = 0; i < number; ++i) {
        if((inp_byte & 0x80)){
            inp_byte = inp_byte << 1;
            inp_byte = inp_byte | bitmask;
            PrintBinary(inp_byte);
        }else{
            inp_byte = inp_byte << 1;
            PrintBinary(inp_byte);
        }
    }
    return inp_byte;
}



int main() {
    /* 1.
 * Write a function called RotateRight which takes a byte and a number
 * and rotates the bits of byte in right direction number times.
 * It should return with the result.
 * E.g. byte = 0b1000000, number = 1 => returns 0b01000000
 * E.g. byte = 0b1000001, number = 2 => returns 0b01100000
 */

    /* 2.
     * Write a function called RotateLeft which takes a byte and a number
     * and rotates the bits of byte in left direction number times.
     * It should return with the result.
     * E.g. byte = 0b1000000, number = 1 => returns 0b00000001
     * E.g. byte = 0b1000001, number = 2 => returns 0b00000110
     */

    uint8_t byte = 0b0100101;
    PrintBinary(SetBit(byte, 4));
    PrintBinary(ClearBit(byte,0));
    PrintBinary(toggle_bit(byte,2));
    uint8_t byte2 = 0b0001101;
    printf("%d \n", is_even(byte2));
    printf("%d \n \n", is_odd(byte2));
    PrintBinary(rotate_right(byte2, 4));
    printf("\n");
    PrintBinary(rotate_left(byte2, 2));


    return 0;
}