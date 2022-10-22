#include<iostream>

int main() {
	int a, b, c;

	setlocale(LC_ALL, "Rus");

	std::cout << "Введите первое число: "; std::cin >> a;

	std::cout << "Введите второе число: "; std::cin >> b;

	std::cout << "Введите третье число: "; std::cin >> c;

	if ((a < 0) || (b < 0) || (c < 0) || (a < b) || (b == 0))
	{
		std::cout << "Invalid data!" << std::endl;
		return 0;
	}

	std::cout << a << " + " << b << " = " << a + b << std::endl;

	std::cout << a << " - " << b << " = " << a - b << std::endl;

	std::cout << a << " * " << b << " = " << a * b << std::endl;

	std::cout << a << " / " << b << " = " << a / b << std::endl;

	std::cout << (float)a << " / " << (float)b << " = " << (float)a / (float)b << std::endl;

	std::cout << a << " % " << b << " = " << a % b << std::endl;

	std::cout << a << " + " << b << " * " << c << " = " << a + b * c << std::endl;

	std::cout << "(" << a << " + " << b << ") * " << c << " = " << (a + b) * c << std::endl;
}