//
// Created by HP on 2019. 10. 01..
//

#include <iostream>
#include "Violin.h"

Violin::Violin() {
    _numberOfStrings=4;
    _name="Violin";

}
Violin::Violin(int number) {
    _numberOfStrings=number;
    _name="Violin";

}
string Violin::sound() {
    return "Screech.";
}
void Violin::play() {
    sound();
    cout<<_name<<", a "<<_numberOfStrings<<" stringed instrument that goes "<<sound()<<endl;
}