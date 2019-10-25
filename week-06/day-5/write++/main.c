
#include <stdio.h>
#include <string.h>

/*
     * 1. Write out myInt to myInt.txt as a text!
     * 2. Write out myInt to myInt.bin as a binary file!
     *    Check the size of myInt.txt and myInt.bin! Why it is different?
     * 3. Write out myInt to myInt.bin, myFloat to myFloat.bin and myChar to myChar.bin!
     * 4. Read them back to myIntRead, myFloatRead and myCharRead and compare these variables to myInt, myFloat, myChar,
     *    they should be the same.
     */

int wrtie_lines(char* path, char* word, int number){
    FILE* fptr;
    if(!(fptr = fopen(path,"w")) > 0)return -1;

    for (int i = 0; i < number; ++i) {
        fprintf(fptr,word,);
        fprintf(fptr,"\n");
    }
    fclose(fptr);
    return 0;
}


int main()
{
    wrtie_lines("myfile.txt", "apple", 5);

    return 0;
}