#ifndef TEMPL_LL_H
#define TEMPL_LL_H

#include <iostream>
#include <string>
#include <vector>


/*
 * The class template `Node`, which is the building block of our linked list code.
 * */
template <typename DATA>
class Node {
public:
    Node(DATA d, Node* n=nullptr) : data(d), next(n) {}
    DATA data;
    Node* next;
};


/*
 * The various functions that can operate on our linked lists:
 * */
template <typename DATA>
std::ostream& operator<<(std::ostream& os, const Node<DATA>* nd) {
    if (!nd) os << "nullptr";
    else {
        os << "data: " << nd->data << " next: ";
    }
    return os;
}

/*
 * Add a node to the end of a list.
 * */
template <typename DATA>
void add_at_end(Node<DATA>*& head, DATA d) {
    if (!head) {
        head = new Node<DATA>(d, nullptr);
    }
    else {
        add_at_end(head->next, d);
    }
}

template <typename DATA>
void print_list(std::ostream& os, const Node<DATA>* curr) {
    os << curr;
    if (curr) print_list(os, curr->next);
    else os << std::endl;
}

/*
 * Reverse the list: return a brand new list with everything reversed.
 * Once again, you must not share memory.
 * */
template <typename DATA>
Node<DATA>* reverse(Node<DATA>* curr, Node<DATA>* new_next) {
    if (!curr) return new_next;
    else {
        return reverse(curr->next, new Node<DATA>(curr->data, new_next));
    }
}

/*
Node* last(Node* head);
void add_at_front(Node*& head, int d);

 * These are coming:
*/
 
/*
 * Delete the first node and attach head to the 2nd node:
 * */
//bool del_head(Node*& head);

/*
 * Delete the last node and set prev->next to nullptr:
 * */
//bool del_tail(Node*& head);

/*
 * Duplicate the entire list -- you must not share memory!
 * */
//Node* duplicate(Node* head);


/*
 * Join two lists: tack list 2 onto the end of list 1:
 * Use existing memory.
 * */
//Node* join(Node*& list1, Node* list2);

#endif
