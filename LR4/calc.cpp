#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "First number: ";
    cin >> num1;

    cout << "Second number: ";
    cin >> num2;

    cout << "Third number: ";
    cin >> num3;

    if (num1 > 0 && num2 > 0 && num3 > 0 && num1 > num2) {
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        cout << num1 << ".0 / " << num2 << ".0 = " << (float)num1 / (float)num2 << endl;
        cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;
        cout << num1 << " + " << num2 << " * " << num3 << " = " << num1 + num2 * num3 << endl;
        cout << "(" << num1 << " + " << num2 << ")" << " * " << num3 << " = " << (num1 + num2) * num3 << endl;
    }
    else {
        cout << "Invalid data" << endl;
    }


    return 0;
}