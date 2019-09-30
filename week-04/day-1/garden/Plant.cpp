//
// Created by HP on 2019. 09. 30..
//


#include "Plant.h"
Plant::Plant(){
    _type="Tree";
    _color="orange";
    _waterlevel=0;
    _whenNeedWater=5;
    _multiplier=1;

}
Plant::Plant(string type, string color, float waterlevel, int whenNeedWater, float multiplier){
    _type=type;
    _color=color;
    _waterlevel=waterlevel;
    _whenNeedWater=whenNeedWater;
    _multiplier=multiplier;

}

