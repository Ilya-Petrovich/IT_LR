#include <iostream>  
#include <cmath>  


using namespace std;
int main()
{

    setlocale(LC_ALL, "rus");
    int num_1, num_2, num_3;
std:cout << "¬ведите первое число:";
    std::cin >> num_1;
    std::cout << "¬ведите второе число:";
    std::cin >> num_2;
    std::cout << "¬ведите третье число:";
    std::cin >> num_3;

    std::cout << num_1 << " + " << num_2 << " = " << num_1 + num_2 << std::endl;
    std::cout << num_1 << " - " << num_2 << " = " << num_1 - num_2 << std::endl;
    std::cout << num_1 << " * " << num_2 << " = " << num_1 * num_2 << std::endl;
    std::cout << num_1 << " / " << num_2 << " = " << num_1 / num_2 << std::endl;
    std::cout << num_1 << " % " << num_2 << " = " << num_1 % num_2 << std::endl;
    std::cout << num_1 << " + " << num_2 << "* " << num_3 << " = " << num_1 + num_2 * num_3 << std::endl;
    std::cout << "(" << num_1 << " + " << num_2 << ")" << "* " << num_3 << " = " << (num_1 + num_2) * num_3 << std::endl;

    if (num_1 > num_2)
    {
        std::cout << num_1 << "+" << num_2 << "=" << num_1 + num_2 << std::endl;

        std::cout << num_1 << "-" << num_2 << "=" << num_1 - num_2 << std::endl;

    }
    else {
        std::cout << "Invalid data" << std::endl;
    }

    return 0;
}