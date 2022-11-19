#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x, y, z;
	cout << "Type the first number: ";
	cin >> x;
	cout << "Type the second number: ";
	cin >> y;
	cout << "Type the third number: ";
	cin >> z;
	if (x > y) {
		if (x >= 0 && y > 0 && z >= 0) {
			cout << x << " + " << y << " = " << x + y << endl;
			cout << x << " - " << y << " = " << x - y << endl;
			cout << x << " * " << y << " = " << x * y << endl;
			cout << x << " / " << y << " = " << x / y << endl;
			cout << x * 1.0 << " / " << y << " = " << x * 1.0 / y << endl;
			cout << x << " % " << y << " = " << x % y << endl;
			cout << x << " + " << y << " * " << z <<" = " << x + y * z << endl;
			cout<<"("<< x << " + " << y << ") * " << z <<" = " << (x + y) * z << endl;
		}
		else {
			cout << "Invalid data";
		}


	}
	else {
		cout << "Invalid data";
	}
	system("pause");
}