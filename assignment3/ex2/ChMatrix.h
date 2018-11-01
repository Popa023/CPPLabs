//
// Created by razvan on 31.10.2018.
//

#ifndef CPPLABS_CHMATRIX_H
#define CPPLABS_CHMATRIX_H

#include <iostream>
#include <fstream>

using namespace std;

class ChMatrix {

public:
    ChMatrix(const char *filename);

private:
    ifstream file;
    char *ch = nullptr;
    int num = 0;
    int j = 0;

};


#endif //CPPLABS_CHMATRIX_H
