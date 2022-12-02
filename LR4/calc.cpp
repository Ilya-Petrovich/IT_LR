#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int num_1, num_2, num_3;
	cout << "¬ведите первое число: "; cin >> num_1;
	cout << "¬ведите второе число: "; cin >> num_2;
	cout << "¬ведите третье число: "; cin >> num_3;
	if (num_1 > num_2 and num_1 >= 0 and num_2 >= 0 and num_3 >= 0) {
		cout << num_1 << " + " << num_2 << " = " << num_1 + num_2 << '\n';
		cout << num_1 << " - " << num_2 << " = " << num_1 - num_2 << '\n';
		cout << num_1 << " * " << num_2 << " = " << num_1 * num_2 << '\n';
		cout << num_1 << " / " << num_2 << " = " << num_1 / num_2 << '\n';
		cout << num_1 << ".0" << " / " << num_2 << ".0" << " = " << num_1 * 1.0 / num_2 * 1.0 << '\n';
		cout << num_1 << " % " << num_2 << " = " << num_1 % num_2 << '\n';
		cout << num_1 << " + " << num_2 << " * " << num_3 << " = " << num_1 + num_2 * num_3 << '\n';
		cout << "(" << num_1 << " + " << num_2 << ")" << " * " << num_3 << " = " << (num_1 + num_2) * num_3 << '\n';
	} else {
		cout << "Invalid data" << '\n';
	}
	return 0;
}