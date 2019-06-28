#include <iostream>

void indent(int level) {
    // indent more at each level:
    for (int i = 0; i < level; i++) std::cout << "  ";
}

template <typename T>
class Bst {
    friend void print_bst(const Bst<T>& bst, int level=0) {
        indent(level);
        level++;

        std::cout << "data: " << bst.data << std::endl;
        indent(level + 1);
        std::cout << "left: ";
   
        if (!bst.left) std::cout << "nullptr\n";
        else {
            std::cout << "\n";
            indent(level);
            print_bst(*bst.left, level);
        }
        indent(level + 1);
        std::cout << "right: ";
        if (!bst.right) std::cout << "nullptr\n";
        else {
            std::cout << "\n";
            indent(level);
            print_bst(*bst.right, level);
        }
        std::cout << std::endl;
    }

    public:
        Bst(T d, Bst* p=nullptr, Bst* l=nullptr, Bst* r=nullptr)
            : data(d), parent(p), left(l), right(r) {}

        Bst<T>* insert(const T d) {
        }

        T get_val() const {
            return data;
        }

    private:
        T data;
        Bst* parent;
        Bst* left;
        Bst* right;
};


//template <typename T>
//void print_bst(const Bst<T>& bst) {
//void print_bst(Bst<int> bst) {
//    std::cout << "data: " << bst.data << "; left: ";
//
//    if (!bst.left) std::cout << "nullptr ";
//    else {
//        std::cout << "\t\n";
//        print_bst(*bst.left);
//    }
//    std::cout << "; right: ";
//    if (!bst.right) std::cout << "nullptr ";
//    else {
//        std::cout << "\t\n";
//        print_bst(*bst.right);
//    }
//    std::cout << std::endl;
//}

