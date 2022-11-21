#include <iostream>
int main() {
	int num_1 = 0, num_2 = 0;
	setlocale(LC_ALL, "RUS");

	std::cout << "¬ведите первое число: ";
	std::cin >> num_1;
	std::cout << "¬ведите второе число: ";
	std::cin >> num_2;
	if (num_1 >= 0 && num_2 > 0 && num_1 >= num_2) {
		std::cout << num_1 << " + " << num_2 << " = " << num_1 + num_2 << std::endl;
		std::cout << num_1 << " - " << num_2 << " = " << num_1 - num_2 << std::endl;
		std::cout << num_1 << " * " << num_2 << " = " << num_1 * num_2 << std::endl;
		std::cout << num_1 << " / " << num_2 << " = " << num_1 / num_2 << std::endl;
		std::cout << num_1 << ".0" << " / " << num_2 << ".0" << " = " << double(num_1) / num_2 << std::endl;
		std::cout << num_1 << " % " << num_2 << " = " << num_1 % num_2 << std::endl;
		std::cout << num_1 << " + " << num_2 << " * 5" << " = " << num_1 + num_2 * 5 << std::endl;
		std::cout << "(" << num_1 << " + " << num_2 << ")" << " * 5" << " = " << (num_1 + num_2) * 5 << std::endl;
	}
	else {
		std::cout << "Invalid data";
	}
	return 0;
}