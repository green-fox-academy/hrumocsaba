
// Created by HP on 2019. 10. 01..
//

#ifndef DEVICES_SCANNER_H
#define DEVICES_SCANNER_H

#include <iostream>
using namespace std;

class Scanner {
public:
    Scanner(int speed);
    virtual void scan();

protected:
    int _speed;
};


#endif //DEVICES_SCANNER_H
