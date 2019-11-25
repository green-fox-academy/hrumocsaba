#include <stdio.h>
#include <stdint-gcc.h>

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

typedef enum size{small, medium, big, large}SIZE;

typedef  struct dog{
    char* name;
    int age;
    float weight;
    SIZE size;
}dog_t;

char* get_oldest(dog_t dogs[],int n){
    dog_t oldest = dogs[0];
    printf("%d\n",n);
    for (int i = 0; i < n-1; ++i) {
        if(dogs[i+1].age > oldest.age){
            oldest = dogs[i+1];
        }
    }
    return oldest.name;
}

int get_size_count(dog_t dogs[],SIZE size, int n){
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if(dogs[i].size == size){
            count++;
        }
    }
    return count;
}
int main() {
    dog_t dogs[]={
            {"ANNA", 1, 4, small},
            {"BELA", 3, 11, medium},
            {"FOXY", 6, 23, big},
            {"DSA", 6, 23, big},
            {"ASD", 6, 23, big},
    };
    int n = sizeof(dogs)/ sizeof(dog_t);
    get_oldest(dogs,n);
    printf("%s\n", get_oldest(dogs,n));
    printf("%d\n", get_size_count(dogs,big,n));
    uint8_t byte = 0b10010011;
    byte ^= 0b01000001;
    PrintBinary(byte);



    return 0;
}