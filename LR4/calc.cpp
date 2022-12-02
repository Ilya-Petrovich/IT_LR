#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "Russian");
    int num_1, num_2, num_3;
    cout << "¬ведите первое число: ";
    cin >> num_1;
    if (num_1 >= 0) {
        cout << "¬ведите второе число: ";
        cin >> num_2;
        if (0 <= num_2 < num_1) {
            cout << "¬ведите третье число: ";
            cin >> num_3;
            if (0 <= num_3) {
                cout << num_1 << " + " << num_2 << " = " << num_1 + num_2 << endl;
                cout << num_1 << " - " << num_2 << " = " << num_1 - num_2 << endl;
                cout << num_1 << " * " << num_2 << " = " << num_1 * num_2 << endl;
                cout << num_1 << " / " << num_2 << " = " << num_1 / num_2 << endl;
                cout << num_1 << ".0 / " << num_2 << ".0 = " << (double) num_1 / (double) num_2 << endl;
                cout << num_1 << " % " << num_2 << " = " << num_1 % num_2 << endl;
                cout << num_1 << " + " << num_2 << " * " << num_3 << " = " << num_1 + num_2 * num_3 << endl;
                cout << "(" << num_1 << " + " << num_2 << ")" << " * " << num_3 << " = " << (num_1 + num_2) * num_3 << endl;
            }
            else cout << "Invalid data";
        }
        else cout << "Invalid data";
    }
    else cout << "Invalid data";
}
/*int speed, time;
    float fuel_at_start, route;
    cout << "How much fuel do you have at start?";
    cin >> fuel_at_start >> endl;
    if (0 <= fuel_at_start <= 50) {
        cout << "Car stats\0 Fuel: " << fuel_at_start << endl;
        if (fuel_at_start < 25) {
            cout << "0";
        }
    } else cout << "Invalid data";*/

