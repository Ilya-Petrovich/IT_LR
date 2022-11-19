#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int num1, num2, num3;
	setlocale(LC_ALL, "russian");
	cout << "¬ведите первое число : "; cin >> num1;
	cout << "¬ведите второе число : "; cin >> num2;
	cout << "¬ведите третье число : "; cin >> num3;
	if (!(num1 > num2 && num2 != 0 && num1 * num2 * num3 > 0)) {
		cout << "Invalid data" << endl;
		return 0;
	}
	cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
	cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
	cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
	cout << num1 << ".0" << " / " << num2 << ".0" << " = " << (float)num1 / num2 << endl;
	cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;
	cout << num1 << " + " << num2 << " * " << num3 << " = " << num1 + num2 * num3 << endl;
	cout << "(" << num1 << " + " << num2 << ")" << " * " << num3 << " = " << (num1 + num2) * num3 << endl;
	return 0;
}