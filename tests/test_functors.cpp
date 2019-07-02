
#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159265358979323846;

class Sin {
    public:
        double operator()(double n) {
            return sin(n);
        }
};

class Fib {
    public:
        Fib() {
            for (int i = 0; i < MAX_FIB; i++)
                memo[i] = NOT_CALCED;
        }

        double operator()(int n) {
            if (memo[n] != NOT_CALCED) return memo[n];

            int result = 0;
            if (n <= 1) result = 1;
            else result = (operator()(n - 1) + operator()(n - 2));

            memo[n] = result;
            return result;
        }

        const int MAX_FIB = 100;
        const int NOT_CALCED = -1;
    private:
        int* memo = new int[MAX_FIB];
};


double square_func(double d, function<double(double)> f) {
    return f(d) * f(d);
}


int main() {
    // first functors:
    Sin sine = Sin();
    double d = sine(PI / 2);
    cout << "sin pi / 2 == " << d << endl;
    d = sine(0);
    cout << "sin 0  " << d << endl;
    Fib fib = Fib();
    int f = fib(80);
    cout << "fib(80) == " << f << endl;

    // then lambdas -- use several functions from cmath here:
    // you're call here!
    cout << "Square of sin 0 = " << d << endl;
    // you're call here!
    cout << "Square of sin 1 = " << d << endl;
    // you're call here!
    cout << "Square of tan 0 = " << d << endl;
    // you're call here!
}
