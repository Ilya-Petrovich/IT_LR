#include <iostream>
int main() {
	int num_1, num_2, num_3;
	std::cout << "Type the first number:"; std::cin >> num_1;
	std::cout << "Type the second number: "; std::cin >> num_2;
	std::cout << "Type the tnird number: "; std::cin >> num_3;
	float div = (float)num_1 / num_2;
	if ((num_1 >= 0) && (num_2 >= 0) && (num_3 >= 0) && (num_2 != 0) && (num_1 > num_2))
	{
		std::cout << num_1 << " + " << num_2 << " = " << num_1 + num_2 << '\n';
		std::cout << num_1 << " - " << num_2 << " = " << num_1 - num_2 << '\n';
		std::cout << num_1 << " * " << num_2 << " = " << num_1 * num_2 << '\n';
		std::cout << num_1 << " / " << num_2 << " = " << num_1 / num_2 << '\n';
		std::cout << num_1 << ".0" << " / " << num_2 << ".0 " << " = " << (float)num_1 / num_2 << '\n';
		std::cout << num_1 << " % " << num_2 << " = " << num_1 % num_2 << '\n';
		std::cout << num_1 << " + " << num_2 << " * " << num_3 << " = " << num_1 + (num_2 * num_3) << '\n';
		std::cout << "(" << num_1 << " + " << num_2 << ")" << " * " << num_3 << " = " << (num_1 + num_2) * num_3 << '\n';
	}
	else {
		std::cout << "Invalid data";
	}
	return 0;
}





	