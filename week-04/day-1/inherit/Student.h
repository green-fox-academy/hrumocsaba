//
// Created by HP on 2019. 09. 30..
//

#ifndef INHERITANCE_STUDENT_H
#define INHERITANCE_STUDENT_H

#include "Person.h"


class Student : public Person {

public:
    Student();
    Student(string name, int age, string gender, string previousOrganization);

    void skipDays(int numberOfDays);
protected:
    string _previousOrganization;
    int _skippedDays;
    void getGoal();
    void introduce();
};


#endif //INHERITANCE_STUDENT_H
