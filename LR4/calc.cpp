#include <iostream>

int main()
{
	int num_1, num_2, num_3;
	setlocale(LC_ALL, "rus");
	std::cout << "Введите первое число:";
	std::cin >> num_1;
	std::cout << "Введите второе число:";
	std::cin >> num_2;
	std::cout << "Введите третье число:";
	std::cin >> num_3;
	if (num_1 > num_2 && num_1 >= 0 && num_2 >= 0 && num_3 >= 0)
	{
		std::cout << num_1 << " + " << num_2 << " = " << num_1 + num_2 << std::endl;
		std::cout << num_1 << " - " << num_2 << " = " << num_1 - num_2 << std::endl;
		std::cout << num_1 << " * " << num_2 << " = " << num_1 * num_2 << std::endl;
		std::cout << num_1 << " / " << num_2 << " = " << num_1 / num_2 << std::endl;
		std::cout << num_1 << " .0 / " << num_2 << " .0 = " << float(num_1) / float(num_2) << std::endl;
		std::cout << num_1 << " % " << num_2 << " = " << num_1 % num_2 << std::endl;
		std::cout << num_1 << " + " << num_2 << " * 5 = " << num_1 + num_2 * 5 << std::endl;
		std::cout << "(" << num_1 << ") + (" << num_2 << ") * 5 = " << (num_1 + num_2) * 5 << std::endl;
	}
	else
	{
		std::cout << "Invalid data" << std::endl;
	}
	return 0;
}