#include <stdio.h>
#include <stdlib.h>


int length(char * string){
    int length = 0;
    int pos = 0;
    while(string[pos]!=NULL){
        length++;
        pos++;
    }
    return length;
}

int main()
{
    // Create a program which asks for the name of the user and stores it
    // Create a function which takes a string as a parameter and returns the length of it
    // Solve this exercises with and without using string.h functions
    char name[30];
    scanf("%s", name);
    printf("%d", length(name));

    return 0;
}