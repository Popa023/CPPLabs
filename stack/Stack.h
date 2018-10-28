//
// Created by razvan on 27.10.2018.
//

#ifndef CPPLABS_STACK_H
#define CPPLABS_STACK_H

#include <string>
#include <vector>

using namespace std;

class Stack {

public:
    Stack();
    void push(int &a);
    void pop();

private:
    int *p;

};


#endif //CPPLABS_STACK_H
