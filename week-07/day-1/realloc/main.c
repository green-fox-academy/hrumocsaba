#include <stdio.h>
#include <stdlib.h>

// Please use the realloc function where applicable!
// Prompt the user to enter a number. -> This number will be X.
// Allocate memory for X numbers.
// Prompt the user to enter X numbers.
// Allocate memory for Y numbers, which is the sum of the X numbers.
// Fill that array with from 1 to Y, then print them.

int main()
{
    int x;
    printf("Enter a how many number you want to enter number.\n");
    scanf("%d",&x);
    int* pointer = malloc(x * sizeof(int));
    printf("Enter that many number.\n");
    for (int i = 0; i < x; ++i) {
        scanf("%d", &pointer[i]);
    }
    int y = 0;
    for (int j = 0; j < x; ++j) {
        y+=pointer[j];
    }
    pointer = realloc(pointer, y * sizeof(int));
    for (int k = 1; k <= y; ++k) {
        pointer[k] = k;
        printf("%d ", pointer[k]);
    }


    return 0;
}