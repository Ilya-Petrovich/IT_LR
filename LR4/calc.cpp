#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int x, y, z;cout << "Введите первое число: ";cin >> x;cout << "Введите второе число: ";cin >> y;cout << "Введите третье число: ";cin >> z;
    if (not(x < y || x < 0 || y < 0 || z < 0)) {
        cout << x << " + " << y << " = " << x + y << '\n';cout << x << " - " << y << " = " << x - y << '\n';cout << x << " * " << y << " = " << x * y << '\n';cout << x << " / " << y << " = " << x / y << '\n';cout << double(x) << ".0" << " / " << double(y) << ".0" << " = " << (double) x / y << '\n';cout << x << " % " << y << " = " << x % y << '\n';cout << x << " + " << y << " * " << z << " = " << x + y * z << '\n';cout << '('<< x << " + " << y << ')' << " * " << z << " = " << (x + y) * z << '\n';
    }
else cout << "Invalid data\n";

}
