#include <iostream>
using namespace std;
int main()
{
	int num_1, num_2, num_3;
	num_1 = 7;
	num_2 = 3;
	cout << "Input the first number: ";
	cin >> num_1;
	cout << "Input the second number: ";
	cin >> num_2;
	cout << "Input the third number: ";
	cin >> num_3;
	if (num_1 > num_2 && num_1 >= 0 && num_2 >= 0 && num_3 >= 0 && num_2 != 0)
	{
		cout << num_1 << " + " << num_2 << " = " << num_1 + num_2 << endl;
		cout << num_1 << " - " << num_2 << " = " << num_1 - num_2 << endl;
		cout << num_1 << " * " << num_2 << " = " << num_1 * num_2 << endl;
		cout << num_1 << " / " << num_2 << " = " << num_1 / num_2 << endl;
		cout << num_1 << ".0 / " << num_2 << ".0 = " << (float)num_1 / (float)num_2 << endl;
		cout << num_1 << " % " << num_2 << " = " << num_1 % num_2 << endl;
		cout << num_1 << " + " << num_2 << " * " << num_3 << " = "  << num_1 + num_2 * num_3 << endl;
		cout << "(" << num_1 << " + " << num_2 << ") * " << num_3 << " = " << (num_1 + num_2) * num_3 << endl;
	}
	else
	{
		cout << "Invalid data" << endl;
	}
	return 0;
}