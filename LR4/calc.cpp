#include<iostream>
#include<iomanip>

int main()
{
	int n1, n2, n3;
	std::cout << "Type the first number: "; std::cin >> n1;
	std::cout << "Type the second number: "; std::cin >> n2;
	std::cout << "Type the third number: "; std::cin >> n3;
	
	if ((n1 > 0 && n2 > 0 && n3 > 0) && (n1 > n2) && (n2 != 0)) {
		std::cout << n1 << " + " << n3 << " = " << n1 + n3 << "\n";
		std::cout << n1 << " - " << n3 << " = " << n1 - n3 << "\n";
		std::cout << n1 << " * " << n3 << " = " << n1 * n3 << "\n";
		std::cout << n1 << " / " << n3 << " = " << n1 / n3 << "\n";
		std::cout << std::fixed << std::setprecision(1) << n1 * 1. << " / " << n3 * 1. << " = " << std::fixed << std::setprecision(5) << n1 * 1. / n3 << "\n";
		std::cout << n1 << " % " << n3 << " = " << n1 % n3 << "\n";
		std::cout << n1 << " + " << n3 << " * " << n2 << " = " << n1 + n3 * n2 << "\n";
		std::cout << "(" << n1 << " + " << n3 << ")" << " * " << n2 << " = " << (n1 + n3) * n2 << "\n";
	}
	else std::cout << "Invalid data";
	return 0;
}
