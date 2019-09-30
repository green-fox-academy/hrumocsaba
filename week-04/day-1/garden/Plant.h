//
// Created by HP on 2019. 09. 30..
//

#ifndef GARDEN_PLANT_H
#define GARDEN_PLANT_H
#include <iostream>
#include <string>
using namespace std;
class Plant {
public:
    Plant();
    Plant(string, string, float, int, float);


protected:
    string _type;
    string _color;
    float _waterlevel;
    int _whenNeedWater;
    float _multiplier;
};


#endif //GARDEN_PLANT_H
