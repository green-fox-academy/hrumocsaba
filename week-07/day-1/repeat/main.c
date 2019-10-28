#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// write a function which takes a string and an integer as a parameter.
// The function should return a string where the input string is repeating. The number of repetition is based on the value of the integer parameter.
// For example: Apple, 5 -> AppleAppleAppleAppleApple
// Try to use the least amount of memory that's possible.
int string_length(char* string){
    int i = 0;
    while(string[i]){
        i++;
    }
    return i;
}


char* repeat(char string[], int number){
    char* dest = malloc(number * (string_length(string) * sizeof(char)));
    strcpy(dest, string);
    for (int i = 1; i < number; ++i) {
        strcat(dest,string);
    }
    return dest;
}

int main()
{
    char str[] = "apple";
    char* temp = repeat(str, 5);
    printf("%s", repeat(str, 5));
    free(temp);
    return 0;
}