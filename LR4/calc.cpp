#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;
	cout << "Введите третье число: ";
	cin >> c;
	if (not(a < b || a < 0 || b < 0 || c < 0)) {
		cout << a << " + " << b << " = " << a + b << '\n';
		cout << a << " - " << b << " = " << a - b << '\n';
		cout << a << " * " << b << " = " << a * b << '\n';
		cout << a << " / " << b << " = " << a / b << '\n';
		cout << double(a) << ".0" << " / " << double(b) << ".0" << " = " <<(double) a / b << '\n';
		cout << a << " % " << b << " = " << a % b << '\n';
		cout << a << " + " << b << " * " << c << " = " << a + b * c << '\n';
		cout << '('<< a << " + " << b << ')' << " * " << c << " = " <<(a + b) * c << '\n';
	}
	else {
		cout << "Invalid data\n";
	}
	return 0;
}