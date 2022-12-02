#include <iostream>

int main() 
{
	int n1, n2, n3;
	
	std::cout << "¬ведите первое число:  ";

	std::cin >> n1;

	std::cout << "¬ведите второе число: ";
	std::cin >> n2;

	std::cout << "¬ведите третье число: ";
	std::cin >> n3;


	if ((n1 >= 0) and (n2 > 0) and (n1 > n2) and (n3 >= 0)) {
		

		std::cout << n1 << " + " << n2 << " = " << n1 + n2 << std::endl;
		std::cout << n1 << " - " << n2 << " = " << n1 - n2 << std::endl;
		std::cout << n1 << " * " << n2 << " = " << n1 * n2 << std::endl;
		std::cout << n1 << " / " << n2 << " = " << n1 / n2 << std::endl;
		std::cout << float(n1) << " / " << float(n2) << " = " << float(n1) / float(n2) << std::endl;
		std::cout << n1 << " % " << n2 << " = " << n1 % n2 << std::endl;
		std::cout << n1 << " + " << n2 << " * " << n3 << " = " << n1 + n2 * n3 << std::endl;
		std::cout << "(" << n1 << " + " << n2 << ") * " << n3 << " = " << (n1 + n2) * n3 << std::endl;
	}
	else {
		std::cout << "Invalid data" << std::endl;
	}

	return 0;
}
