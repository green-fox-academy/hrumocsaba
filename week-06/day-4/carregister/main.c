#include <string.h>
#include <stdio.h>

/* Write a car register!
 * You should store the following data in a structure, called "car":
 *  - the manufacturer's name (which is shorter than 256 characters)
 *  - the price of the car (in euros, stored as a floating point number)
 *  - the year of manufacture
 *  - the type of the transmission (as a custom type, see below)
 *
 * You should store the transmission type in an enumeration ("transmission"),
 * the valid types are:
 *  - manual
 *  - automatic
 *  - CVT
 *  - semi-automatic
 *  - dual-clutch
 *
 * The "car"-s are stored in an array.
 *
 * Write the following functions:
 *  - get_older_cars_than(struct car* array, int array_length, int age)
 *      - it returns the count of the older cars than "age"
 *  - get_transmission_count(struct car* array, int array_length, enum transmission trnsm)
 *      - it returns the count of cars which has "trnsm" transmission
 */
enum transmission_type{MANUAL, AUTOMATIC, CVT, SEMI_AUTOMATIC, DUAL_CLUTCH};



typedef struct car{
    char* manuf_name;
    float price;
    int manuf_date;
    enum transmission_type type;

}car_t, *car_p;

int get_older_cars_than(car_p array, int array_length, int age){
    int count = 0;
    for (int i = 0; i < array_length ; ++i) {
        int age_of_car = 2019 - array[i].manuf_date;
        if(age_of_car > age){
            printf("%s \n",array[i].manuf_name );
            count++;
        }
    }
    return count;
}

int get_transmission_count(car_p array, int array_length, enum transmission_type type){
    int count = 0;
    for (int i = 0; i < array_length; ++i) {
        if(array[i].type == type) {
            printf("%s \n", array[i].manuf_name);
            count++;
        }
    }

    return count;
}


int main()
{
    car_t mazda = {"Mazda",1000, 1995, AUTOMATIC};
    car_t opel = {"Opel", 700, 1988, MANUAL};
    car_t honda = {"Honda", 800, 1992, SEMI_AUTOMATIC};
    car_t cars[] = {mazda, opel, honda};
    printf("%d \n", get_older_cars_than(cars,3,20));
    printf("%d \n", get_transmission_count(cars,3,SEMI_AUTOMATIC));

    return 0;
}