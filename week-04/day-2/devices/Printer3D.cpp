//
// Created by HP on 2019. 10. 01..
//

#include "Printer3D.h"

Printer3D::Printer3D(int sizeX, int sizeY, int sizeZ)
                    : _sizeX(sizeX), _sizeY(sizeY), _sizeZ(sizeZ) {}
string Printer3D::getSize() {
    ostringstream os;
    os <<_sizeX<<" X "<<_sizeY<<" X "<<_sizeZ;
    return os.str();
}