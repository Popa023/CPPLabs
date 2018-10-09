/**
 *  Lab3a output
 */
 /**
  * This small program will be used to look at primitive I/O
  */
using namespace std;

#include <iostream>
#include <string>

main()
{
    /*
      We will make a character buffer of a reasonable size later.
      We have an array of 10 characters. We read into it.
      It is legal but deadly to read in more.
    */
    #define BUF_SIZE 10

    char buf[BUF_SIZE];

    /*
       FOR TEACHING PURPOSES ONLY,  we initialize the buffer with nonsense.
       We do a horrible thing to a character - increment it.
     */
    char a = 'a';
    for (int i=0; i<BUF_SIZE; ++i) {
        buf[i]= a;
        a++;
    }

    cout << " type a line: ";

    /*
     Note the check in the getline method. We should not read more characters than
     the available space will hold, + one for the zero terminating the C string.
     Note that getline throws away the newline.
     */
    cin.getline(buf, BUF_SIZE);

    //in case we want to do string manipulation with that line in a proper C++ string.
    string s = buf;

    //comparison printout just to check
    cout << '[' << s << ']' << endl;    //print the string
    cout << '<' << buf << '>' << endl;  //print the original array

    /* write out a part of the string,  delimited so we can see the strings
      clearly. This is very primitive I/O. all other I/O uses these to implement
      the more complex I/O behaviour.
     */
    cout.put('[');
    cout.write(buf, 9);
    cout.put(']');
    cout.put('\n');

    cout.put('[');
    cout.write(buf, 5);
    cout.put(']');
    cout.put('\n');

    //not really necessary, as the newline has the same effect unless cout refers to a file.
    cout.flush();

    return 0;
}
