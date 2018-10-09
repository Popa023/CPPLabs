/**
 *  Lab3b precision
 */

 /**
  * This small program will be used to look at fields and precision I/O
  */
using namespace std;

#include <iostream>
#include <string>
#include <iomanip>

int main()
{ double d = 39.9001;
  cout.width(10);
  cout << '<' << setw(20) << d<<'>' << d << 'x' << endl;
  cout << '<' << setw(20) << left << d << '>'<< d << 'x' << endl;
  cout.fill('*');
  cout << '<' << setw(20) << left << d << '>' << endl;
  cout << '<' << setw(20) << scientific << d << '>' << endl;
  cout << '<' << setw(20) << setprecision(3) << setfill('h') << d << "><" << setw(20) << d << '>' << endl;

  return 0;
}
