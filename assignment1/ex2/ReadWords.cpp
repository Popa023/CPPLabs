//
// Created by razvan on 28.10.2018.
//
using namespace std;

#include <iostream>
#include "ReadWords.h"
#include <fstream>
#include <string>

ReadWords::ReadWords(const char *filename) {
    wordfile.open(filename);
    if(!wordfile){
        cout << "the open file function failed";
        exit(1);
    }
}

void ReadWords::close() {
    wordfile.close();
}

void removepunct(string &s){
    while(ispunct(s[0])){
        s.erase(0,1);
    }
    while(ispunct(s[s.size()-1])){
        s.erase(s.size()-1,1);
    }
}

string ReadWords::getNextWord() {
    string word, replacer;
    wordfile >> word;
    removepunct(word);
    for(int i = 0; i < word.size() - 1; i++){
        replacer = tolower(word[i]);
        word.replace(i, 1, replacer);
    }
    return word;
}

bool ReadWords::isNextWord() {
    return !wordfile.eof();
}

