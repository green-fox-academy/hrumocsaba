//
// Created by HP on 2019. 09. 30..
//

#ifndef INHERITANCE_COHORT_H
#define INHERITANCE_COHORT_H

#include <vector>
#include "Student.h"
#include <iostream>
#include "Mentor.h"
using namespace std;
class Cohort {

public:
    Cohort(string);
    void addStudents(Student*);
    void addMentors(Mentor*);
    void info();
protected:
    string _name;
    vector<Student> students;
    vector<Mentor> mentors;

};


#endif //INHERITANCE_COHORT_H
