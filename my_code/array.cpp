#include <iostream>

int main() {
    int iarr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::cout << "iarr = " << iarr << std::endl;
    for (int* ip = iarr + 9; ip > (iarr - 20); ip--) {
        std::cout << "ip = " << ip << std::endl;
        std::cout << "*ip = " << *ip << std::endl;
    }

    double darr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::cout << "darr = " << darr << std::endl;
    for (double* dp = darr + 9; dp > (darr - 20); dp -= 5) {
        std::cout << "dp = " << dp << std::endl;
        std::cout << "*dp = " << *dp << std::endl;
    }
}
