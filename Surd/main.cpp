//
// Created by razvan on 10.10.2018.
//
#include <iostream>
#import "Assassin.h"

using namespace std;

int main(){
    Assassin alexios("alexios"), surdnoob("surd cel noob", -100);
    cout << alexios << endl << surdnoob;
    Assassin nou = alexios + surdnoob;
    cout << endl << nou;
    alexios++;
    cout << alexios;
}