#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n1, n2, n3;
	cout << "Type the first number: ";
	cin >> n1;
	cout << "Type the second number: ";
	cin >> n2;
	cout << "Type the third number: ";
	cin >> n3;
	if ((n1 < n2) or (n1 <= 0) or (n2 < 0) or (n3 < 0)) {
		cout << "Invalid data" << endl;
	}
	else
	{
	cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
	cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
	cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
	cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
	cout << n1 << ".0 / " << float(n2) << ".0 = " << float(n1) / float(n2) << endl;
	cout << n1 << " % " << n2 << " = " << n1 % n2 << endl;
	cout << n1 << " + " << n2 << " * " << n3 << " = " << n1 + n2 * n3 << endl;
	cout << "(" << n1 << " + " << n2 << ") * " << n3 << " = " << (n1 + n2) * n3 << endl;
	}
	return 0;
}
