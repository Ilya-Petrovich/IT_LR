#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float num_1, num_2, num_3;
	cout << "¬ведите первое  число:";
	cin >> num_1;
	cout << "¬ведите второе число:";
	cin >> num_2;
	cout << "¬ведите третье число:";
	cin >> num_3;
	if ((num_1 > num_2) and (num_1 > 0) and (num_2 > 0) and (num_3 > 0)) {
		cout << num_1 << " + " << num_2 << " = " << num_1 + num_2 << endl;
		cout << num_1 << " - " << num_2 << " = " << num_1 - num_2 << endl;
		cout << num_1 << " * " << num_2 << " = " << num_1 * num_2 << endl;
		cout << num_1 << " / " << num_2 << " = " << int(num_1 / num_2) << endl;
		cout << num_1 << " / " << num_2 << " = " << num_1 / num_2 << endl;
		cout << num_1 << " % " << num_2 << " = " << int(num_1) % int(num_2) << endl;
		cout << num_1 << " + " << num_2 << " * " << num_3 << " = " << num_1 + num_2 * num_3 << endl;
		cout << "(" << num_1 << " + " << num_2 << ")" << " * " << num_3 << " = " << (num_1 + num_2) * num_3 << endl;
	}
	else {
		cout << "INvalid data";
	}
	return 0;
}