//
// Created by razvan on 28.10.2018.
//

#ifndef CPPLABS_EMPLOYEE_H
#define CPPLABS_EMPLOYEE_H

#include <iostream>


using namespace std;

class Employee {

public:
    Employee(int payrol, int salar, string jo, string nam);

    int getPayroll() const;

    void setPayroll(int payroll);

    int getSalary() const;

    void setSalary(int salary);

    const string &getName() const;

    void setName(const string &name);

    const string &getJob() const;

    void setJob(const string &job);

private:
    int payroll;
    int salary;
    string name;
    string job;

    friend ostream& operator<<(ostream &, Employee &);

};


#endif //CPPLABS_EMPLOYEE_H
