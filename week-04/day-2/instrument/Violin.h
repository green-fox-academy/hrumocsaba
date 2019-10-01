//
// Created by HP on 2019. 10. 01..
//

#ifndef INSTRUMENT_VIOLIN_H
#define INSTRUMENT_VIOLIN_H


#include "StringedInstrument.h"

class Violin : public StringedInstrument {
public:
    Violin();
    Violin(int);
    void play();
    string sound() override ;
protected:
};


#endif //INSTRUMENT_VIOLIN_H
