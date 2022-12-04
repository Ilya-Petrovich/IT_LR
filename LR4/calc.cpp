#include <iostream>
using namespace std;
int main() {
	int x, w, z;
	cout << "Type the first number: ";
	cin >> x;
	cout << "Type the second number: ";
	cin >> w;
	cout << "Type the third number: ";
	cin >> z;
	if (x > y && x >= 0 && y > 0 && z >= 0) {
		cout << x << " + " << w << " = " << x + w << endl;
		cout << x << " - " << w << " = " << x - w << endl;
		cout << x << " * " << w << " = " << x * w << endl;
		cout << x << " / " << w << " = " << x / w << endl;
		cout << double(x) << ".0" << " / " << double(y) << ".0" << " = " << double(x) / double(w) << endl;
		cout << x << " % " << w << " = " << x % w << endl;
		cout << x << " + " << w << " * " << z << " = " << x + y * z << endl;
		cout <<"(" <<x << " + " << w <<")"<< " * " << z << " = " << (x + w) * z << endl;
	}
	else {
		cout << "Invalid data" << endl;
	}
	return 0;
}