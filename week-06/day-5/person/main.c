#include <stdio.h>
#include <stdint.h>

/*
 * 1. Create a struct which represents a person:
 * - name (max 64 characters)
 * - age (integer)
 * - height in meters (floating point)
 */

typedef struct person{
    char name[64];
    int age;
    float height;

}person_t, *person_p;

int main() {

    /*
     * 2. Create a person struct, fill it with some data and write it out to a binary file.
     *    Read it back to another struct variable and compare them. Are they equal?
     */

    person_t dude1 = {"Csaba",13,186};
    FILE *fptr;
    if(!(fptr = fopen("../person.bin", "wb"))) return -1;
    fwrite(&dude1, sizeof(person_t), 1, fptr);
    fclose(fptr);

    person_t dude2;
    if(!(fptr = fopen("../person.bin", "rb"))) return -1;
    fread(&dude2, sizeof(person_t),1,fptr);
    fclose(fptr);

    person_t dude3 = {"Emil",36,160};
    person_t dude4 = {"Petra",25,200};
    person_t dude5 = {"Dani",11,140};
    person_t dude6 = {"Ubul",40,170};
    person_t dude7 = {"Anna",30,167};


    person_t persons[] = {dude1,dude2,dude3,dude4,dude5,dude6,dude7};
    if(!(fptr = fopen("../persons.bin", "wb"))) return -1;
    fwrite(&persons, sizeof(persons), 1, fptr);
    fclose(fptr);
    for (int i = 0; i < sizeof(persons)/ sizeof(persons[0]); ++i) {
        printf("%s %d %.2f\n", persons[i].name,persons[i].age,persons[i].height);
    }

    printf("\n");
    person_t persons2[7];
    if(!(fptr = fopen("../persons.bin", "rb"))) return -1;
    fread(&persons2, sizeof(persons),1,fptr);
    fclose(fptr);

    for (int i = 0; i < sizeof(persons2)/ sizeof(persons2[0]); ++i) {
        printf("%s %d %.2f\n", persons2[i].name,persons2[i].age,persons2[i].height);
    }




    /*
     * 3. Create an array which holds 10 person strcuts.
     *    Fill them with some data and write out the array to a binary file.
     *    Read it back to another array and compare the array content to the first one. Are they equal?
     */

    return 0;
}