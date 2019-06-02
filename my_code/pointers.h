#ifndef POINTERS_H
#define POINTERS_H

struct Thing {
    int val;
    Thing(int i) : val(i) {}
};

void inc_by_value(int n);
void inc_with_pointer(int* n);
void inc_with_reference(int& n);

Thing** create_array_of_things(int n);
void print_all_things(Thing** things, int n);
void double_all_things(Thing** things, int n);
void delete_all_things(Thing** things, int n);

#endif
