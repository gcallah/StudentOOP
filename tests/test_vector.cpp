#include <cassert>
#include <iostream>
#include <string>
#include "../my_code/vector.h"

using namespace std;

/*
int copy_vector(MyVec v) {
    MyVec local_v = v;
    return local_v.size();
}
*/

int main() {
    MyVec<int> iv = MyVec<int>();
    iv.push_back(0);
    cout << "iv[0] == " << iv[0] << endl;
    MyVec<string> sv = MyVec<string>();
    sv.push_back("Hello");
    cout << "sv[0] == " << sv[0] << endl;
    MyVec<double> dv = MyVec<double>();
    dv.push_back(42.7);
    cout << "dv[0] == " << dv[0] << endl;
    /*
    for (int i = 0; i < 200; i++) {
//        v.push_back(i);
        // copy_vector(v);
    }
    */
//    assert(v[199] == 199);
    /*
    for (int i = 0; i < 200; i++) {
        v[i] *= 2;
    }
    assert(v[199] == 398);
    MyVec v3;
    for (int i = 9; i < 100; i += 9) {
        v3.push_back(i);
    }
    assert(v3[1] == 18);

    MyVec v2 = v;
    print_vector(v2);
    assert(v2 == v);

    v2 = v3;
    print_vector(v2);
    assert(v2 == v3);

    for (int i : v3) {
        assert((i % 9) == 0);
    }

    MyVec v4 = MyVec(10, 20);
    for (int i : v4) {
        assert(i == 20);
    }
    */
}
