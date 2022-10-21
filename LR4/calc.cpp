#include<iostream>
using namespace std;
int main()
{
	int num_1, num_2, num_3;
	setlocale(LC_ALL, "rus");
	cout << "Введите первое число: ";
	cin >> num_1;
	cout << "Введите второе число: ";
	cin >> num_2;
	cout << "Введите третье число: ";
	cin >> num_3;
	if (num_1 > num_2 && num_1 >= 0 && num_2 >= 0 && num_3 >= 0)
	{
		cout << num_1 << " + " << num_2 << " = " << num_1 + num_2 << endl;
		cout << num_1 << " - " << num_2 << " = " << num_1 - num_2 << endl;
		cout << num_1 << " * " << num_2 << " = " << num_1 * num_2 << endl;
		cout << num_1 << " / " << num_2 << " = " << num_1 / num_2 << endl;
		cout << num_1 << " .0 / " << num_2 << " .0 = " << float(num_1) / float(num_2) << endl;
		cout << num_1 << " % " << num_2 << " = " << num_1 % num_2 << endl;
		cout << num_1 << " + " << num_2 << " * 5 = " << num_1 + num_2 * 5 << endl;
		cout << "(" << num_1 << ") + (" << num_2 << ") * 5 = " << (num_1 + num_2) * 5 << endl;
	}
	else
	{
		cout << "Invalid data";
	}
	return 0;
}