/**
 *  ReadArray.cpp
 */
using namespace std;
#include <cstdlib>  // for exit()
#include "ReadArray.h"

ReadArray::ReadArray(const char *filename)
{   count = 0;
    in.open(filename);
    if (!in)
    {   cout << "Failed to open " << filename << endl;
        exit(1);
	}
}

void ReadArray::readFile()
{   bool reading = true;
    int n;
    while (reading)
    {   in >> n;
        if (in.eof())
            reading = false;
        else
        {   array[count] = n;
            count++;
		}
	}
	in.close();
}
