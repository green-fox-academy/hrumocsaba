#include <stdio.h>
#include <stdlib.h>

// with malloc
// please allocate a 10 long array and fill it with even numbers then print the whole array
// please deallocate memory without using free


int main()
{
    int* pointer = malloc(sizeof(int) * 10);
    int n = 0;
    for (int i = 0; i < 10; ++i) {
        while(n%2 == 0){
            pointer[i]=n;
            n++;
        }
        n++;
    }
    for (int j = 0; j < 10; ++j) {
        printf("%d\n", pointer[j]);
    }
    pointer = realloc(pointer,0);


    return 0;
}