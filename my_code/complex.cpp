#include <iostream>
#include <istream>
#include <iomanip>
#include "complex.h"

using namespace std;

bool operator== (const Complex& c1, const Complex& c2) {
    return ((c1.real == c2.real) && (c1.imag == c2.imag));
}

ostream& operator<< (ostream& os, const Complex& c) {
    /*
     * Outputting a `Complex` instance, while illustrating some of the
     * capabilities of I/O streams: `setprecision` gives us a fixed
     * number of decimal places, while `showpos` turns on the plus
     * sign for positive numbers.
     * */
    os << setprecision(10) << c.real << showpos
         << c.imag << "i" << noshowpos << endl;
    return os;
}


/*
 * Read a `Complex` number from an input stream.
 * */
istream& operator>> (istream& is, Complex& c) {
    is >> c.real >> c.imag;
    return is;
}


Complex::Complex(double real, double imag)
            : real{real}, imag{imag} {}


Complex::operator bool() const {
    return ((real != 0) || (imag != 0));
}

Complex& Complex::operator++() {
    ++real;
    return (*this);
}

Complex Complex::operator++(int dummy) {
    Complex temp(*this);
    real++;
    return temp;
}

Complex Complex::operator+(const Complex& c) {
    Complex sum{real + c.real, imag + c.imag};
    return sum;
}

double Complex::get_real() const {
    return real;
}

double Complex::get_imag() const {
    return imag;
}
