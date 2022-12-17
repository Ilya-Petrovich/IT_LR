#include <iostream>

using namespace std;

int main() {
    int n1, n2, n3;
    std::cout << "Type the first number: ";
    std::cin >> n1;
    std::cout << "Type the second number: ";
    std::cin >> n2;
    std::cout << "Type the third number: ";
    std::cin >> n3;
    if (n1 > n2 && n1 >= 0 && n2 > 0 && n3 >= 0) {
        std::cout << n1 << " + " << n2 << " = " << n1 + n2 << std::endl;
        std::cout << n1 << " - " << n2 << " = " << n1 - n2 << std::endl;
        std::cout << n1 << " * " << n2 << " = " << n1 * n2 << std::endl;
        std::cout << n1 << " / " << n2 << " = " << n1 / n2 << std::endl;
        std::cout << n1 << ".0 / " << n2 << ".0 = " << double(n1) / double(n2) << std::endl;
        std::cout << n1 << " % " << n2 << " = " << n1 % n2 << std::endl;
        std::cout << n1 << " + " << n2 << " * " << n3 << " = " << n1 + n2 * n3 << std::endl;
        std::cout << "(" << n1 << " + " << n2 << ")" << " * " << n3 << " = " << (n1 + n2) * n3 << std::endl;
    }
    else {
        std::cout << "Invalid data" << std::endl;
    }system("pause");
    return 0;
}