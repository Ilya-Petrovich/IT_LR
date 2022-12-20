#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	setlocale(LC_ALL, "Rus");
	cout << "¬ведите первое число:"; cin >> a;
	cout << "¬ведите второе число:"; cin >> b;
	cout << "¬ведите третье число:"; cin >> c;
	if (a >= 0 and c >= 0 and b > 0 and a > b) {
		cout << a << "+" << b << "=" << a + b << '\n';
		cout << a << "-" << b << "=" << a - b << '\n';
		cout << a << "*" << b << "=" << a * b << '\n';
		cout << a << "/" << b << "=" << a / b << '\n';
		cout << a << "/" << b << "=" << (float)a / b << '\n';
		cout << a << "%" << b << "=" << a % b << '\n';
		cout << a << "+" << b << "*" << c << "=" << a + b * c << '\n';
		cout << "(" << a << "+" << b << ")" << "*" << c << "=" << (a + b) * c << '\n';
		return 0;
	}
	else {
		cout << "invalid data";
	}
}