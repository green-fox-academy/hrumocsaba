#include <iostream>
#include "Car.h"
#include "Station.h"
#include <vector>
#include <string>
using namespace std;

int main() {
    Car car1;
    Station fill;
    do{
        for (int i = 0; i < car1._capacity-car1._gasamount ; ++i) {
            car1.fill();
            fill.fill();
        }
    }while (!car1.isFull());






    return 0;
}