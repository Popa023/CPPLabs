//
// Created by razvan on 10.10.2018.
//
#include "Student.h"
#include <iostream>
#include <string>
using namespace std;

Student::Student(int regNo, string name, int year) : regNumber(regNo), name(name), year(year) {

}

bool Student::operator<(const Student &s) const {
    return regNumber < s.regNumber;
}

ostream &operator<<(ostream &str, Student &student){
    str << "regNumber: " << setw(4) << right << student.getRegNumber() << " Name: " << student.get <<
}

