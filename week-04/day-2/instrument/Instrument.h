//
// Created by HP on 2019. 10. 01..
//

#ifndef INSTRUMENT_INSTRUMENT_H
#define INSTRUMENT_INSTRUMENT_H


#include <ios>
using namespace std;

class Instrument {
public:
    virtual void play() = 0;
protected:
    string _name;
};


#endif //INSTRUMENT_INSTRUMENT_H
