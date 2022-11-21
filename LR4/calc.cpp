#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	char opr;
	cout << "Type the first number: ";
	cin >> a;
	cout << "Type the second number: ";
	cin >> b;
	cout << "Type the third number: ";
	cin >> c;
	if ( (a>0 && b>0) && a > b && b!=0) {
	cout << a << '+' << b << "=" << a + b << endl;
	cout << a << '-' << b << "=" << a - b << endl;
	cout << a << '*' << b << "=" << a * b << endl;
	cout << a << '/' << b << "=" << a / b << endl;
	cout << a <<".0" << '/' << b <<".0" << "=" << float(a) / b * 1.0 << endl;
	cout << a << '%' << b << "=" << a % b << endl;
	cout << a << '+' << b << '*' << c << '=' << a + b * c << endl;
	cout << "(" << a << '+' << b <<")" << '*' << c << '=' << (a + b) * c << endl;
		}
		else {
		cout << "Invalid data";
		}
}