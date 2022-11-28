#include <iostream>
#include <iomanip>
using namespace std;
int main1() {
	setlocale(LC_ALL, "Russian");
	int num_1, num_2, num_3;
	cout << "¬ведите первое число: "; cin >> num_1;
	cout << "¬ведите второе число: "; cin >> num_2;
	cout << "¬ведите третье число: "; cin >> num_3;
	float div = (float)num_1 / num_2;
	if ((num_1 >= 0) && (num_2 >= 0) && (num_3 >= 0) && (num_2 != 0) && (num_1 > num_2))
	{
		cout << num_1 << " + " << num_2 << " = " << num_1 + num_2 << endl;
		cout << num_1 << " - " << num_2 << " = " << num_1 - num_2 << endl;
		cout << num_1 << " * " << num_2 << " = " << num_1 * num_2 << endl;
		cout << num_1 << " / " << num_2 << " = " << num_1 / num_2 << endl;
		cout << num_1 << ".0" << " / " << num_2 << ".0 " << " = " << (float)num_1 / num_2 << endl;
		cout << num_1 << " % " << num_2 << " = " << num_1 % num_2 << endl;
		cout << num_1 << " + " << num_2 << " * " << num_3 << " = " << num_1 + (num_2 * num_3) << endl;
		cout << "(" << num_1 << " + " << num_2 << ")" << " * " << num_3 << " = " << (num_1 + num_2) * num_3 << endl;
	}
	else {
		cout << "Invalid data";
	}
	return 0;
}






	