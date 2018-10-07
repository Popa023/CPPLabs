//
// Created by razvan on 07.10.2018.
//

#include "ReadArray.h"

ReadArray::ReadArray(const char *filename) {
    infile.open(filename);
    if (!infile){
        cout << "The file could not open";
        exit(1);
    }
    while(infile){
        infile >> array[count++];
    }
    infile.close();
}