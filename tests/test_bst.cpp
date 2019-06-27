#include <cassert>
#include "../my_code/bst.h"

using namespace std;

int main() {
    Bst<int>* iroot = new Bst<int>(2);
    print_bst(*iroot);
}
