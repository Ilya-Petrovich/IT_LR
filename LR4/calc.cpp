#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int num_1, num_2, num_3;
	cout << "������� ������ �����: "; cin >> num_1;
	cout << "������� ������ �����: "; cin >> num_2;
	cout << "������� ������ �����: "; cin >> num_3;
	float div = (float)num_1 / num_2;
	if ((num_1 >= 0) && (num_2 >= 0) && (num_3 >= 0) && (num_2 != 0) && (num_1 > num_2))
	{
		cout << num_1 << " + " << num_2 << " = " << num_1 + num_2 << endl;
		cout << num_1 << " - " << num_2 << " = " << num_1 - num_2 << endl;
		cout << num_1 << " * " << num_2 << " = " << num_1 * num_2 << endl;
		cout << num_1 << " / " << num_2 << " = " << int(num_1 / num_2) << endl;
		cout << setprecision(1) << fixed << (float)num_1 << " / " <<(float) num_2<<" = ";
		cout << setprecision(5)<< fixed << div << endl;
		cout << setprecision(0) << fixed;
		cout << num_1 << " % " << num_2 << " = " << num_1 % num_2 << endl;
		cout << num_1 << " + " << num_2 << " * " << num_3 << " = " << num_1 + (num_2 * num_3) << endl;
		cout << "(" << num_1 << " + " << num_2 << ")" << " * " << num_3 << " = " << (num_1 + num_2) * num_3 << endl;
	}
	else {
		cout << "Invalid data";
	}
	return 0;
}






	