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
	if (n1 >= 0 and n2 > 0 and n3 >= 0 and n1 > n2)
	{
	cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
	cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
	cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
	cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
	cout << n1 << ".0 / " << n2 << ".0 = " << float(n1) / float(n2) << endl;
	cout << n1 << " % " << n2 << " = " << n1 % n2 << endl;
	cout << n1 << " + " << n2 << " * " << n3 << " = " << n1 + n2 * n3 << endl;
	cout << "(" << n1 << " + " << n2 << ") * " << n3 << " = " << (n1 + n2) * n3 << endl;
	}
	else{
		cout << "Invalid data" << endl;
	}
	return 0;
}
