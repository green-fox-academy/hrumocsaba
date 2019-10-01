//
// Created by HP on 2019. 10. 01..
//

#include "Copier.h"

Copier::Copier(int speed, int sizeX, int sizeY) : Scanner(speed), Printer2D(sizeX, sizeY) {}

void Copier::print() {
    cout<<"I'm printing something that's "<<getSize()<<" cm."<<endl;
}
void Copier::scan() {
    cout<<"I'm scanning a document with "<<_speed<<" ppm."<<endl;
}
void Copier::copy() {
    cout<<"I'm scanning a document with "<<_speed<<" ppm and printing something that's "<<getSize()<<" cm."<<endl;

}
