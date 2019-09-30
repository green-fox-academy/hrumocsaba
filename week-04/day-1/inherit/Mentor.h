//
// Created by HP on 2019. 09. 30..
//

#ifndef INHERITANCE_MENTOR_H
#define INHERITANCE_MENTOR_H

#include "Person.h"


class Mentor : public Person {
public:

    Mentor(string, int, string, string);
    Mentor();
protected:
    void getGoal();
    void introduce();
    string _level;

};


#endif //INHERITANCE_MENTOR_H
