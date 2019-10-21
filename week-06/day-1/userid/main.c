#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// create a program which asks for full name and age
// and stores it in a char array
// parse that array to first_name, last_name, age (use tokenizing)
// print out the the stored variables
// example:
//   printf("Your name is: %s %s and you are %d years old", first_name, last_name, age);
char* userid(char* first_name, char* last_name, int age){


}

int main ()
{
    char all_data[100];


    printf("Enter your full name and age.\n");
    gets(all_data);
    printf("%s \n", all_data);

    int age = 0;
    char* last_name;
    char * age_char;
    char* word = strtok(all_data, " ");
    char * first_name = word;
    int pos = 1;
    while (word != NULL){
        if(pos == 1){
            word = strtok(NULL, " ");
            last_name = word;
            printf ("%s \n", last_name);
        }
        if(pos == 2){
            age_char = word;
            printf ("%s \n", age_char);
            age = atoi(age_char);
        }else{
            word = strtok(NULL, " ");
        }
        pos++;
    }

    printf("Your name is: %s %s and you are %d years old", first_name, last_name, age);

    return 0;
}