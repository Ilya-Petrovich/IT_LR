#include <iostream>

int main() 
{
	int n1, n2, n3;
	
	std::cout << "������� ������ �����:  ";

	std::cin >> n1;

	std::cout << "������� ������ �����: ";
	std::cin >> n2;

	std::cout << "������� ������ �����: ";
	std::cin >> n3;


	if ((n1 >= 0) and (n2 > 0) and (n1 > n2) and (n3 >= 0)) {
		

		cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
		cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
		cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
		cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
		cout << float(n1) << " / " << float(n2) << " = " << float(n1) / float(n2) << endl;
		cout << n1 << " % " << n2 << " = " << n1 % n2 << endl;
		cout << n1 << " + " << n2 << " * " << n3 << " = " << n1 + n2 * n3 << endl;
		cout << "(" << n1 << " + " << n2 << ") * " << n3 << " = " << (n1 + n2) * n3 << endl;
	}
	else {
		std::cout << "Invalid data" << std::endl;
	}

	return 0;
	}

}