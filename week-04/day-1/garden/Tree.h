//
// Created by HP on 2019. 09. 30..
//

#ifndef GARDEN_TREE_H
#define GARDEN_TREE_H

#include "Plant.h"

class Tree : public Plant{
public:
    Tree();
    Tree(string);



    float _waterlevel;
    string _color;
    string _type;
    int _whenNeedWater;
    float _multiplier;
};




#endif //GARDEN_TREE_H
