#include <iostream>//N1.1
#include <cmath>
using namespace std;
int main() {
	int num1, num2, num3;
	std::cout << "enter  1st number ";
	std::cin >> num1;
	std::cout << "enter  2nd number ";
	std::cin >> num2;
	std::cout << "enter  3rd number ";
	std::cin >> num3;
	if (num1 > num2) {
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