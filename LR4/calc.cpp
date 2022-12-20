#include <iostream>
using namespace std;
int main()
{
	int num_1, num_2, num_3;
	std::cout << "Type the first number: "; 
	std::cin >> num_1;
	std::cout << "Type the second number: "; 
	std::cin >> num_2;
	std::cout << "Type the third number: "; 
	std::cin >> num_3;
	if (num_1 > num_2 and num_1 >= 0 and num_2 > 0 and num_3 >= 0) {
		cout << num_1 << " + " << num_2 << " = " << num_1 + num_2 << std::endl;
		cout << num_1 << " - " << num_2 << " = " << num_1 - num_2 << std::endl;
		cout << num_1 << " * " << num_2 << " = " << num_1 * num_2 << std::endl;
		cout << num_1 << " / " << num_2 << " = " << num_1 / num_2 << std::endl;
		cout << num_1 << ".0" << " / " << num_2 << ".0" << " = " << num_1 * 1.0 / num_2 << std::endl;
		cout << num_1 << " % " << num_2 << " = " << num_1 % num_2 << std::endl;
		cout << num_1 << " + " << num_2 << " * " << num_3 << " = " << num_1 + num_2 * num_3 << std::endl;
		cout << "(" << num_1 << " + " << num_2 << ")" << " * " << num_3 << " = " << (num_1 + num_2) * num_3 << std::endl;
	}
	else {
		cout << "Invalid data" << std::endl;
	}
	return 0;
}