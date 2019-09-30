//
// Created by HP on 2019. 09. 30..
//

#include "Cohort.h"
Cohort::Cohort(string name) {
    _name=name;
    students.clear();
    mentors.clear();

}
void Cohort::addStudents(Student* name) {
    students.push_back(*name);
}
void Cohort::addMentors(Mentor* name) {
    mentors.push_back(*name);
}
void Cohort::info() {
    cout<<"The "<<_name<<" cohort has "<< students.size()<<" students and "<<mentors.size()<<" mentors."<<endl;
}
