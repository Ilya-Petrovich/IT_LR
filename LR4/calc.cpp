#include <iostream>
#include<clocale>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int num_1, num_2, num_3;

	cout << "������� ������ �����: ";
	cin >> num_1;
	cout << "������� ������ �����: ";
	cin >> num_2;
	cout << "������� ������ �����: ";
	cin >> num_3;

	if (num_1 > num_2)
	{
		cout << num_1 << " + " << num_2 << " = " << num_1 + num_2 << endl;
		cout << num_1 << " - " << num_2 << " = " << num_1 - num_2 << endl;
		cout << num_1 << " * " << num_2 << " = " << num_1 * num_2 << endl;
		cout << num_1 << " / " << num_2 << " = " << num_1 / num_2 << endl;
		cout << (double) num_1 << ".0" << " / " << (double) num_2 << ".0" << " = " << (double)num_1 / (double)num_2 << endl;
		cout << num_1 << " % " << num_2 << " = " << num_1 % num_2 << endl;
		cout << num_1 << " + " << num_2 << " * "<<num_3<< " = " << num_1 + num_2 *num_3<< endl;
		cout <<"(" << num_1<< " + " << num_2<<")" << " * " << num_3 << " = " << (num_1 + num_2) * num_3 << endl;

	}
	else
	{
		cout << "Invalid data" << endl;
	}
}