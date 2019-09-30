//
// Created by HP on 2019. 09. 30..
//

#include "Mentor.h"
Mentor::Mentor(string name, int age, string gender, string level) {
    _level=level;
    _name=name;
    _age=age;
    _gender=gender;

}
Mentor::Mentor() {
    _name="Jane Doe";
    _age=30;
    _gender="female";
}
void Mentor::introduce() {
    cout<<"Hi, I'm "<<_name<<", a "<<_age<<" year old "<<_gender<<" "<<_level<<" mentor."<<endl;
}

void Mentor::getGoal() {
    cout<<"My goal is: Educate brilliant junior software developers."<<endl;
}