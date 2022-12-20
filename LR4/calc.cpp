#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int num1, num2, num3;
	cout << "Type the first number: ";
	cin >> num1;
	cout << "Type the second number: ";
	cin >> num2;
	cout << "Type the third number: ";
	cin >> num3;
	if ((num1 > num2) and (num1 >= 0) and (num2 > 0) and (num3 >= 0)) {
		std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
		std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
		std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
		std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
		std::cout << num1 << ".0" << " / " << num2 << ".0" << " = " << (float)num1 / (float)num2 << std::endl;
		std::cout << num1 << " % " << num2 << " = " << num1 % num2 << std::endl;
		std::cout << num1 << " + " << num2 << " * " << num3 << " = " << num1 + num2 * num3 << std::endl;
		std::cout << "(" << num1 << " + " << num2 << ")" << " * " << num3 << " = " << (num1 + num2) * num3 << std::endl;
	}
	else {
		std::cout << "Invalid data" << std::endl;
	}
	return 0;
}