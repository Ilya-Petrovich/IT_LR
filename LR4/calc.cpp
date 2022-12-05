#include <iostream>
using namespace std;

void main()
{
	int a, b, c;
	cout << "Type the first number : "; cin >> a;
	cout << "Type the second number : "; cin >> b; 
	cout << "Type the third number : "; cin >> c;
	if ((a <= b) or (b <= 0) or (c < 0)) { cout << "Invalid data"; return; }
	cout << a << " + " << b << " = " << a + b << endl;
	cout << a << " - " << b << " = " << a - b << endl;
	cout << a << " * " << b << " = " << a * b << endl;
	cout << a << " / " << b << " = " << a / b << endl;
	float d = a; float e = b;
	cout << d << ".0 / " << e << ".0 = " << d / e << endl;
	cout << a << " % " << b << " = " << a % b << endl;
	cout << a << " + " << b << " * " << c << " = " << a + b * c << endl;
	cout << "(" << a << " + " << b << ") * " << c << " = " << (a + b) * c << endl;
}