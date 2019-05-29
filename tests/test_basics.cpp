#include <cassert>
#include <string>
#include "../my_code/basics.h"

using namespace std;

int main() {
    int test_num = 10;
    int ret = square(test_num);
    assert(ret == (test_num * test_num));

    ret = my_abs(test_num);
    assert(ret == test_num);
    ret = 77;
    ret = my_abs(-test_num);
    assert(ret == test_num);
    return 0;

    ret = sum(test_num);
    assert(ret == 45);
    ret = sum2(test_num);
    assert(ret == 45);
}
