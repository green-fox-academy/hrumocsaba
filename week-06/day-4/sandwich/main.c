#include <stdio.h>

/*
Create a sandwich struct
It should store:
 - name
 - price (float)
 - weight (float)
Create a function which takes two parameters and returns the price of your order.
The parameters should be:
 - a sandwich struct
 - and an integer that represents how many sandwiches you want to order
*/
typedef struct sandwich{
    char* name;
    float price;
    float weight;
}sandwich_t;

float order(sandwich_t sandwich, int amount){
    float price_sum = sandwich.price * amount;
    return price_sum;
}

int main()
{
    sandwich_t sandwich1 = {"ham",4.99, 2.5};
    printf("%.2f $",order(sandwich1,10));
    return 0;
}