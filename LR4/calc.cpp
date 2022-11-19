#include <iostream>
#include <clocale>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int num_1, num_2, num_3;
	cout << "Введите первое число: "; cin >> num_1;
	cout << "Введите второе число: "; cin >> num_2;
	cout << "Введите третье число: "; cin >> num_3;
	if (num_1 > 0 && num_2 > 0 and num_3 > 0 && num_1 > num_2) {
		cout << num_1 << " + " << num_2 << " = " << num_1 + num_2 << endl;
		cout << num_1 << " - " << num_2 << " = " << num_1 - num_2 << endl;
		cout << num_1 << " * " << num_2 << " = " << num_1 * num_2 << endl;
		cout << num_1 << " / " << num_2 << " = " << num_1 / num_2 << endl;
		cout << (double) num_1 << ".0" << " / " << (double) num_2 << ".0" << " = " << (double)num_1 / num_2 << endl;
		cout << num_1 << " % " << num_2 << " = " << num_1 % num_2 << endl;
		cout << num_1 << " + " << num_2 << " * " << num_3 << " = " << num_1 + num_2 * num_3 << endl;
		cout << "(" << num_1 << " + " << num_2 << ")" << " * " << num_3 << " = " << (num_1 + num_2) * num_3 << endl;
	}
	else {
		cout << "Invalid data" << endl;
	}
	return 0;
}