//
// Created by razvan on 28.10.2018.
//

#include "Employee.h"

Employee::Employee(int payrol, int salar, string jo, string nam) : payroll(payrol), salary(salar), name(nam), job(jo){

}

int Employee::getPayroll() const {
    return payroll;
}

void Employee::setPayroll(int payroll) {
    Employee::payroll = payroll;
}

int Employee::getSalary() const {
    return salary;
}

void Employee::setSalary(int salary) {
    Employee::salary = salary;
}

const string &Employee::getName() const {
    return name;
}

void Employee::setName(const string &name) {
    Employee::name = name;
}

const string &Employee::getJob() const {
    return job;
}

void Employee::setJob(const string &job) {
    Employee::job = job;
}

ostream &operator<<(ostream &o, Employee &e) {
    o << e.getPayroll() << e.getSalary() << e.getJob();
    o << e.getName();
}
