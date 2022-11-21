#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n1, n2, n3;
	cout << "1 chislo: ";
	cin >> n1;
	cout << "2 chislo: ";
	cin >> n2;
	cout << "3 chislo: ";
	cin >> n3;
	if ((n1 < n2) or (n1 < 0) or (n2 < 0) or (n3 < 0)) {
		cout << "Invalid data";
	}
	else
	{
	cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
	cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
	cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
	cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
	cout << float(n1) << " / " << float(n2) << " = " << float(n1) / float(n2) << endl;
	cout << n1 << " % " << n2 << " = " << n1 % n2 << endl;
	cout << n1 << " + " << n2 << " * " << n3 << " = " << n1 + n2 * n3 << endl;
	cout << "(" << n1 << " + " << n2 << ") * " << n3 << " = " << (n1 + n2) * n3 << endl;
	}
	return 0;
}
