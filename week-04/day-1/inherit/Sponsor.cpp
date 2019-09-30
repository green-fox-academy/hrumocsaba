//
// Created by HP on 2019. 09. 30..
//

#include "Sponsor.h"
Sponsor::Sponsor() {
    _name="Jane Doe";
    _age=30;
    _gender="female";
    _company="Google";
    _hiredStudents=0;

}
Sponsor::Sponsor(string name, int age, string gender, string company) {
    _name=name;
    _age=age;
    _gender=gender;
    _company=company;
    _hiredStudents=0;

}
void Sponsor::hire() {
    _hiredStudents++;
}
void Sponsor::introduce() {
    cout<<"Hi, I'm "<<_name<<", a "<<_age<<" year old "<<_gender<<" who represents "<<_company<<" and hired "<<_hiredStudents<<" students so far."<<endl;
}
void Sponsor::getGoal() {
    cout<<"My goal is: Hire brilliant junior software developers."<<endl;
}
