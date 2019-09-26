#include "Car.h"
#include <iostream>
#include "Station.h"
using namespace std;

int z=1;
Car::Car(){
    cout<< "Number of cars?" << endl;
    cin>>_caramount;
}
int Car::fail() {
    cout<< "Failed to fill car "<< z <<endl;
    cout<< "Car " << z <<" tank at " << _capacity <<" l/" << _gasamount-1 << " l" << endl;
}

int Car::carData() {
    cout<< "Enter car "<< z << " gas amount!" << endl;
    cin>> _gasamount;
    cout<< "Enter gas tank capacity" << endl;
    cin>> _capacity;
}

void Car::fill() {
    _gasamount++;
}
int Car::_current() {
    cout<<"Car "<<z<<" tank at "<<_capacity<<" l/"<< _gasamount<<" l"<<endl;
    z++;

}
bool Car::isFull() {
    if (_gasamount==_capacity){
        return true;
    }
}
