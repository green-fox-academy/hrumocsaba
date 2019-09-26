//
// Created by HP on 2019. 09. 25..
//

#include "Station.h"
#include "Car.h"
#include <iostream>
#include <string>

using namespace std;
int i=1;
int gasleft=100;




int Station::fill() {
    gasleft--;
}

int Station::fillcar(){
    Car car1;
    Station fill;
    for ( int j = 0; j < car1._caramount; ++j) {
        car1.carData();

        cout << "Filling car " << i << endl;
        do {

            for (int k = 0; k < car1._capacity - car1._gasamount; ++k) {
                if(gasleft<0){
                    car1.fail();
                    cout<<"Station is empty"<<endl;
                    return 0;
                }
                car1.fill();
                fill.fill();
            }
        } while (!car1.isFull());

        car1._current();
        i++;
        cout<<"The station has "<<gasleft <<" l gas left"<<endl;

    }
}



