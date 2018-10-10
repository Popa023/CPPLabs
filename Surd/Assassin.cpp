//
// Created by razvan on 10.10.2018.
//

#include "Assassin.h"


using namespace std;

Assassin::Assassin(string name, int kills){
    this->name = name;
    this->kills = kills;
}

Assassin Assassin::operator+(Assassin &op2) {

    string name;
    int kills;
    name = this->name + op2.name;
    kills = this->kills + op2.kills;
    Assassin assassin(name, kills);
    return assassin;

}

Assassin &Assassin::operator++(int n) {
    kills++;
    return *this;
}

Assassin &Assassin::operator--(int n) {
    kills--;
    return *this;
}

ostream &operator<<(ostream &o, Assassin &assassin) {
    o << "Assassinul " << assassin.name << " a facut " << assassin.kills;
    return o;
}
