#include <iostream>
#include "pointers.h"

using namespace std;

void inc_by_value(int n) {
    ++n;
}


void inc_with_pointer(int* n) {
    ++(*n);
}


void inc_with_reference(int& n) {
    ++n;
}


Thing** create_array_of_things(int n) {
    Thing** things = new Thing*[n];
    // Fill array with Things:
    for (int i = 0; i < n; i++)
        things[i] = new Thing(i);

    return things;
}

void print_all_things(Thing** things, int n) {
}

void double_all_things(Thing** things, int n) {
    for (int i = 0; i < n; i++)
        things[i]->val *= 2;
}

void delete_all_things(Thing** things, int n) {

}

