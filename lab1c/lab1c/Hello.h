/**
 *  Lab1c
 */
/*
  This .h file contains the interface to our hello class which will be
  implemented in Hello.cpp.
  We describe the behaviour of this class here. We implement it in the .cpp file.
  We make sure that only one copy of this .h file is included.
*/
#ifndef _HELLO_H
#define _HELLO_H

using namespace std;
/*
  We need to include the interface to the string library.
*/
#include <string>

class Hello
{   public:
        /**
         * Constructor. Initialises the data item.
         * @param s - string to initialise the data item with.
         */
        Hello(string s);

        /**
         * this void function prints the message.
         */
        void doIt();
    private:
        /*
           This is our instance of the message.
         */
        string message;
};
// note the semicolon
// leave at least one empty line at the end so that if it's necessary to examine the temporary file generated
// by the C preprocessor there's a blank line between the class declaration and the next line of code

#endif
