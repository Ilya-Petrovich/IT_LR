#include<iostream>

using namespace std;

int main()
{
	int a, b, c;
	cout << "Type the first number: "; cin >> a;
	cout << "Type the second number: "; cin >> b;
	cout << "Type the third numper "; cin >> c;

	cout << a << " + " << b << " = " << a + b << endl;
	cout << a << " - " << b << " = " << a - b << endl;
	cout << a << " * " << b << " = " << a * b << endl;
	cout << a << " / " << b << " = " << a / b << endl;
	cout << a << ".0" << " / " << b << ".0" << " = " << (float(a) /float(b)) << endl;
	cout << a << " % " << b << " = " << a % b << endl;
	cout << a << " + " << b << " * " << c << " = " << a + b * c << endl;
	cout << "(" << a << " + " << b << ")" << " * " << c << " = " << (a + b) * c << endl;
}