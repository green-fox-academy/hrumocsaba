//
// Created by HP on 2019. 10. 01..
//

#include <iostream>
#include "ElectricGuitar.h"
ElectricGuitar::ElectricGuitar() {
    _numberOfStrings=6;
    _name="Electric guitar";

}
ElectricGuitar::ElectricGuitar(int number) {
    _numberOfStrings=number;
    _name="Electric guitar";

}
string ElectricGuitar::sound() {
    return "Twang.";
}
void ElectricGuitar::play() {
    sound();
    cout<<_name<<", a "<<_numberOfStrings<<" stringed instrument that goes "<<sound()<<endl;
}