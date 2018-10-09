#include <iostream>

using namespace std;

#include "Complex.h"

int main()
{ Complex x, y(4.3, 8.2), z(3.3, 1.1);

  cout << "x: ";
  cout << x;
  cout << endl << "y: ";
  y.print();
  cout << endl << "z: ";
  z.print();

  x = y+z;

  cout << endl << endl << "x = y+z: ";
  cout << x << " = " << y << " + " << z;

  x = y-z;

  cout << endl << endl << "x = y-z: ";
  x.print();
  cout << " = ";
  y.print();
  cout << " - ";
  z.print();
  cout << endl;

  x = y*z;

  Complex a(10, 0), b(10, 10);

  if(a==b){
      cout << "true";
  }
  else{
      cout << "false";
  }

  cout << endl << endl << "x = y*z: " << x << " = " << y << " * " << z;

}

