
#include <stdio.h>
#include <string.h>

// Write a program that opens a file called "my-file.txt", then prints
// each line from the file.
// You will have to create the file, for that you may use C-programming, although it is not mandatory

int main ()
{
    FILE *fptr;
    fptr = fopen("../my-file.txt", "r");
    if(!(fptr = fopen("../my-file.txt", "r"))) return -1;
    char c[255];
    int count = 0;
    while ((fgets(c, 255, fptr)) > 0){
        printf("%s",c);
        count++;
    }

    printf("\nthere are %d lines in this txt.", count);
    fclose(fptr);
    return 0;
}