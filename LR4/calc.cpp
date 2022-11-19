#include<iostream>

int main() {
	int a, b, c;

	std::cout << "Type the first number: "; std::cin >> a;
    std::cout << "Type the second number: "; std::cin >> b;
	std::cout << "Type the third number: "; std::cin >> c;

	if ((a < 0) or (b < 0) or (c < 0) or (a < b)) {
		std::cout << "Invalid data";
		return 0;
	}

	std::cout << a << " + " << b << " = " << a + b << std::endl;
	std::cout << a << " - " << b << " = " << a - b << std::endl;
	std::cout << a << " * " << b << " = " << a * b << std::endl;
	std::cout << a << " / " << b << " = " << a / b << std::endl;
	std::cout << a << ".0 / " << b << ".0 = " << (float)a / (float)b << std::endl;
	std::cout << a << " % " << b << " = " << a % b << std::endl;
	std::cout << a << " + " << b <<" * "<< c << " = " << a + b * c << std::endl;
	std::cout <<"(" << a << " + " << b << ") * " << c << " = " << (a + b) * c;
	return 0;
}