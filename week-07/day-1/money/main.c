#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// The rich uncle has just died and you need to distribute his heritage among the relatives. The money you have to distribute is $1024
// Generate a random number between 20 and 50. This number will be the amount of relatives that showed up at the inheritance party.
// Allocate an array for them. Each element of the array will represent a relative.
// You need to generate a random number between 0 and the number of relatives to decide which one is the winner.
// The winner always gets the half of the remaining money. You need to generate random numbers until all the money is gone.
// Print the amount of money each relative got on the party. Print 0 for the unlucky ones.

//For example: 0,0,0,0,128,4,0,0,2,0,512,0,0,0,0,0,0,32,0,64,0,0,1,8,0,0,16,256

typedef struct relative{
    int money;
}relative_t;

void winner(relative_t* relatives, int *moneyleft, int relatives_amount){
    int random = rand() % relatives_amount;
    *moneyleft/=2;
    relatives[random].money+= (*moneyleft);

}

int main()
{
    int money = 1024;
    srand(time(NULL));
    int random = (rand() % 20) +30;
    relative_t* relatives = malloc(random * sizeof(relative_t));
    for (int j = 0; j < random; ++j) {
        relatives[j].money = 0;
    }

    for (int i = 0; i < random; ++i) {
        winner(relatives,&money,random);
        printf ("%d ",relatives[i].money);
    }
    free(relatives);



    return 0;
}