#include <stdio.h>

/* Digimon database!
 * You should store the following data in a structure
 *  - the name of the digimon (which is shorter than 128 characters)
 *  - the age of the digimon (in years)
 *  - the health of the digimon (between 0-100)
 *  - the name of the tamer (which is shorter than 256 characters)
 *  - the digivolution level of the digimon (as a custom type, see below)
 *
 * You should store the digivolution level in an enumeration
 * the valid digivolution levels are:
 *  - baby
 *  - in-training
 *  - rookie
 *  - champion
 *  - ultimate
 *  - mega
 *
 * The digimons are stored in an array.
 *
 * Write the following functions:
 * 1) Get minimum health index
 *      - parameters:
 *          - array
 *          - array length
 *      - it returns the index of the minimal health digimon in the "array"
 * 2) Get same digivolution level count
 *      - parameters:
 *          - array
 *          - array length
 *          - digivolution level
 *      - it returns the count of digimons which are at "digivolution level"
 * 3) Get same tamer count
 *      - parameters:
 *          - array
 *          - array length
 *          - tamer name
 *      - it returns the count of the digimons which have the same tamer as "tamer name"
 * 4) Get average health of the same tamer
 *      - parameters:
 *          - array
 *          - array length
 *          - tamer name
 *      - it returns the average health of the digimons which have the same tamer as "tamer name"
 *
 * Don't forget to handle invalid inputs (NULL pointers, invalid values etc.)
 */

enum digivolution{
        BABY,
        IN_TRAINING,
        ROOKIE,
        CHAMPION,
        ULTIMATE,
        MEGA
};

typedef struct digimon{
    char* name;
    short int age;
    float health;
    char* tamer_name;
    enum digivolution type;
}digimon_t, *digimon_p;

int minimum_health(digimon_t digimons[], int array_size){
    int least = digimons[0].health;
    for (int i = 0; i < array_size-1; ++i) {
        if(digimons[i].health < digimons[i+1].health){
            if(digimons[i].health < least){
                least = digimons[i].health;
            }
        }else if(digimons[i+1].health < least){
                least = digimons[i+1].health;
            }
    }
    return least;
}

int same_tamercount(digimon_t digimons[], int array_size, char* tamer_name){
    int count = 0;
    for (int i = 0; i < array_size; ++i) {
        if(digimons[i].tamer_name == tamer_name)
            count++;
    }
    return count;
}

float average_health_same_tamer(digimon_t digimons[], int array_size, char* tamer_name){
    int count = 0;
    float sum = 0;
    for (int i = 0; i < array_size; ++i) {
        if(digimons[i].tamer_name == tamer_name){
            count++;
            sum+=digimons[i].health;
        }

    }
    float avg = sum / count;
    return avg;
}

int digivolution_count(digimon_t digimons[], int array_size, enum digivolution type){
    int count = 0;
    for (int i = 0; i < array_size; ++i) {
        if(digimons[i].type == type)
            count++;
    }
    return count;
}

int main()
{
    digimon_t agumon = {"Agumon", 4, 100, "Tai Kamiya", IN_TRAINING};
    digimon_t gomamon = {"Gomamon", 3, 20, "Joe Kido", BABY};
    digimon_t tailmon = {"Tailmon", 2, 50, "Mimi Tachikaw", BABY};
    digimon_t patamon = {"Patamon", 5, 15, "Mimi Tachikaw", CHAMPION};
    digimon_t csabamon = {"Csabamon", 5, 60, "Mimi Tachikaw", CHAMPION};
    digimon_t digimons[]= {agumon,gomamon,tailmon,patamon, csabamon};
    int size = sizeof(digimons) / sizeof(digimons[0]);
    printf("%d is the least health index. \n", minimum_health(digimons,size));
    printf("%d at this digivolution level. \n", digivolution_count(digimons,size,CHAMPION));
    printf("%d has the same tamer \n", same_tamercount(digimons,size,"Mimi Tachikaw"));
    printf("%.2f is the avg for this tamer digimons \n", average_health_same_tamer(digimons,size,"Mimi Tachikaw"));


    return 0;
}