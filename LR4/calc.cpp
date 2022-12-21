#include <iostream>

int main() {
	int num_1, num_2, num_3;
	std::cout << "7 + 3 = " << 7 + 3 << std::endl;
	std::cout << "Type the first number: "; std::cin >> num_1;
	std::cout << "Type the second number: "; std::cin >> num_2;
	std::cout << "Type the third number: "; std::cin >> num_3;
	if ((num_1 < 0) or (num_2 <=0) or (num_3 < 0) or (num_1 < num_2)){
		std::cout << "Invalid data" << std::endl;
		return 1;
	}
	std::cout << num_1 << " + " << num_2 << " = " << num_1 + num_2 << std::endl;
	std::cout << num_1 << " - " << num_2 << " = " << num_1 - num_2 << std::endl;
	std::cout << num_1 << " * " << num_2 << " = " << num_1 * num_2 << std::endl;
	std::cout << num_1 << " / " << num_2 << " = " << num_1 / num_2 << std::endl;
	std::cout << num_1 << ".0 / " << num_2 << ".0 = " << double(num_1) / num_2 << std::endl;
	std::cout << num_1 << " % " << num_2 << " = " << num_1 % num_2 << std::endl;
	std::cout << num_1 << " + " << num_2 << " * " << num_3 << " = " << num_1 + num_2 * num_3 << std::endl;
	std::cout << "(" << num_1 << " + " << num_2 << ") * " << num_3 << " = " << (num_1 + num_2) * num_3 << std::endl;
	return 0;
}