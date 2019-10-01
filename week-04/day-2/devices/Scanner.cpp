//
// Created by HP on 2019. 10. 01..
//

#include "Scanner.h"
Scanner::Scanner(int speed) : _speed(speed){}

void Scanner::scan() {
    cout<<"I'm scanning a document "<<_speed<<" ppm."<<endl;
}