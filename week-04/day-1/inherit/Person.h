//
// Created by HP on 2019. 09. 30..
//

#ifndef INHERITANCE_PERSON_H
#define INHERITANCE_PERSON_H

#include <string>
#include <iostream>
using namespace std;


class Person {
public:
    Person();
    Person(string , int, string);
    virtual void introduce();
    virtual void getGoal();

protected:
    string _name;
    int _age;
    string _gender;

};


#endif //INHERITANCE_PERSON_H
