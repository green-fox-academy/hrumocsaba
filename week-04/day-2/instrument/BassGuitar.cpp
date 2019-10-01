//
// Created by HP on 2019. 10. 01..
//

#include <iostream>
#include "BassGuitar.h"

BassGuitar::BassGuitar() {
    _numberOfStrings=4;
    _name="Bass guitar";

}
BassGuitar::BassGuitar(int number) {
    _numberOfStrings=number;
    _name="Bass guitar";

}
string BassGuitar::sound() {
    return "Duum-duum-duum.";
}
void BassGuitar::play() {
    sound();
    cout<<_name<<", a "<<_numberOfStrings<<" stringed instrument that goes "<<sound()<<endl;
}