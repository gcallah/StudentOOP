
/*
 * Binary search tree algorithms in C++.
 * An overview of these algorithms can be found here:
 * http://www.zrzahid.com/binary-search-tree-bst-insert-delete-successor-predecessor-traversal/
 * You must fill in bst.h to pass all tests below:
 * */

#include <cassert>
#include "../my_code/bst.h"

using namespace std;

int main() {
    Bst<int>* iroot = new Bst<int>(40);
    assert(iroot->get_val() == 40);
    print_bst(*iroot);

    iroot->insert(20);
    iroot->insert(60);
    print_bst(*iroot);
    // assert(min(iroot) == 20);
    // assert(max(iroot) == 60);

    iroot->insert(10);
    iroot->insert(30);
    iroot->insert(50);
    iroot->insert(70);
    print_bst(*iroot);
    // assert(min(iroot) == 10);
    // assert(max(iroot) == 70);

    iroot->insert(5);
    iroot->insert(25);
    iroot->insert(45);
    iroot->insert(75);
    print_bst(*iroot);
    // assert(min(iroot) == 5);
    // assert(max(iroot) == 75);

    /*
    Bst<int>* result = iroot->search(45);
    assert(result->get_val() == 45);
    result = iroot->search(95);
    assert(result == nullptr);

    
     */
}
