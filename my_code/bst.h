#include <iostream>

template <typename T>
class Bst {
    friend void print_bst(const Bst<T>& bst);

    public:
        Bst(T d, Bst* l=nullptr, Bst* r=nullptr)
            : data(d), left(l), right(r) {}
    private:
        T data;
        Bst* left;
        Bst* right;
};


template <typename T>
void print_bst(const Bst<T>& bst) {
    std::cout << "data: " << bst.data << "; left: ";

    if (!bst.left) std::cout << "nullptr ";
    else {
        std::cout << "\t\n";
        print_bst(bst.left);
    }
    std::cout << "; right: ";
    if (!bst.right) std::cout << "nullptr ";
    else {
        std::cout << "\t\n";
        print_bst(bst.right);
    }
    std::cout << std::endl;
}

