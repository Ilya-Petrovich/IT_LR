#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RU_ru");
    

    int num1,num2,num3;

    cout << "Введите первое число: ";
    cin >> num1;

    cout << "Введите второе число: ";
    cin >> num2;

    cout << "Введите третье число: ";
    cin >> num3;

    if((num1 < 0 || num2 < 0 || num3 < 0) && num1 < num2){
        cout << "Invalid data" << endl;
        return -1;
    }
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    cout << num1 << " / " << num2 << " = " << (float)num1 / (float)num2 << endl;
    cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;
    cout << num1 << " + " << num2 << " * " << num3 << " = " << num1 + num2 * num3 << endl;
    cout << "(" << num1 << " + " << num2 << ")" << " * " << num3 << " = " << (num1 + num2) * num3 << endl;
}