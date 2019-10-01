//
// Created by HP on 2019. 10. 01..
//

#ifndef DEVICES_PRINTER3D_H
#define DEVICES_PRINTER3D_H

#include <sstream>
#include "Printer.h"

class Printer3D : public Printer{
public:
    Printer3D(int sizeX, int sizeY, int sizeZ);
    virtual string getSize() override;

protected:
    int _sizeX, _sizeY, _sizeZ;

};


#endif //DEVICES_PRINTER3D_H
