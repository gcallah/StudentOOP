#include <cassert>
#include <iostream>
#include <string>
#include "../my_code/vector.h"

using namespace std;

template <typename T>
int copy_vector(MyVec<T> v) {
    MyVec<T> local_v = v;
}

const int VEC_SZ = 20;


int main() {
    MyVec<int> iv = MyVec<int>();
    for (int i = 0; i < VEC_SZ; i++) {
        iv.push_back(i);
        copy_vector(iv);
    }

    assert(iv[VEC_SZ - 1] == VEC_SZ - 1);
    for (int i = 0; i < iv.size(); i++) {
        iv[i] *= 2;

    iv.push_back(0);
    cout << "iv[0] == " << iv[0] << endl;
    MyVec<string> sv = MyVec<string>();
    sv.push_back("Hello");
    cout << "sv[0] == " << sv[0] << endl;
    MyVec<double> dv = MyVec<double>();
    dv.push_back(42.7);
    cout << "dv[0] == " << dv[0] << endl;
}
