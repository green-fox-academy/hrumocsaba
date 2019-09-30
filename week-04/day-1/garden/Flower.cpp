//
// Created by HP on 2019. 09. 30..
//

#include "Flower.h"

Flower::Flower(){
    _type="Flower";
    _color="red";
    _waterlevel=0;
    _whenNeedWater=10;
    _multiplier=0.75;
  //  status();
}
Flower::Flower(string color){
    _type="Flower";
    _color=color;
    _waterlevel=0;
    _whenNeedWater=10;
    _multiplier=0.75;
   // status();

}

void Flower::status() {
    cout<<_color<< " "<<_waterlevel<<endl;
}
