#include <iostream>

using namespace std;
int main()
{
	int num1;
	int num2;
	int num3;

	cout << "Enter first number" << endl;
	cin >> num1;
	cout << "Enter second number" << endl;
	cin >> num2;
	cout << "Enter third number" << endl;
	cin >> num3;

	if (num1 > 0 && num2 > 0 && num3 > 0 && num1 > num2)
	{
		printf("%i + %i = ", num1, num2); 
		cout << num1 + num2 << endl;
		printf("%i - %i = ", num1, num2);
		cout << num1 - num2 << endl;
		printf("%i * %i = ", num1, num2);
		cout << num1 * num2 << endl;
		printf("%i / %i = ", num1, num2);
		cout << num1 / num2 << endl;
		printf("%f / %f = ", (float)num1, (float)num2);
		cout << (float)num1 / (float)num2 << endl;
		printf("%i %% %i = ", num1, num2);
		cout << num1 % num2 << endl;
		printf("%i + %i * %i = ", num1, num2, num3);
		cout << num1 + num2 * num3 << endl;
		printf("(%i + %i) * %i = ", num1, num2, num3);
		cout << (num1 + num2) * num3 << endl;
	}
	else
		cout << "Invalid data";

	return 0;
}