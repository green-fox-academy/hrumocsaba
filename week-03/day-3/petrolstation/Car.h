#ifndef PETROLSTATION_CAR_H
#define PETROLSTATION_CAR_H

#include "Station.h"
#include "string"

class Car {
public:
    Car();
    void fill();
    bool isFull();

    int _gasamount;
    int _capacity;

};


#endif //PETROLSTATION_CAR_H
