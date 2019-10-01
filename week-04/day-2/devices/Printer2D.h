//
// Created by HP on 2019. 10. 01..
//

#ifndef DEVICES_PRINTER2D_H
#define DEVICES_PRINTER2D_H


#include "Printer.h"
#include <sstream>
class Printer2D : public Printer{
public:
    Printer2D(int sizeX , int sizeY);
    virtual string getSize() override;
private:
    int _sizeX, _sizeY;

};


#endif //DEVICES_PRINTER2D_H
