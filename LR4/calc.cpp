#include <iostream>

using namespace std;

int main()
{
    int n_1, n_2, n_3;
    cout << "Type the first number: "; 
    cin >> n_1;
    cout << "Type the second number: "; 
    cin >> n_2;
    cout << "Type the third number: ";
    cin >> n_3;

    if (n_1 > n_2 and n_1 >= 0 and n_2 > 0 and n_3 >= 0)
    {
        cout << n_1 << " + " << n_2 << " = " << n_1 + n_2 << endl;
        cout << n_1 << " - " << n_2 << " = " << n_1 - n_2 << endl;
        cout << n_1 << " * " << n_2 << " = " << n_1 * n_2 << endl;
        cout << n_1 << " / " << n_2 << " = " << n_1 / n_2 << endl;
        cout << n_1 << ".0" << " / " << n_2 << ".0" << " = " << double(n_1) / double(n_2) << endl;
        cout << n_1 << " % " << n_2 << " = " << n_1 % n_2 << endl;
        cout << n_1 << " + " << n_2 << " * " << n_3 << " = " << n_1 + n_2 * n_3 << endl;
        cout << "(" << n_1 << " + " << n_2 << ")" << " * " << n_3 << " = " << (n_1 + n_2) * n_3 << endl;
    } else {
        cout << "Invalid data" << endl;
    }

}