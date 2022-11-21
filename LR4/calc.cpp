#include <iostream>
using namespace std;
int main() {
	setlocale(0, "rus");
	int a, b, c;
	cout << "Введите первое число: "; cin >> a;
	cout << "Введите второе число: "; cin >> b;
	cout << "Введите третье число: "; cin >> c;
	if (a >= 0 && b > 0 && c >= 0 && a > b) {
		cout << a << " + " << b << " = " << a + b << endl;
		cout << a << " - " << b << " = " << a - b << endl;
		cout << a << " * " << b << " = " << a * b << endl;
		cout << a << " / " << b << " = " << a / b << endl;
		cout << (float)a << ".0" << " / " << (float)b << ".0" << " = " << (float)a / (float)b << endl;
		cout << a << " % " << b << " = " << a % b << endl;
		cout << a << " + " << b << " * " << c << " = " << a + b * c << endl;
		cout << "(" << a << " + " << b << ")"<< " * "<< c << " = " << (a + b) * c << endl;
	}
	else {
		cout << "Invalid data" << endl;
	}
	return 0;
}