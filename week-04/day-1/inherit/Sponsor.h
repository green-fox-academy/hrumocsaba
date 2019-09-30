//
// Created by HP on 2019. 09. 30..
//

#ifndef INHERITANCE_SPONSOR_H
#define INHERITANCE_SPONSOR_H

#include "Person.h"

class Sponsor : public Person {
public:
    Sponsor();
    Sponsor(string, int, string, string);
    void introduce();
    void getGoal();
    void hire();


protected:
    string _company;
    int _hiredStudents;

};


#endif //INHERITANCE_SPONSOR_H
