#include <iostream>
#include "Plant.h"
#include "Flower.h"
#include "Tree.h"
#include <vector>
#include "Garden.h"
int main() {

    Garden garden;

    Flower flower;
    garden.addFlower(&flower);
    Flower yellow("yellow");
    garden.addFlower(&yellow);
    Tree black("black");
    garden.addTree(&black);
    Tree green("green");
    garden.addTree(&green);
    Flower white("white");
    garden.addFlower(&white);
    do {
        garden.info();
        garden.watering();
    }while(1);






    return 0;
}