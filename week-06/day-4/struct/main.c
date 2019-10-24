
#include <stdio.h>
#include <stdint.h>

// Use the Computer struct, give values to the fields and print them out in the main!
// Use the Notebook struct, give values to the fields and print them out in the main!

struct Computer {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
};

typedef struct {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
} Notebook;

int main()
{
    Notebook HP = {3.4,8,64};
    printf("cpu speed is %.2f Ghz, ram size is %d gb, achitectrue is %d bit.", HP.cpu_speed_GHz, HP.ram_size_GB, HP.bits);

    return 0;
}