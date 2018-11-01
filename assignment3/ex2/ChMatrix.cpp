//
// Created by razvan on 31.10.2018.
//

#include "ChMatrix.h"
#include <fstream>
#include <cstring>

ChMatrix::ChMatrix(const char *filename) {
    file.open(filename);
    while(file){
        num++;
        ch = (char*) realloc(ch, num * sizeof(char));
        file >> ch[num - 1];
    }
    for(int i = 0; i < num; i++){
        cout << ch[i];
    }
}
