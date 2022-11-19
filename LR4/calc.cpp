#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int num_1, num_2, num_3;
	cout << "¬ведите первое значение: "; cin >> num_1;
	cout << "¬ведите второе значение: "; cin >> num_2;
	cout << "¬ведите третье значение: "; cin >> num_3;
	if (num_1 >= 0 && num_2 >= 0 and num_3 >= 0 && num_1 > num_2) {
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