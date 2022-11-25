#include "stdafx.h"
#include <iostream>
#include <math.h>
 using namespace std;

int main(){
	setlocale(LC_ALL,"Rus");
    int a ; 
	int b ;
	int c;
	cout << "¬ведите первое число = ";
	cin>>a;
	cout << "¬ведите второе число = ";
	cin>>b;
	cout << "¬ведите третье число = ";
	cin>>c;
	cout<<endl;
    cout << a << " + " << b << " = "<<a+b<<endl;
    cout << a << " - " << b << " = "<<a-b<<endl;
    cout << a << " * " << b << " = "<<a*b<<endl;
	cout << a << " / " << b << " = "<< a / b <<endl;
    cout << a <<".0"<< " / " << b <<".0"<< " = "<< double(a) / double(b) <<endl;
	cout << a << " % " << b << " = "<< a % b<<endl;
	cout << a << " + " << b << " * "<< c << " = "<< a + b * c<<endl;
    cout <<"("<< a << " + " << b <<")"<< " * "<< c << " = "<<( a + b ) * c<<endl;
    

    return 0;
}