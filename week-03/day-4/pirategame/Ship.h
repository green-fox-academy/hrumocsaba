//
// Created by HP on 2019. 09. 26..
//

#ifndef PIRATE_SHIP_H
#define PIRATE_SHIP_H
#include <vector>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;


class Ship {
public:
    Ship();
    void script();
    void fillShip();
    void battle();
    void nameship();


private:

    vector<string> _crew;
    int _crewnumber;
    string _captain;
    bool _destroyed;
    string _shipname;
    int _intoxedcaptain;
};


#endif //PIRATE_SHIP_H
