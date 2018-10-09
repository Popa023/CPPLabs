#include <iostream>

using namespace std;

#include "Complex.h"

Complex::Complex(double r, double i) : real(r), imaginary(i) {}

Complex Complex::operator+(const Complex &op2) const
{   return Complex(real + op2.real, imaginary + op2.imaginary);
}

Complex Complex::operator-(const Complex &op2) const
{   return Complex(real - op2.real, imaginary - op2.imaginary);
}

Complex Complex::operator*(const Complex &complex1) const {
    Complex multiply(complex1.real*real-complex1.imaginary*imaginary,complex1.real*imaginary+complex1.imaginary*real);
    return multiply;
}

bool Complex::operator==(const Complex &op2) const{
    return real == op2.real && imaginary == op2.imaginary;
}

bool Complex::operator!=(const Complex &op2) const {
    return !(*this==op2);
}

// display a complex in the form (r, i)
void Complex::print() const
{ cout << '(' << real << ", " << imaginary << ')';
}

ostream &operator<<(ostream &o, const Complex &complex) {
    o << complex.real << "+" << complex.imaginary << "i";
    return o;
}

