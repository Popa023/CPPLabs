/**
 * Lab1a
 * This is the simplest of "hello world" programs.
 * Every line is commented (a bad idea, generally) in this first program.
 */

using namespace std;   // This line is always necessary - it allows the use of the standard library.
                       // PUT IT AT THE FRONT OF EVERY .h AND .cpp FILE.
#include <iostream>
           // The line above includes the interface to simple input/output


/**
 * The following function is the main (and only, in this case)
 * function in this program. Its only purpose is to allow you
 * to learn how to compile simply using Textpad.
 */

int main() // can have arguments
{   cout << "hello world" << endl;
    // cout is standard output stream
    // the precedence rules say that this expression means ((cout << "hello world") << endl)
    // it works since although an expression such as cout << x performs output the value of
    // the expression is a reference to the iostream
}
