#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int num_1, num_2, num_3;
	cout << "enter first number:" ;
	cin >> num_1;
	cout << "enter second number:";
	cin >> num_2;
	cout << "enter third number:";
	cin >> num_3;

	if (num_1 >= num_2||num_3>0) {
		cout << num_1 << "+" << num_2 << "=" << num_1 + num_2 << '\n';
		cout << num_1 << "-" << num_2 << "=" << num_1 - num_2 << '\n';
		cout << num_1 << "*" << num_2 << "=" << num_1 * num_2 << '\n';
		cout << num_1 << "/" << num_2 << "=" << num_1 / num_2 << '\n';
		cout << num_1<<".0"<< "/" << num_2 <<".0"<< "=" << num_1 * 1.0 / num_2 * 1.0 << '\n';
		cout << num_1 << "%" << num_2 << "=" << num_1 % num_2 << '\n';
		cout << num_1 << "+" << num_2 <<"*"<<num_3 << "=" << num_1 + num_2 * num_3 << '\n';
		cout <<"("<< num_1 << "+" << num_2<<")"<< "*" << num_3 << "=" << (num_1 + num_2) * num_3 << '\n';
	}
	else {
		cout << "Invalid data"<<'\n';
	}
	return 0;
}