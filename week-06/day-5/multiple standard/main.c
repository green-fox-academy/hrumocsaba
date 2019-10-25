
#include <stdio.h>
#include <stdint.h>

int main() {
    int myInt = 123456789;
    float myFloat = 3.14159265359F;
    char myChar = 'c';

    int myIntRead;
    float myFloatRead;
    char myCharRead;
    char* buffer;

    FILE* fptr;
    if(!(fptr = fopen("../myInt.txt", "w"))) return -1;
    fprintf(fptr,"%d",myInt);
    fclose(fptr);

   if(!(fptr = fopen("../myInt.bin", "wb"))) return -2;
   fwrite(&myInt, sizeof(myInt), 1, fptr);
   fclose(fptr);

    if(!(fptr = fopen("../myInt.bin", "ab"))) return -1;
    fprintf(fptr,"\n%d",myInt);
    fclose(fptr);

    if(!(fptr = fopen("../myFloat.bin", "wb"))) return -1;
    fwrite(&myFloat, sizeof(myFloat), 1, fptr);
    fclose(fptr);

    if(!(fptr = fopen("../myChar.bin", "wb"))) return -1;
    fprintf(fptr,"%c",myChar);
    fclose(fptr);



    if(!(fptr = fopen("../myFloat.bin", "rb"))) return -1;
    fread(&myFloatRead, sizeof(myFloatRead),1,fptr);
    printf("%f\n",myFloatRead);
    fclose(fptr);

    if(!(fptr = fopen("../myInt.bin", "rb"))) return -1;
    fread(&myIntRead, sizeof(myIntRead),1,fptr);
    printf("%d\n",myIntRead);
    fclose(fptr);

    if(!(fptr = fopen("../myChar.bin", "rb"))) return -1;
    fread(&myCharRead, sizeof(myCharRead),1,fptr);
    printf("%c\n",myCharRead);
    fclose(fptr);



    /*
     * 1. Write out myInt to myInt.txt as a text!
     * 2. Write out myInt to myInt.bin as a binary file!
     *    Check the size of myInt.txt and myInt.bin! Why it is different?
     * 3. Write out myInt to myInt.bin, myFloat to myFloat.bin and myChar to myChar.bin!
     * 4. Read them back to myIntRead, myFloatRead and myCharRead and compare these variables to myInt, myFloat, myChar,
     *    they should be the same.
     */

    return 0;
}