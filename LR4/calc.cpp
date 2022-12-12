#include <iostream>;
int main() {
	using namespace std;
	int a, b, c;

	cout << "Type the first number: "; cin >> a;
	cout << "Type the second number: "; cin >> b;
	cout << "Type the third number: "; cin >> c;

	if (a < b or a < 0 or b <= 0 or c < 0) {
		cout << "Invalid data";
	}
	else {
		cout << a << " + " << b << " = " << a + b << endl;
		cout << a << " - " << b << " = " << a - b << endl;
		cout << a << " * " << b << " = " << a * b << endl;
		cout << a << " / " << b << " = " << a / b << endl;
		cout << a << ".0" << " / " << b << ".0" << " = " << (float)a / b << endl;
		cout << a << " % " << b << " = " << a % b << endl;
		cout << a << " + " << b << " * " << c << " = " << a + b * c << endl;
		cout << "(" << a << " + " << b << ")" << " * " << c << " = " << (a + b) * c << endl;
	}

}