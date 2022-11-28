#include <iostream>
using namespace std;
int InvalidData() {
    cout << "Invalid data";
    return 0;
}

int main()
{
    int num_1, num_2, num_3;
    cout << "Enter first number: "; cin >> num_1;
    cout << "Enter second number: "; cin >> num_2;
    cout << "Enter third number: ";  cin >> num_3;
    if (num_1 < 0) return InvalidData();
    if (num_2 < 0) return InvalidData();
    if (num_3 < 0) return InvalidData();
    if (num_1 < num_2) return InvalidData();
    cout << num_1 << " + " << num_2 << " = " << num_1 + num_2 << endl;
    cout << num_1 << " - " << num_2 << " = " << num_1 - num_2 << endl;
    cout << num_1 << " * " << num_2 << " = " << num_1 * num_2 << endl;
    cout << num_1 << " / " << num_2 << " = " << num_1 / num_2 << endl;
    cout << num_1 << ".0" << " / " << (float)num_2 << ".0" << " = " << (float)num_1 / num_2 << endl;
    cout << num_1 << " % " << num_2 << " = " << num_1 % num_2 << endl;
    cout << num_1 << " + " << num_2 << " * " << num_3 << " = " << num_1 + num_2 * num_3 << endl;
    cout <<"("<< num_1 << " + " << num_2 << ")" << " * " << num_3 << " = " << (num_1 + num_2) * num_3 << endl;
}
