#include <iostream>
#include <cmath>

int main() {
    int num_1, num_2, num_3;
    std::cout << "Type the first number: ";
    std::cin >> num_1;
    std::cout << "Type the second number: ";
    std::cin >> num_2;
    std::cout << "Type the third number: ";
    std::cin >> num_3;

    if ((num_1 > num_2) and num_1 >= 0 and num_2 > 0 and num_3 >= 0) {
        std::cout << num_1 << " + " << num_2 << " = " << num_1 + num_2 << endl;
        std::cout << num_1 << " - " << num_2 << " = " << num_1 - num_2 << endl;
        std::cout << num_1 << " * " << num_2 << " = " << num_1 * num_2 << endl;
        std::cout << num_1 << " / " << num_2 << " = " << num_1 / num_2 << endl;
        std::cout << double(num_1) << ".0 " << " / " << double(num_2) << ".0 " << " = " << double(num_1) / double(num_2) << endl;
        std::cout << num_1 << " % " << num_2 << " = " << num_1 % num_2 << endl;
        std::cout << num_1 << " + " << num_2 << " * " << num_3 << " = " << num_1 + num_2 * num_3 << endl;
        std::cout << "(" << num_1 << " + " << num_2 << ")" << " * " << num_3 << " = " << (num_1 + num_2) * num_3 << endl;
    }
    else {
        std::cout << "Invalid data" << endl;
        return 0;
    }
}