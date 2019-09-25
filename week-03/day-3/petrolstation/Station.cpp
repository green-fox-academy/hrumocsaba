//
// Created by HP on 2019. 09. 25..
//

#include "Station.h"
#include "Car.h"
Station::Station() {
    _gasAmount=100;
}
int Station::fill() {
    _gasAmount--;
}

