
#include <iostream>
#include <functional>
#include <cmath>
#include <string>

using namespace std;

const double PI = 3.14159265358979323846;

/*
 * An exception to throw when we get a number too big.
 * */
class NoNegative : public exception {
public:
    NoNegative(int n)
        : badnum(n)
    {
    }

    const char* what() const throw() {
        string s = "Argument canot be negative: " + to_string(badnum);
        return s.c_str();
    }

private:
    int badnum;
};


class Sin {
    public:
        double operator()(double r) {
            return sin(r);
        }
};

class Fib {
    public:
        Fib() {
        }

        long long int operator()(long long int n) {
            if (n < 0) throw (NoNegative(n));
            else if (n <= 1) return 1;
            else return operator()(n - 1) + operator()(n - 2);
        }

        const int MAX_FIB = 100;
        const int NOT_CALCED = -1;
    private:
};


double your_func(double d, function<double(double)> f) {
    return 0.0;  // ????
}


double square_func(double d, function<double(double)> f) {
    return f(d) * f(d);
}


int main() {
    const long long int FIB_NUM = -46;

    // first functors:
    Sin sine = Sin();
    double d = sine(PI / 2);
    cout << "sin pi / 2 == " << d << endl;
    d = sine(0);
    cout << "sin 0 == " << d << endl;
    Fib fib = Fib();
//    try {
        long long int f = fib(FIB_NUM);
        cout << "fib(" << FIB_NUM << ") == " << f << endl;
//    }
//    catch (NoNegative& e) {
//        cerr << "Got a negative argument for fib: " << e.what() << endl;
//    }

    // then lambdas -- use several functions from cmath here:
    d = square_func(0, [](double arg) { return sin(arg); });
    cout << "Square of sin 0 = " << d << endl;
    d = square_func(1, [](double arg) { return sin(arg); });
    cout << "Square of sin 1 = " << d << endl;
    /*
    // you're call here!
    cout << "Square of cos 1 = " << d << endl;
    // you're call here!
    cout << "Square of tan 0 = " << d << endl;
    // you're call here!
    */
}
