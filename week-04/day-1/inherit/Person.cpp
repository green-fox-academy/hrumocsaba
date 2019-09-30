//
// Created by HP on 2019. 09. 30..
//

#include "Person.h"
Person::Person(string name, int age, string gender){
    _name=move(name);
    _age=move(age);
    _gender=move(gender);

}
Person::Person() {
    _name="Jane Doe";
    _age=32;
    _gender="Female";

}

void Person::introduce() {
    cout<<"Hy my name is "<<_name<<", a "<<_age<< " old "<<_gender<<"."<<endl;
}
void Person::getGoal() {
    cout<<"I live for the moment."<<endl;
}
