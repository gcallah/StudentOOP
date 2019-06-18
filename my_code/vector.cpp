#include <iostream>
#include "vector.h"

using namespace std;

void print_vector(const MyVec& v) {
}


MyVec::MyVec() {
}

MyVec::MyVec(const MyVec& v2) {
}

MyVec::~MyVec() {
}

MyVec& MyVec::operator=(const MyVec& v2) {
}

bool operator==(MyVec& v1, MyVec& v2) {
    return true;
}

void MyVec::push_back(int val) {
}

// this [] is for reading items from the MyVec:
int MyVec::operator[](int i) const {
    return 0;
}

// this [] allows write access to items in the MyVec:
int& MyVec::operator[](int i) {
    int j = 0;
    return j;
}
