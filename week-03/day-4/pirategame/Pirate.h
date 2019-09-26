//
// Created by HP on 2019. 09. 26..
//

#ifndef PIRATE_PIRATE_H
#define PIRATE_PIRATE_H
#include <iostream>
#include <string>
#include <time.h>
#include <random>
#include <stdlib.h>
using namespace std;

class Pirate {

public:
    Pirate();

    void drinkSomeRum();
    void howsItGoingMate();
    void checkIfAwake();
    void entername();
    void script();
    void brawl();

    string _name;

private:
    int _intoxication;
    bool _awake;
    bool _alive;

};


#endif //PIRATE_PIRATE_H
