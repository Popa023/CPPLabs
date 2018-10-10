//
// Created by razvan on 10.10.2018.
//

#ifndef CPPLABS_ASSASSIN_H
#define CPPLABS_ASSASSIN_H

#include <iostream>
#include <string>

using namespace std;

class Assassin {

public:

    Assassin(string name, int kills = 0);
    Assassin operator+(Assassin &);
    Assassin& operator++(int n);
    Assassin& operator--(int n);

private:

    string name;
    int kills;

    friend ostream& operator<<(ostream &, Assassin &);

};


#endif //CPPLABS_ASSASSIN_H
