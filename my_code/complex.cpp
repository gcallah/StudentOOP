#include <iostream>
#include <istream>
#include <iomanip>
#include "complex.h"

using namespace std;

bool operator== (const Complex& c1, const Complex& c2) {
    return true;  // temp!
}

ostream& operator<< (ostream& os, const Complex& c) {
    /*
     * Outputting a `Complex` instance, while illustrating some of the
     * capabilities of I/O streams: `setprecision` gives us a fixed
     * number of decimal places, while `showpos` turns on the plus
     * sign for positive numbers.
     * */
}


/*
 * Read a `Complex` number from an input stream.
 * */
istream& operator>> (istream& is, Complex& c) {
}


Complex::operator bool() const {
}

Complex& Complex::operator++() {
}

Complex Complex::operator++(int dummy) {
}

Complex Complex::operator+(const Complex& c) {
}

double Complex::get_real() const {
}

double Complex::get_imag() const {
}

Complex Complex::operator*(const int i) {
}

