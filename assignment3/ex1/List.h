//
// Created by razvan on 28.10.2018.
//

#ifndef CPPLABS_LIST_H
#define CPPLABS_LIST_H

#include <iostream>
#include "Employee.h"
#include <fstream>
#include <vector>

class List {

public:

    vector<Employee> lista;
    List(const char *filename);

    void print(int &i);

    int getNumbempl() const;

private:
    ifstream elist;
    int numbempl = 0;

};



#endif //CPPLABS_LIST_H
