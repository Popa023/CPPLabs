//
// Created by razvan on 28.10.2018.
//

#ifndef CPPLABS_WORDSARRAY_H
#define CPPLABS_WORDSARRAY_H

using namespace std;

#include <iostream>
#include <string>
#include <map>
#include "ReadWords.h"

class WordsArray {

public:
    WordsArray(const char *filename);
    void printwords(WordsArray &wordsArray, const char *of);

private:
    ReadWords readWords;
    map<string, int> words;
};


#endif //CPPLABS_WORDSARRAY_H
