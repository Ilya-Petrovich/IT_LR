#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Type the first number: "; cin >> a;
	cout << "Type the second number: "; cin >> b;
	cout << "Type the third number: "; cin >> c;
	if (a >= 0 and c >= 0 and b > 0 and a > b) {
		cout << a << " + " << b << " = " << a + b << '\n';
		cout << a << " - " << b << " = " << a - b << '\n';
		cout << a << " * " << b << " = " << a * b << '\n';
		cout << a << " / " << b << " = " << a / b << '\n';
		cout << a << " / " << b << " = " << (float)a / (float)b << '\n';
		cout << a << " % " << b << " = " << a % b << '\n';
		cout << a << " + " << b << " * " << c << " = " << a + b * c << '\n';
		cout << "(" << a << " + " << b << ")" << " * " << c << " = " << (a + b) * c << '\n';
	}
	else {
		cout << "Invalid data";
	}
	return 0;
}