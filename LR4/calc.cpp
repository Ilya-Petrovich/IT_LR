#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int num1, num2,num3;
	cout << "Введите первое число:"; cin >> num1;
	cout << "Введите второе число:"; cin >> num2;
	cout << "Введите третье число:"; cin >> num3;
	if (!(num3>=0 && num1 >= 0 && num2 >= 0 && num1 > num2)){
		cout << "Invalid data"<<endl;
		return 0;
	}
	cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
	cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
	cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
	cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
	cout << (double)num1 << " / " << (double)num2 << " = " << (double)num1 / num2 << endl;
	cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;
	cout << num1 << " + " << num2 << " * " << num3 << " = " << num1 + num2 * num3 << endl;
	cout << "(" << num1 << " + " << num2 << ")" << " * " << num3 << " = " << (num1 + num2) * num3 << endl;
	return 0;
}
