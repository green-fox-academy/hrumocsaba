//
// Created by HP on 2019. 10. 01..
//

#ifndef INSTRUMENT_ELECTRICGUITAR_H
#define INSTRUMENT_ELECTRICGUITAR_H


#include "StringedInstrument.h"

class ElectricGuitar : public StringedInstrument{
public:
    ElectricGuitar();
    ElectricGuitar(int);
    void play();
    string sound() override ;
protected:



};


#endif //INSTRUMENT_ELECTRICGUITAR_H
