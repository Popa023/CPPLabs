//
// Created by razvan on 07.10.2018.
//

#include <iostream>
#import "ReadArray.h"

using namespace std;

int main(){

    ReadArray readArray("/home/razvan/CLionProjects/CPPLabs/lab2/Data.dat");
    for (int i = 0; i < readArray.count; i++){
        cout << readArray.array[i] << endl;
    }

    return 0;

}