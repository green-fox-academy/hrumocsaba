#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int sum_of_chars(int a){
    char number[100];
    sprintf(number,"%d", a);
    int sum = 0;
    int pos = 0;
    //printf("%s \n",number);

    while (number[pos] != '\0'){
        sum += number[pos] - '0';
        pos++;
    }
    return sum;
}

int isequal(int a, int b){
    if(sum_of_chars(a) == sum_of_chars(b)){
        printf("Equal.\n");
        return 1;
    }else{
        printf("Not equal.\n");
        return 0;
    }
}

int main()
{
    // Create a program which asks for two numbers and stores them
    // Create a function which takes two numbers as parameters
    // and returns 1 if the sum of the number of digits are equal and 0 otherwise
    //
    // For example:
    //
    // Case 1:
    //
    // a = 123
    // b = 321
    //
    // sum of number of digits (variable a) = 1 + 2 + 3 = 6
    // sum of number of digits (variable b) = 3 + 2 + 1 = 6
    // in this case the function should return 1
    //
    //
    // Case 2:
    //
    // a = 723
    // b = 114
    //
    // sum of number of digits (variable a) = 7 + 2 + 3 = 12
    // sum of number of digits (variable b) = 1 + 1 + 4 = 6
    // in this case the function should return 0

    int a = 123;
    int b = 321;
    printf("%d\n",isequal(a,b));
    int c = 456;
    int d = 123;
    printf("%d",isequal(c,d));

    return 0;
}