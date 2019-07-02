#include <iostream>
#include <istream>
#include <iomanip>
#include "complex.h"

using namespace std;

bool operator== (const Complex& c1, const Complex& c2) {
    return (c1.get_real() == c2.get_real()) && (c1.get_imag() == c2.get_imag());
}

ostream& operator<< (ostream& os, const Complex& c) {
    /*
     * Outputting a `Complex` instance, while illustrating some of the
     * capabilities of I/O streams: `setprecision` gives us a fixed
     * number of decimal places, while `showpos` turns on the plus
     * sign for positive numbers.
     * */
    return os;
}


/*
 * Read a `Complex` number from an input stream.
 * */
istream& operator>> (istream& is, Complex& c) {
    return is;
}

Complex::Complex(double real, double imag) : real(real), imag(imag)
    {}

Complex::operator bool() const {
    return (real != 0.0) && (imag != 0.0);
}

Complex& Complex::operator++() {
    return *this;
}

Complex Complex::operator++(int dummy) {
    return *this;
}

Complex Complex::operator*(const int i) {
    return *this;
}

