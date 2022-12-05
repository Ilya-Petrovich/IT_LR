#include <iostream>
#include <iomanip>

int main() {
    int num_1, num_2, num_3;

    std::cout << "Type the first number: ";
    std::cin >> num_1;
    std::cout << "Type the second number: ";
    std::cin >> num_2;
    std::cout << "Type the third number: ";
    std::cin >> num_3;

    if (num_1 > num_2) {
        std::cout << num_1 << " + " << num_2 << " = " << num_1 + num_2 << std::endl;
        std::cout << num_1 << " - " << num_2 << " = " << num_1 - num_2 << std::endl;
        std::cout << num_1 << " * " << num_2 << " = " << num_1 * num_2 << std::endl;
        std::cout << num_1 << " / " << num_2 << " = " << num_1 / num_2 << std::endl;
        std::cout << std::setprecision(1) << std::fixed << (float)num_1 << " / " << (float)num_2 << " = ";
        std::cout << std::setprecision(5) << std::fixed << (float)num_1 / num_2 << std::endl;
        std::cout << std::setprecision(0) << std::fixed;
        std::cout << num_1 << " % " << num_2 << " = " << num_1 % num_2 << std::endl;
        std::cout << num_1 << " + " << num_2 << " * " << num_3 << " = " << num_1 + num_2 * num_3 << std::endl;
        std::cout << "(" << num_1 << " + " << num_2 << ")" << " * " << num_3 << " = " << (num_1 + num_2) * num_3 << std::endl;
    } else {
        std::cout << "Invalid data" << std::endl;
    }

    return 0;
}
