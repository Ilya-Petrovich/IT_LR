#include <iostream>
int main() {
	int num_1 = 0, num_2 = 0;

	std::cout << "Type the first number: ";
	std::cin >> num_1;
	std::cout << "Type the second nunber: ";
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
		std::cout << "Invalid data" << endl;
	}
	return 0;
}