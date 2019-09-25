#ifndef PETROLSTATION_STATION_H
#define PETROLSTATION_STATION_H

#include "Car.h"


class Station {
public:
    Station();
    int fill();

private:
    int _gasAmount;
};


#endif //PETROLSTATION_STATION_H
