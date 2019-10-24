
#include <stdio.h>

// Write a function that takes a car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

enum car_type {VOLVO, TOYOTA, LAND_ROVER, TESLA};

char* to_string (enum car_type type){
    char* brand;
    switch (type){
        case VOLVO:
            brand = "Volvo";
            break;
        case TOYOTA:
            brand = "Toyota";
            break;
        case LAND_ROVER:
            brand = "Land Rover";
            break;
        case TESLA:
            brand = "Tesla";
            break;
        default:
            break;
    }
    return brand;
}

typedef struct car {
    enum car_type type;
    double km;
    double gas;
}car_t;

void car_stats(car_t car){
    if(car.type != TESLA){
        printf("%s \n %.2f km \n %.2f l gas\n",to_string(car.type), car.km, car.gas);
    }else{
        printf("%s \n %.2f km\n",to_string(car.type), car.km);
    }
}

int main()
{
    car_t tesla = {TESLA, 10};
    car_t volvo = {VOLVO, 120,40};
    car_stats(volvo);
    car_stats(tesla);

    return 0;
}