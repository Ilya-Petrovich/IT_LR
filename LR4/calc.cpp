#include <iostream>

int main()
{
	int num1, num2, num3;
	setlocale(LC_ALL, "russian");
	std::cout << "Type the first number: ";
	std::cin >> num1;
	std::cout << "Type the second number: ";
	std::cin >> num2;
	std::cout << "Type the third number: ";
	std::cin >> num3;
	if (num1 > num2&& num1 > 0 && num2 > 0 && num3 > 0) {
		std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
		std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
		std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
		std::cout << (double)num1 << " / " << double(num2) << " = " << (float)num1 / num2 << std::endl;
		std::cout << num1 << " % " << num2 << " = " << num1 % num2 << std::endl;
		std::cout << num1 << " + " << num2 << " * " << num3 << " = " << num1 + num2 * num3 << std::endl;
		std::cout << "(" << num1 << " + " << num2 << ")" << " * " << num3 << " = " << (num1 + num2) * num3 << std::endl;
	}
	else {
		std::cout << "Invalid data" << std::endl;
	}
}

