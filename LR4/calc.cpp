#include <iostream>

int main() {

	setlocale(LC_ALL, "Rus");

	int num_1, num_2;

	num_1 = 7;
	num_2 = 3;

	std::cout << "¬ведите первое число: ";
	std::cin >> num_1;

	std::cout << "¬ведите второе число: ";
	std::cin >> num_2;

	if (num_1 > num_2) {
		std::cout << num_1 << " + " << num_2 << " = " << num_1 + num_2 << std::endl;
		std::cout << num_1 << " - " << num_2 << " = " << num_1 + num_2 << std::endl;
	}
	else {
		std::cout << "Invalide data" << std::endl;
		return 0;
	}

	std::cout << "7 + 3 = " << 7 + 3 << std::endl;
	std::cout << "7 - 3 = " << 7 - 3 << std::endl;
	std::cout << "7 * 3 = " << 7 * 3 << std::endl;
	std::cout << "7 / 3 = " << 7 / 3 << std::endl;
	std::cout << "7.0 / 3.0 = " << 7.0 / 3.0 << std::endl;
	std::cout << "7 % 3 = " << 7 % 3 << std::endl;
	std::cout << "7 + 3 * 5 = " << 7 + 3 * 5 << std::endl;
	std::cout << "(7 + 3) * 5 =  " << (7 + 3) * 5 << std::endl;
	return 0;
}