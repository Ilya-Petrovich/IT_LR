include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int num_1, num_2, num_3;
	cout << "������� ������ �����: ";
	cin >> num_1;
	cout << "������� ������ �����: ";
	cin >> num_2;
	cout << "������� ������ �����: ";
	cin >> num_3;
	if (num_1 > num_2 && num_1 >= 0 && num_2 >= 0 && num_3 >= 0) {
		cout << num_1 << " + " << num_2 << " = " << num_1 + num_2 << endl;
		cout << num_1 << " - " << num_2 << " = " << num_1 - num_2 << endl;
		cout << num_1 << " * " << num_2 << " = " << num_1 * num_2 << endl;
		cout << num_1 << " / " << num_2 << " = " << num_1 / num_2 << endl;
		cout << num_1 << ".0" << " / " << num_2 << ".0" << " = " << float(num_1) / float(num_2) << endl;
		cout << num_1 << " % " << num_2 << " = " << num_1 % num_2 << endl;
		cout << num_1 << " + " << num_2 << " * " << num_3 << " = " << num_1 + num_2 * num_3 << endl;
		cout << "(" << num_1 << " + " << num_2 << ")" << " * " << num_3 << " = " << (num_1 + num_2) * num_3 << endl;
	}
	else {
		cout << "Invalid data" << endl;
	}
	system("pause");
	return 0;
}