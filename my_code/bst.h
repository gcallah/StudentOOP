#include <iostream>

template <typename T>
class Bst {
    friend std::ostream& operator<<(std::ostream& os, const Bst<T>& bst);

    public:
        Bst(T d, Bst* l=nullptr, Bst* r=nullptr)
            : data(d), left(l), right(r) {}
    private:
        T data;
        Bst* left;
        Bst* right;
};


template <typename T>
std::ostream& operator<<(std::ostream& os, const Bst<T>& bst) {
    os << "data: " << bst.data << "; left: "
        << bst.left << "; right: " << bst.right;
    return os;
}

