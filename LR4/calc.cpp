
#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3;
    
    cout << "Input first number:"; cin >> n1;
    cout << "Input second number:"; cin >> n2;
    cout << "Input third number:"; cin >> n3;
    
    if ((n1 >= 0) and (n2 > 0) and (n1 > n2) and (n3 >= 0))
    {
        cout << n1 << " + " << n2 << " = " << n1+n2 << endl;
        cout << n1 << " - " << n2 << " = " << n1-n2 << endl;
        cout << n1 << " * " << n2 << " = " << n1*n2 << endl;
        cout << n1 << " / " << n2 << " = " << n1/n2 << endl;
        cout << float(n1) << " / " << float(n2) << " = " << float(n1) / float(n2) << endl;
        cout << n1 << " % " << n2 << " = " << n1 % n2 << endl;
        cout << n1 << " + " << n2 << " * " << n3 << " = " << n1 + n2 * n3 << endl;
        cout << "(" << n1 << " + " << n2 << ") * " << n3 << " = " << (n1+n2)*n3 << endl;
    }
    else
    {
        cout << "Invalid data" << endl;
    }
    return 0;
}