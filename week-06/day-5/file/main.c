
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
    char c;
    while ((c = fgetc(fptr)) > 0){
        printf("%c",c);
    }
    fclose(fptr);
    return 0;
}