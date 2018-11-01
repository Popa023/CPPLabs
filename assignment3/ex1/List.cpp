//
// Created by razvan on 28.10.2018.
//

#include "List.h"
#include <iostream>
#include <cstring>

using namespace std;

List::List(const char *filename){

    elist.open(filename);
    char str[100], *elem;
    int pay, sal;
    string job, name;
    while (elist.good()){
        name = "";
        elist.getline(str,100);
        elem = strtok(str, " ");
        pay = atoi(elem);
        elem = strtok(NULL, " ");
        sal = atoi(elem);
        elem = strtok(NULL, " ");
        job = elem;
        elem = strtok(NULL, " ");
        while(elem != NULL){
            name += elem;
            name += " ";
            elem = strtok(NULL, " ");
        }
        Employee employee1(pay, sal, job, name);
        lista.push_back(employee1);
        numbempl++;
    }
    elist.close();
}

int List::getNumbempl() const {
    return numbempl;
}
