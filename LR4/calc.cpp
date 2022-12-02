#include <iostream>

int main{
	int num_1, num_2, num_3;
	num_1 = 7;
	num_2 = 3;
	
	if (num_1 > num_2 && num_1 >= 0 && num_2 > 0 && num_3 >= 0) {
		std::cout << "Type the first number: ";

		std::cin >> num_1;

		std::cout << "Type the second number: ";
		std::cin >> num_2;

		std::cout << "Type the third number: ";
		std::cin >> num_3;

		std::cout << "7 + 3 = " << num_1 + num_2 << std::endl;

		std::cout << "7 - 3 = " << num_1 - num_2 << std::endl;

		std::cout << "7 * 3 = " << num_1 * num_2 << std::endl;

		std::cout << "7 / 3 = " << num_1 / num_2 << std::endl;

		std::cout << "7.0 + 3.0 = " << (float)num_1 / num_2 << std::endl;

		std::cout << "7 % 3 = " << num_1 % num_2 << std::endl;

		std::cout << "7 + 3 * 5 = " << num_1 + num_2 * num_3 << std::endl;

		std::cout << "(7 + 3) * 5 = " << (num_1 + num_2) * num_3 << std::endl;
	}
	else {
		std::cout << "Invalid data" << std::endl;
	}

	return 0;
	}

}