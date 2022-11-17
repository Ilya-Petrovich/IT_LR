#include <iostream>
using namespace std;
int main()

{
    setlocale(LC_ALL, "rus");
    int num_1, num_2, num_3;
    cout << "Введите первое число: ";
    cin >> num_1;
    cout << "Введите второе число: ";
    cin >> num_2;
    cout << "Введите третье число: ";
    cin >> num_3;
    if (num_1 > num_2) 
    {
        cout << num_1 << " + " << num_2 << " = " << num_1 + num_2 << endl;
        cout << num_1 << " - " << num_2 << " = " << num_1 - num_2 << endl;
    }
    else {
        cout << "Invalid data" << std::endl;
    }
    cout << "7 * 3 = " << num_1 * num_2 << endl;
    cout << "7 / 3 = " << num_1 / num_2 << endl;
    cout << "7.0 / 3.0 = " << (double)num_1 / (double)num_2 << endl;
    cout << "7 % 3 = " << num_1 % num_2 << endl;
    cout << "7 + 3 * 5 = " << num_1 + num_2 * num_3 << endl;
    cout << "(7 + 3) * 5 = " << (num_1 + num_2) * num_3 << endl;
    return 0;

}


