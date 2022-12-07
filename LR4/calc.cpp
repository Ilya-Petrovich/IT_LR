#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int chislo, chislo_2, chislo_3;
    cout << "Type the first number: ";
    cin >> chislo;
    cout << "Type the second number: ";
    cin >> chislo_2;
    cout << "Type the third number: ";
    cin >> chislo_3;

    float div = (float)chislo / chislo_2;

    if (chislo > chislo_2 && chislo >= 0 && chislo_2 > 0 && chislo_3 >= 0)
    {
        cout << chislo << " + " << chislo_2 << " = " << chislo + chislo_2 << endl;
        cout << chislo << " - " << chislo_2 << " = " << chislo - chislo_2 << endl;
        cout << chislo << " * " << chislo_2 << " = " << chislo * chislo_2 << endl;
        cout << chislo << " / " << chislo_2 << " = " << chislo / chislo_2 << endl;
        cout << setprecision(1) << fixed << (float)chislo << " / " << (float)chislo_2 << " = ";
        cout << setprecision(5) << fixed << div << endl;
        cout << setprecision(0) << fixed;
        cout << chislo << " % " << chislo_2 << " = " << chislo % chislo_2 << endl;
        cout << chislo << " + " << chislo_2 << " * " << chislo_3 << " = " << chislo + chislo_2 * chislo_3 << endl;
        cout << "(" << chislo << " + " << chislo_2 << ")" << " * " << chislo_3 << " = " << (chislo + chislo_2) * chislo_3 << endl;
    }
    else
        cout << "Invalid data" << endl;
    return 0;
}
