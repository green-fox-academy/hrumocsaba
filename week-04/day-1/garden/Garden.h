//
// Created by HP on 2019. 09. 30..
//

#ifndef GARDEN_GARDEN_H
#define GARDEN_GARDEN_H

#include "Tree.h"
#include "Flower.h"
#include "Plant.h"
#include <vector>
using namespace std;

class Garden : protected Flower, protected Tree, public Plant {
public:
    vector<Tree> trees;
    vector<Flower> flowers;
    void addFlower(Flower*);
    void addTree(Tree*);
    void info();
    void watering();

protected:
    int _waterintamount;

};


#endif //GARDEN_GARDEN_H
