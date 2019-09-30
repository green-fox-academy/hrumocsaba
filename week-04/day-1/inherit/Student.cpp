//
// Created by HP on 2019. 09. 30..
//

#include "Student.h"
using namespace std;
Student::Student() {
    _name="Jane Doe";
    _age=30;
    _gender="female";
    _previousOrganization="The school of life";
    _skippedDays=0;

}

Student::Student(string name, int age, string gender, string previousOrganization) {
    _name=name;
    _age=age;
    _gender=gender;
    _previousOrganization=previousOrganization;
    _skippedDays=0;


}
void Student::skipDays(int numberOfDays) {
    _skippedDays=numberOfDays;
}
void Student::getGoal() {
    cout<<"My goal is: Be a junior software developer."<<endl;
}
void Student::introduce() {
    cout<< "Hi, I'm "<<_name<<", a "<<_age<<" year old "<<_gender<<" from "<<_previousOrganization<<" who skipped "<<_skippedDays<<" days from the course already."<<endl;
}
