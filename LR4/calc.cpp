#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, y, z;
	cout << "������� ������ �����: ";
	cin >> x;
	cout << "������� ������ �����: ";
	cin >> y;
	cout << "������� ������ �����: ";
	cin >> z;
	if (x > y) {
		if ((x>=0) and (y>=0) and (z >= 0)) {
			cout << x << " + " << y << " = " << x+y << endl;
			cout << x << " - " << y << " = " << x-y << endl;
			cout << x << " * " << y << " = " << x*y << endl;
			cout << x << " / " << y << " = " << x/y << endl;
			cout << x << ".0" << " / " << y << ".0" << " = " << double(x)/y << endl;
			cout << x << " % " << y << " = " << x%y << endl;
			cout << x << " + " << y << " * " << z << " = " << x+y*z << endl;
			cout << "(" << x << " + " << y << ")" << " * " << z << " = " << (x+y) *z << endl;
			
		} else {
			cout << "Invalid data" << endl;
		}
	} else {
		cout << "Invalid data" << endl;
	}
}
