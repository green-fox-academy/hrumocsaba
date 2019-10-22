
#include <stdio.h>
#include <stdint.h>

void PrintBinary(uint8_t byte) {
    printf("%c%c%c%c %c%c%c%c | ",
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
            //PrintBinary(inp_byte);
        }else{
            inp_byte = inp_byte >> 1;
            //PrintBinary(inp_byte);
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
            //PrintBinary(inp_byte);
        }else{
            inp_byte = inp_byte << 1;
            //PrintBinary(inp_byte);
        }
    }
    return inp_byte;
}



void array_rotator(uint32_t ptr[], uint32_t bytes, uint32_t rotation_count, uint8_t right) {
    /* This function should rotate the ptr buffer bits by rotation_count to left or right direction.
     * The rotation direction is right if the right parameter is positive, left otherwise.
     * E.g. ptr ->  |   0xAA    |    0x55   |    0x23   |
     *              | 1010 1010 | 0101 0101 | 0010 0011 |
     * array_rotator(ptr, 3, 2, 1) result is:
     *              |   0xEA    |    0x95   |    0x48   |
     *              | 1110 1010 | 1001 0101 | 0100 1000 |
     */
    uint32_t temptr[bytes];
    for (int k = 0; k < bytes; ++k) {
        temptr[k]=ptr[k];
    }
    uint8_t bitmask1 = 0b10000000;
    uint8_t bitmask2 = 0b00000001;
    int j;
    if(right) {
        for (int i = 1; i <= rotation_count; ++i) {
            for (j = 1; j < bytes - 1; ++j) {
                if(is_odd(ptr[j])){
                    ptr[j+1] = ptr [j+1] >> 1;
                    ptr[j+1] = ptr [j+1] | bitmask1;
                }else{
                    ptr[j+1] = ptr[j+1] >> 1;
                }
                if (is_odd(ptr[j - 1])) {
                    ptr[j] = ptr[j] >> 1;
                    ptr[j] = ptr[j] | bitmask1;
                }else{
                    ptr[j] = ptr[j] >> 1;
                }
            }
                if (is_odd(temptr[bytes - 1])) {
                    ptr[0] = ptr[0] >> 1;
                    ptr[0] = ptr[0] | bitmask1;
                } else {
                    ptr[0] = ptr[0] >> 1;
                }
            for (int k = 0; k < bytes; ++k) {
                temptr[k]=ptr[k];
            }
        }
    }else{
        for (int i = 1; i <= rotation_count; ++i) {
            for (j = 1; j < bytes - 1; ++j) {
                if((ptr[j-1] & 0x80)){
                    ptr[j+1] = ptr [j+1] << 1;
                    ptr[j+1] = ptr [j+1] | bitmask2;
                }else{
                    ptr[j+1] = ptr[j+1] << 1;
                }
                if ((ptr[j] & 0x80)) {
                    ptr[j] = ptr[j] << 1;
                    ptr[j] = ptr[j] | bitmask2;
                }else{
                    ptr[j] = ptr[j] << 1;
                }
            }
            if ((ptr[bytes-1] & 0x80)) {
                ptr[0] = ptr[0] << 1;
                ptr[0] = ptr[0] | bitmask2;
            } else {
                ptr[0] = ptr[0] << 1;
            }
            for (int k = 0; k < bytes; ++k) {
                temptr[k]=ptr[k];
            }
        }
    }

    for (int j = 0; j < bytes; ++j) {
        PrintBinary(ptr[j]);
    }

}

int main() {
    uint8_t byte = 0b0100101;
    PrintBinary(SetBit(byte, 4));
    PrintBinary(ClearBit(byte,0));
    PrintBinary(toggle_bit(byte,2));
    uint8_t byte2 = 0b0001101;
    printf("%d \n", is_even(byte2));
    printf("%d \n \n", is_odd(byte2));
    PrintBinary(rotate_right(byte2, 5));
    printf("\n");
    PrintBinary(rotate_left(byte2, 5));
    printf("\n");
    printf("\n");
    uint32_t array[] = {0x00, 0x00, 0x00, 0x00, 0xFF};

    for (int j = 0; j < 5; ++j) {
        PrintBinary(array[j]);
    }
    printf("\n");

    for (int i = 0; i < 1000; ++i) {
        array_rotator(array,5,1,1);
        printf("\n");

    }


    return 0;
}