//
// Created by HP on 2019. 10. 01..
//

#ifndef INSTRUMENT_STRINGEDINSTRUMENT_H
#define INSTRUMENT_STRINGEDINSTRUMENT_H


#include "Instrument.h"

class StringedInstrument : public Instrument {
public:
    virtual string sound() = 0;
protected:
    int _numberOfStrings;
};


#endif //INSTRUMENT_STRINGEDINSTRUMENT_H
