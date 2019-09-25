#include "Car.h"
#include <iostream>
#include "Station.h"
using namespace std;


Car::Car(){
    cout<<"Enter car gas amount!"<<endl;
    cin>>_gasamount;
    cout<<"Enter gas tank capacity"<<endl;
    cin>>_capacity;

};
void Car::fill() {
    _gasamount++;
    cout<<"Filling car"<<endl;

}
bool Car::isFull() {
    if (_gasamount==_capacity){
        cout<<"car tank "<<_capacity<<"/"<< _gasamount<<endl;
        return true;
    }
}
