#include <iostream>

using namespace std;

int main() {
	int n1, n2, n3;

	cout << "Введите первое число: ";
	cin >> n1;
	
    cout << "Введите второе число: ";
	cin >> n2;
	
    cout << "Введите третье число: ";
    cin >> n3;
    
    if (n1 < 0 || n2 < 0 || n3 < 0) {
    	cout << "Invalid data" << endl;
        return 0;
    }

    if (n1 <= n2) {
    	cout << "Invalid data" << endl;
        return 0;
    }

    printf("%i + %i = %i \n", n1, n2, n1 + n2);
    printf("%i - %i = %i \n", n1, n2, n1 - n2);
    printf("%i * %i = %i \n", n1, n2, n1 * n2);
    printf("%i / %i = %i \n", n1, n2, n1 / n2);
    printf("%.1f / %.1f = %f \n", (double)n1, (double)n2, (double)n1 / n2);
    printf("%i %% %i = %i \n", n1, n2, n1 % n2);
    printf("%i + %i * %i = %i \n", n1, n2, n3, n1 + n2 * n3);
    printf("(%i + %i) * %i = %i \n", n1, n2, n3, (n1 + n2) * n3);

	/*
    cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
	cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
	cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
	cout << (double)n1 << " / " << (double)n2 << " = " << (double)n1 / n2 << endl;
	cout << n1 << " % " << n2 << " = " << n1 % n2 << endl;
	cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
	cout << << n1 << " + " << n2 << " * " << n3 << " = " << n1 + n2 << endl;
	cout << "(" << n1 << " + " << ")" << n2 << " * " << n3 << " = " << n1 + n2 << endl;
    */

	return 0;
}