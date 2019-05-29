#include <cassert>
#include <iostream>
#include <string>
#include <vector>
#include "../my_code/basics.h"

using namespace std;

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    print_vector(v);
    cout << "v[1] = " << v[1] << endl;

    coord pos;
    pos.x = 7;
    pos.y = 8;
    print_coords(pos);

    say("Hello!");
    int test_num = 10;
    int ret = square(test_num);
    assert(ret == (test_num * test_num));

    ret = my_abs(test_num);
    assert(ret == test_num);
    ret = 77;
    ret = my_abs(-test_num);
    assert(ret == test_num);

    ret = sum(test_num);
    assert(ret == 45);
    ret = sum2(test_num);
    assert(ret == 45);
    say("Goodbye!");

    return 0;
}
