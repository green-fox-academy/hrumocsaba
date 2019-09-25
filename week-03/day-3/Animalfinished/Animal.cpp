#include <iostream>
#include "Animal.h"
using namespace std;
Animal::Animal() {
    _thirst=50;
    _hunger=50;
    _exit = false;
    cout<<"Your animal is at " << _hunger << " hunger and "<< _thirst << " thirst. What do you want to to? (enter 'exit' to finish playing)"<<endl;
};
void Animal::drink() {
    _thirst--;
}
void Animal::eat() {
    _hunger--;
}
void Animal::play() {
    _thirst++;
    _hunger++;
}
void Animal::what() {
    cin>>_what;
    if (_what == "play"){
        play();
        cout<< "You played, now your hunger is: " << _hunger << " and your thirst is: " << _thirst << endl;
    }
    if (_what == "drink"){
        drink();
        cout<< "You ate, now your hunger is: " <<_hunger<< " and your thirst is: " << _thirst << endl;
    }
    if (_what == "eat"){
        eat();
        cout<< "You ate, now your hunger is: " << _hunger << " and your thirst is: " << _thirst << endl;
    }
    if(_what=="exit"){
        _exit=1;
    }
}

