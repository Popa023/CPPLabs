//
// Created by razvan on 28.10.2018.
//

#include <iostream>
#include <iomanip>
#include "WordsArray.h"
#include <map>


WordsArray::WordsArray(const char *filename) : readWords(filename), words() {
    string word;
    while (readWords.isNextWord()){
        word = readWords.getNextWord();
        words[word]++;
    }
    readWords.close();
}

void WordsArray::printwords(WordsArray &wordsArray, const char *ofilepath) {
    map<string, int>::iterator it, it2;
    ofstream of(ofilepath);
    int maxApp = 0;
    for(it = wordsArray.words.begin(); it != wordsArray.words.end(); it++){
        if(maxApp < words[it->first]){
            maxApp = words[it->first];
        }
    }
    cout << "O \"*\" la fiecare " << maxApp/10 << " aparitii " << endl;
    of << "O \"*\" la fiecare " << maxApp/10 << " aparitii " << endl;
    for(it = wordsArray.words.begin(); it != wordsArray.words.end(); it++){
        of << setw(15) << left << it->first << " : ";
        cout << setw(15) << left << it->first << " : ";
        it2 = words.find(it->first);
        for(int i = 0; i < (it2->second/(maxApp/10)) + 1; i++){
            cout << "*";
            of << "*";
        }
        cout << "  " << it2->second << endl;
        of << "  " << it2->second << endl;
    }
}
