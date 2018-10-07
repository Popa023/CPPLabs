//
// Created by razvan on 07.10.2018.
//
#include <iostream>

using namespace std;

int main(int args, char **argv){
    cout << "The program name was " << argv[0];
    if(args != 1) {
        cout << endl << "The arguments were";
        for (int i = 1; i < args; i++) {
                cout << endl << argv[i];
        }
    }
    else {
        cout << endl << "No arguments";
    }
}
