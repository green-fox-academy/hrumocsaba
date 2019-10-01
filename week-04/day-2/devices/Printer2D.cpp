//
// Created by HP on 2019. 10. 01..
//

#include "Printer2D.h"

Printer2D::Printer2D(int sizeX, int sizeY)
                    : _sizeX(sizeX), _sizeY(sizeY) {}

string Printer2D::getSize() {
    ostringstream os;
    os <<_sizeX<<" X "<<_sizeY;
    return os.str();
}
