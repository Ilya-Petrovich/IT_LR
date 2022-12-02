#include<iostream>

using namespace std;

int main()
{
	int a, b, c;
	cout << "Type the first number: "; cin >> a;
	cout << "Type the second number: "; cin >> b;
	cout << "Type the third number: "; cin >> c;

	if(a > 0 and b > 0 and c > 0 and b != 0 and a > b){
	    cout << a << " + " << b << " = " << a + b << endl;
    	cout << a << " - " << b << " = " << a - b << endl;
	    cout << a << " * " << b << " = " << a * b << endl;
	    cout << a << " / " << b << " = " << a / b << endl;
	    cout << a << ".0" << " / " << b << ".0" << " = " << (float(a) /float(b)) << endl;
    	cout << a << " % " << b << " = " << a % b << endl;
	    cout << a << " + " << b << " * " << c << " = " << a + b * c << endl;
	    cout << "(" << a << " + " << b << ")" << " * " << c << " = " << (a + b) * c << endl;
	}
	
	else{
	    cout << "Invalid data" << endl;
	}
}