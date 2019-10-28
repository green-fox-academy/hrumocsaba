#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// write a function which takes 2 strings as parameter, concatenates them together and returns it back.
// Test it for long and empty strings as well.
// Try to use the least amount of memory that's possible.

int string_length(char* string){
    int i = 0;
    while(string[i]){
        i++;
    }
    return i;
}

char* concat(char string1[], char string2[]){
    if(string1 == "" && string2 == ""){
        return "U entered nothing";
    }
    char *strings = malloc(sizeof(char) * (string_length(string1)+(string_length(string2))));
    strcpy(strings,strcat(string1,string2));
    return strings;
}


int main()
{
    char str1[]="hello";
    char str2[]="hy";
    printf("%s", concat(str1, str2));
    return 0;
}