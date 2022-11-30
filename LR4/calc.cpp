#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int num, num_2, num_3;

    cout << "Type the first number: ";
    cin >> num;
    cout << "Type the second number: ";
    cin >> num_2;
    cout << "Type the third number: ";
    cin >> num_3;

    float div = (float)num / num_2;

    if (num > num_2 && num >= 0 && num_2 > 0 && num_3 >= 0)
    {
        cout << num << " + " << num_2 << " = " << num + num_2 << endl;
        cout << num << " - " << num_2 << " = " << num - num_2 << endl;
        cout << num << " * " << num_2 << " = " << num * num_2 << endl;
        cout << num << " / " << num_2 << " = " << num / num_2 << endl;
        cout << setprecision(1) << fixed << (float)num << " / " << (float)num_2 << " = ";
        cout << setprecision(5) << fixed << div << endl;
        cout << setprecision(0) << fixed;f
        cout << num << " % " << num_2 << " = " << num % num_2 << endl;
        cout << num << " + " << num_2 << " * " << num_3 << " = " << num + num_2 * num_3 << endl;
        cout << "(" << num << " + " << num_2 << ")" << " * " << num_3 << " = " << (num + num_2) * num_3 << endl;
    }
    else
        cout << "Invalid data" << endl;
    return 0;
}
