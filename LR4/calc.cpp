
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "¬ведите первое число:= ";
	cin >> a;
	cout << "¬ведите второе число:=  ";
	cin >> b;
	cout << "¬ведите третье число:= ";
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
