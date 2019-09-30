//
// Created by HP on 2019. 09. 30..
//

#include "Tree.h"
Tree::Tree(){
    _type="Tree";
    _color="orange";
    _waterlevel=0;
    _whenNeedWater=10;
    _multiplier=0.75;
   // status();
}
Tree::Tree(string color){
    _type="Tree";
    _color=color;
    _waterlevel=0;
    _whenNeedWater=5;
    _multiplier=0.4;
   // status();

}


