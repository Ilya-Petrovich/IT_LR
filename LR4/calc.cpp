﻿#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");

	int num_1, num_2, num_3;

	cout << "Type the first number: ";
	cin >> num_1;

	cout << "Type the second number: ";
	cin >> num_2;

	cout << "Type the third number: ";
	cin >> num_3;

	if (num_2 > 0 && num_3 >= 0 && num_1 > num_2) {
		cout << num_1 << " + " << num_2 << " = " << num_1 + num_2 << endl;
		cout << num_1 << " - " << num_2 << " = " << num_1 - num_2 << endl;
		cout << num_1 << " * " << num_2 << " = " << num_1 * num_2 << endl;
		cout << num_1 << " / " << num_2 << " = " << num_1 / num_2 << endl;
		cout << float(num_1) << ".0 / " << float(num_2) << ".0 = " << float(num_1) / num_2 << endl;
		cout << num_1 << " % " << num_2 << " = " << num_1 % num_2 << endl;
		cout << num_1 << " + " << num_2 << " * " << num_3 << " = " << num_1 + num_2 * num_3 << endl;
		cout << "(" << num_1 << " + " << num_2 << ") * " << num_3 << " = " << (num_1 + num_2) * num_3 << endl;
	}
	else {
		cout << "Invalid data" << endl;
	}
}