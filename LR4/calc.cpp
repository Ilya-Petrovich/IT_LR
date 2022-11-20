#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int num_1, num_2, num_3;
	std::cout << "Vvedite pervoe chislo:";
	std::cin >> num_1;
	std::cout << "Vvedite vtoroe chislo:";
	std::cin >> num_2;
	std::cout << "Vvedite tretie chislo:";
	std::cin >> num_3;
	std::cout << num_1 << " + " << num_2 << " = " << num_1 + num_2 << std::endl;
	std::cout << num_1 << " - " << num_2 << " = " << num_1 - num_2 << std::endl;
	std::cout << num_1 << " * " << num_2 << " = " << num_1 * num_2 << std::endl;
	std::cout << num_1 << " / " << num_2 << " = " << num_1 / num_2 << std::endl;
	std::cout << double(num_1) << ".0" << / double(num_2) << ".0" << " = " << double(num_1) / double(num_2) << std::endl;
	std::cout << num_1 << " % " << num_2 << " = " << num_1 % num_2 << std::endl;
	std::cout << num_1 << " + " << num_2 << "*" << num_3 << " = " << num_1 + num_2 * num_3 << std::endl;
	std::cout << "(" << num_1 << " + " << num_2 << ")" << "*" << num_3 << " = " << (num_1 + num_2) * num_3 << std::endl;
	return 0;
}
