
/*
 * Binary search tree algorithms in C++.
 * An overview of these algorithms can be found here:
 * http://www.zrzahid.com/binary-search-tree-bst-insert-delete-successor-predecessor-traversal/
 * You must fill in bst.h to pass all tests below:
 * */

#include <cassert>
#include <string>
#include "../my_code/bst.h"

using namespace std;

int main() {
    Bst<int>* iroot = new Bst<int>(40);
    assert(iroot->get_val() == 40);
    print_bst(*iroot);

    /*
    iroot->insert(20);
    iroot->insert(60);
    print_bst(*iroot);
    // assert(iroot->min() == 20);
    // assert(iroot->max() == 60);

    iroot->insert(10);
    iroot->insert(30);
    iroot->insert(50);
    iroot->insert(70);
    print_bst(*iroot);
    // assert(iroot->min() == 10);
    // assert(iroot->max() == 70);

    iroot->insert(5);
    iroot->insert(25);
    iroot->insert(45);
    iroot->insert(75);
    print_bst(*iroot);
    // assert(iroot->min() == 5);
    // assert(iroot->max() == 75);

    Bst<int>* result = iroot->search(45);
    assert(result->get_val() == 45);
    result = iroot->search(95);
    assert(result == nullptr);

    Bst<int>* pred45 = iroot->predecessor(45);
    assert(pred45->get_val() == 40);
    succ45 = iroot->successor(45);
    assert(succ45->get_val() == 50);
    
     */
    Bst<string>* sroot = new Bst<string>("Ellie");
    assert(sroot->get_val() == "Ellie");
    print_bst(*sroot);

    /*
    sroot->insert("Daniel");
    sroot->insert("Raj");
    print_bst(*sroot);
    // assert(sroot->min() == "Daniel");
    // assert(sroot->max() == "Raj");
    sroot->insert("Bohan");
    sroot->insert("Raymond");
    print_bst(*sroot);
    // assert(sroot->min() == "Bohan");
    // assert(sroot->max() == "Raymond");
    Bst<string>* sresult = sroot->search("Raj");
    assert(sresult->get_val() == "Raj");
    */
}
