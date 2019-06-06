#include <cassert>
#include <iostream>
#include "../my_code/complex.h"

using namespace std;

const bool DEBUG = true;


int main() {
    cout << "Input a complex number:\n";
    Complex c1;
    // get a complex from stdin:
    cin >> c1;
    if(!cin)
    {
        cerr << "Bad input format\n";
        exit(1);
    }
    if(DEBUG)
    {
        cout << "c1 = " << c1 << endl;
    }

    Complex c2{43.2, 58.9};
    if(DEBUG)
    {
        cout << "c2 = " << c2 << endl;
    }

    // see if `Complex` addition works:
    // Complex c3 = c1 + c2;

    Complex c4 = Complex();
    // test post-increment:
    c4++;
    c4++;
    assert(c4.get_real() == 2);
    /*
     * Test equality operator. If we take the `explicit` off of
     * `bool()` in class definition, then this will fail as ambiguous:
     * the compiler won't know if we want a `bool` or `Complex` comparison.
     * */
    (1 == bool(c4)) ? cout << "c4 == 1 is true\n"
        : cout << "c4 == 1 is false\n";
    // test bool() operator:
    (c4) ? cout << "c4 is true\n" : cout << "c4 is false\n";
    assert(c4);

    /*
     * The next line of code will implicitly
     * construct a `Complex` out of 14.2 using the default
     * imaginary component of 0.0.
     * */
    // Complex c5 = 14.2;
}
