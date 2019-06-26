#include <iostream>
#include "vector.h"

using namespace std;

template <typename T>
void print_vector(const MyVec<T>& v) {
    for (int i = 0; i < v.size(); i++) cout << i << " ";
    cout << endl;
}


/*
MyVec::MyVec() : sz(0) {
    capacity = DEF_CAPACITY;
    data = new T[DEF_CAPACITY];
}
*/


/*
MyVec::MyVec(int sz, T val) : sz{sz} {
}


MyVec::MyVec(const MyVec& v2) {
    copy(v2);
}

MyVec::~MyVec() {
    delete [] data;
}

MyVec& MyVec::operator=(const MyVec& v2) {
    if (this != &v2) {
        delete [] data;
        copy(v2);
    }
    return *this;
}


MyVec::Iterator MyVec::begin() const {
    return MyVec::Iterator(nullptr);
}

MyVec::Iterator MyVec::end() const {
    return MyVec::Iterator(nullptr);
}
*/


/*
 * == is true when every element of the vectors are the same in
 * the same order. (Thus they must be the same size.)
bool operator==(MyVec<T>& v1, MyVec<T>& v2) {
    return true;
}
 * */


/*
 * this [] is for reading items from the MyVec:
 * It returns the i-th element.
T MyVec<T>::operator[](int i) const {
    return data[i];
}
 * */

/*
 * this [] allows write access to items in the MyVec:
 * It returns a reference to the i-th element.
T& MyVec::operator[](int i) {
    return data[i];
}

void MyVec::copy(const MyVec& v2) {
    sz = v2.sz;
    capacity = v2.capacity;
    data = new T[capacity];
    for (int i = 0; i < sz; i++) {
        data[i] = v2.data[i];
    }
}

 * */
