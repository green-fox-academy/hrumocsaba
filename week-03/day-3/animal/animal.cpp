//
// Created by HP on 2019. 09. 25..
//
#include <iostream>
#include "animal.h"
int animal::drink() {
    _thirst--;
    return _thirst, _hunger;
}
int animal::eat() {
    _hunger--;
    return _thirst, _hunger;
}
int animal::play() {
    _thirst++;
    _hunger++;
    return _thirst, _hunger;
}
void animal::what() {
    cin>>_what;
    if (_what == "play"){
        play();
        cout<< "You played, now your hunger is:" << _hunger << " and your thirst is: " << _thirst << endl;
    }
    if (_what == "drink"){
        drink();
        cout<< "You ate, now your hunger is:" <<_hunger<< " and your thirst is: " << _thirst << endl;
    }
    if (_what == "eat"){
        eat();
        cout<< "You ate, now your hunger is:" << _hunger << " and your thirst is: " << _thirst << endl;
    }
}
