// ИТ (4).cpp 

#include <iostream>
using namespace std;


int main()
{
    float a, b, c;
    setlocale(LC_ALL, "RUS");
    cout << "Введите первое число: ";
    cin >> a;
    cout << "\nВведите второе число: ";
    cin >> b;
    cout << "\nВведите третье число: ";
    cin >> c;
if (a > b && a > 0  && b > 0 && c > 0) 
{
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << int(a / b) << endl;
    cout << a << " / " << b << " = " << a / b << endl;
    cout << a << " % " << b << " = " << int(a) % int(b) << endl;
    cout << a << " + " << b << " * "<< c << " = " << a + b * c << endl;
    cout <<" ( " << a << " + " << b << ")" << " * " << c << " = " << (a + b) * c << endl;
}
 else 
 {
     cout << "Invalid data" << endl;
 }
 return 0;
} 

