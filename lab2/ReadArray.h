//
// Created by razvan on 07.10.2018.
//

#ifndef CPPLABS_READARRAY_H
#define CPPLABS_READARRAY_H

#include <iostream>
#include <fstream>

using namespace std;

class ReadArray {

public:

    ReadArray(const char *filename);
    int array[100], count;

private:

    ifstream infile;

};


#endif //CPPLABS_READARRAY_H
