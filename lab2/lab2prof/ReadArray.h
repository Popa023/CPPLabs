/**
 *  ReadArray.h
 */

#ifndef _READARRAY_H_
#define _READARRY_H_

using namespace std;
#include <iostream>
#include <fstream>

class ReadArray
{   public:
        ReadArray(const char *filename);
        void readFile();
        int array[100];
        int count;
    private:
        ifstream in;
};

#endif
