#include<iostream>
using namespace std;
int main()
{
	int num_1=7, num_2=3;
	cout << "7+3= " << num_1 + num_2 << endl;
	cout << "7 - 3 = " << num_1 - num_2 << endl;
	cout << "7 * 3 = " << num_1 * num_2 << endl;
	cout << "7 / 3 = " << num_1 / num_2 << endl;
	cout << "7.0 / 3.0 = " << (float)num_1 / (float)num_2 << endl;
	cout << "7 % 3 = " << num_1 % num_2 << endl;
	cout << "7 + 3 * 5 = " << num_1 + num_2 * 5 << endl;
	cout << "(7 + 3) * 5 = " << (num_1 + num_2) * 5 << endl;
	return 0;
}