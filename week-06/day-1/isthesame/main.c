#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int are_the_same(char *first, char *second){
   if(!strcasecmp(first,second)){
       return 1;
   }else{
       return 0;
   }

}

int main()
{
    // Create a program which asks for two strings and stores them
    // Create a function which takes two strings as parameters and
    // returns 1 if the two strings are the same and 0 otherwise
    // Try to erase small and uppercase sensitivity.
    char * first = "csaba";
    char * second = "CSABA";
    printf( "%d" , are_the_same(first,second));




    return 0;
}