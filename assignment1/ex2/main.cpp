//
// Created by razvan on 28.10.2018.
//

#include <iostream>
#include "WordsArray.h"

using namespace std;

int main(){

    char textpath[200], searchpath[200], outpath[200];
    cout << "Text file path: ";
    cin >> textpath;
    cout << "Search file path: ";
    cin >> searchpath;
    cout << "Output file path: ";
    cin >> outpath;
    WordsArray wordsArray1(textpath), wordsArray2(searchpath);
    wordsArray1.printwords(wordsArray2, outpath);

}
