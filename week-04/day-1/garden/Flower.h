//
// Created by HP on 2019. 09. 30..
//

#ifndef GARDEN_FLOWER_H
#define GARDEN_FLOWER_H

#include "Plant.h"

class Flower : public Plant{
public:
    Flower();
    Flower(string);
    void status();



    string _color;
    string _type;
    float _waterlevel;
    int _whenNeedWater;
    float _multiplier;
};




#endif //GARDEN_FLOWER_H
