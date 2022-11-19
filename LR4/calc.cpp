#include <iostream>

using namespace std;

int main() {
	int n1, n2, n3;

	cout << "Type the first number: ";
	cin >> n1;
	
    cout << "Type the second number: ";
	cin >> n2;
	
    cout << "Type the third number: ";
    cin >> n3;
    
    if (n1 < 0 || n2 < 0 || n3 < 0) {
    	cout << "Invalid data" << endl;
        return 0;
    }

    if (n1 <= n2) {
    	cout << "Invalid data" << endl;
        return 0;
    }	
    cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
	cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
	cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
	cout << (double)n1 << " / " << (double)n2 << " = " << (double)n1 / n2 << endl;
	cout << n1 << " % " << n2 << " = " << n1 % n2 << endl;
	cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
	cout << << n1 << " + " << n2 << " * " << n3 << " = " << n1 + n2 << endl;
	cout << "(" << n1 << " + " << ")" << n2 << " * " << n3 << " = " << n1 + n2 << endl;
    

	return 0;
}