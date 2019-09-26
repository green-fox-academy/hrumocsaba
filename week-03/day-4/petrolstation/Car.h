#ifndef PETROLSTATION_CAR_H
#define PETROLSTATION_CAR_H

#include "Station.h"
#include "string"

class Car {
public:
    Car();
    void fill();
    bool isFull();
    int carData();
    int _caramount;
    int _current();
    int fail();

    int _gasamount;
    int _capacity;

};


#endif //PETROLSTATION_CAR_H
