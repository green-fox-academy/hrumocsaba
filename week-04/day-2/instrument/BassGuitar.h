//
// Created by HP on 2019. 10. 01..
//

#ifndef INSTRUMENT_BASSGUITAR_H
#define INSTRUMENT_BASSGUITAR_H


#include "StringedInstrument.h"

class BassGuitar : public StringedInstrument {
public:
    BassGuitar();
    BassGuitar(int);
    void play();
    string sound() override ;
protected:
};


#endif //INSTRUMENT_BASSGUITAR_H
