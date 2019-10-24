#include <stdio.h>

/*
Create a struct that represents a House
It should store:
 - The address of the house
 - The price in EUR
 - The number of rooms
 - The area of the house in square meters
The market price of the houses is 400 EUR / square meters
Create a function that takes a pointer to a house and decides if it's worth to buy
(if the price is lower than the calculated price from it's area)
Create a function that takes an array of houses (and it's length), and counts the
houses that are worth to buy.
*/



typedef struct house{
    char* addres;
    float price;
    int number_of_rooms;
    float area;
}house_t;

int worth_a_buy(house_t* house){
    float market_price = 400 * house->area;
    if(market_price > house->price)
        return 1;
    else
        return 0;
}

int houses_worth_to_buy(house_t arr[], int amount){
    int count = 0;
    for (int i = 0; i < amount; ++i) {
        if(worth_a_buy(&arr[i])){
            printf("%s \n", arr[i].addres);
            count++;
        }
    }
    return count;
}

int main()
{
    house_t house1 = {"Budapest", 18000, 3, 40};
    house_t house2 = {"Miskolc", 19000, 6, 50};
    house_t house3 = {"Győr", 19000, 4, 70};
    house_t array[] = {house1, house2, house3};
    int size = sizeof(array) / sizeof(array[0]);
    printf("%d houses worth buying.", houses_worth_to_buy(array,size));
    return 0;
}
