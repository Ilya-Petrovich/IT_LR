#include <iostream>

int main()
{
	int num_1, num_2, num_3;

	std::cout << "¬ведите первое число: ";
	std::cin >> num_1;

	std::cout << "¬ведите второе число: ";
	std::cin >> num_2;

	std::cout << "¬ведите второе число: ";
	std::cin >> num_3;

	if (num_1 < num_2 || num_1 < 0 || num_2 < 0 || num_3 < 0) {
		std::cout << "Invalid data" << std::endl;
		exit(1);
	}

	std::cout << num_1 << " + " << num_2 << " = " << num_1 + num_2 << std::endl;
	std::cout << num_1 << " - " << num_2 << " = " << num_1 - num_2 << std::endl;
	std::cout << num_1 << " * " << num_2 << " = " << num_1 * num_2 << std::endl;
	std::cout << num_1 << " / " << num_2 << " = " << num_1 / num_2 << std::endl;
	std::cout << static_cast<double>(num_1) << " / " << static_cast<double>(num_2) << " = " << static_cast<double>(num_1) / static_cast<double>(num_2) << std::endl;
	std::cout << num_1 << " % " << num_2 << " = " << num_1 % num_2 << std::endl;
	std::cout << num_1 << " + " << num_2 << " * " << num_3 << " = " << num_1 - num_2 * num_3 << std::endl;
	std::cout << "(" << num_1 << " + " << num_2 << ") * " << num_3 << " = " << num_1 - num_2 * num_3 << std::endl;

	return 0;
}