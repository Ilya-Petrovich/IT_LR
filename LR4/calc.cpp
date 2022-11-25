#include <iostream>
using namespace std;
int main() {
	int num1, num2, num3;
	cout << "Vvedite pervoe chislo: "; cin >> num1;
	cout << "Vvedite vtoroe chislo: "; cin >> num2;
	cout << "Vvedite tretie chislo: "; cin >> num3;
	if (num1 > 0 && num2 > 0 && num3 > 0) {
		if (num1 > num2) {
			cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
			cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
			cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
			cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
			cout << num1 << ".0 / " << num2 << ".0 = " << (float)num1 * 1.0 / float(num2) << endl;
			cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;
			cout << num1 << " + " << num2 << " * " << num3 << " = " << num1 + num2 * num3 << endl;
			cout << "(" << num1 << " + " << num2 << ") " << " * " << num3 << " = " << (num1 + num2)* num3 << endl;
			return 0;
		}
		else {
			cout << "Invalid data" << endl;
			return 0;
		}
	}
	else {
		cout << "Invalid data" << endl;
		return 0;
	}

}