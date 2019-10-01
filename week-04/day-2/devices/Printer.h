//
// Created by HP on 2019. 10. 01..
//

#ifndef DEVICES_PRINTER_H
#define DEVICES_PRINTER_H


#include <iostream>
using namespace std;
class Printer {
public:
    virtual string getSize()=0;
    virtual void print();
protected:
};


#endif //DEVICES_PRINTER_H
