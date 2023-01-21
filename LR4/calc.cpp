#include <iostream>

int main()
{
	int number_1, number_2, number_3;
	std::cout << "Input your first number: ";
	std::cin >> number_1;
	std::cout << "Input your second number: ";
	std::cin >> number_2;
	std::cout << "Input your third number: ";
	std::cin >> number_3;
	if (number_1 >= 0 && number_2 > 0 && number_3 > 0 && number_1 > number_2)
	{
		std::cout << number_1 << " + " << number_2 << " = " << number_1 + number_2 << std::endl;
		std::cout << number_1 << " - " << number_2 << " = " << number_1 - number_2 << std::endl;
		std::cout << number_1 << " * " << number_2 << " = " << number_1 * number_2 << std::endl;
		std::cout << number_1 << " / " << number_2 << " = " << number_1 / number_2 << std::endl;
		std::cout << number_1 << ".0 / " << number_2 << ".0 = " << (double) number_1 / (double) number_2 << std::endl;
		std::cout << number_1 << " % " << number_2 << " = " << number_1 % number_2 << std::endl;
		std::cout << number_1 << " + " << number_2 << " * " << number_3 << " = " << number_1 + number_2 * number_3 << std::endl;
		std::cout << "(" << number_1 << " + " << number_2 << ")" << " * " << number_3 << " = " << (number_1 + number_2) * number_3 << std::endl;
	}
	else
	{
		std::cout << "\nInvalid data";
	}
	return 0;
}
