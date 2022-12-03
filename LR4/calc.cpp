#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Type the first number: "; cin >> num1; cout << endl;
    cout << "Type the second number: "; cin >> num2; cout << endl;
    cout << "Type the third number: "; cin >> num3; cout << endl;

    if ((num1 > num2) && (num2 > 0) && (num3 > 0)) {
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        cout << num1 << ".0" << " / " << num2 << ".0" << " = " << (num1 + 0.0) / num2 << endl;
        cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;
        cout << num1 << " + " << num2 << " * " << num3 <<  " = " << num1 + num2 * num3 << endl;
        cout << "(" << num1 << " + " << num2 << ")" << " * " << num3 << " = " << (num1 + num2) * num3 << endl;
   } else {
        cout << "Invalid data" << endl;
    }
}