#include<iostream>
using namespace std;

int main() {
	int a, b, c;

	setlocale(LC_ALL, "Rus");

	cout << "������� ������ �����: "; cin >> a;

	cout << "������� ������ �����: "; cin >> b;

	cout << "������� ������ �����: "; cin >> c;

	if ((a < 0) or (b < 0) or (c < 0)) 
	{
		cout << "Error!" << endl;
		return 0;
	}

	cout << a << " + " << b << " = " << a + b << endl;

	cout << a << " - " << b << " = " << a - b << endl;

	cout << a << " * " << b << " = " << a * b << endl;

	cout << a << " / " << b << " = " << a / b << endl;

	cout << (float)a << " / " << (float)b << " = " << (float)a / (float)b << endl;

	cout << a << " % " << b << " = " << a % b << endl;

	cout << a << " + " << b <<" * "<< c << " = " << a + b * c << endl;

	cout <<"(" << a << " + " << b << ") * " << c << " = " << (a + b) * c << endl;
}



