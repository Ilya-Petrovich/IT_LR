﻿#include <iostream>
using namespace std;
int main()

{
    int num_1, num_2, num_3;
    cout << "Enter the first number: ";
    cin >> num_1;
    cout << "Enter the second number: ";
    cin >> num_2;
    cout << "Enter the third number: ";
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


