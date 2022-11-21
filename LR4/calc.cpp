#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int num_1, num_2, num_3;
	cout << " num_1 = "; cin >> num_1;
	cout << " num_2 = "; cin >> num_2;
	cout << " num_3 = "; cin >> num_3;
	if (num_1 > num_2){
	
	
	
	
	cout << num_1 << " + " << num_2 << " = " << num_1 + num_2 << endl;
	cout << num_1 << " - " << num_2 << " = " << num_1 - num_2 << endl;
	cout << num_1 << " * " << num_2 << " = " << num_1 * num_2 << endl;
	cout << num_1 << " / " << num_2 << " = " << num_1 / num_2 << endl;
	cout << float(num_1) << " / " << float(num_2) << " = " << float(num_1) / float(num_2) << endl;
	cout << num_1 << " % " << num_2 << " = " << num_1 % num_2 << endl;
	
	cout << num_1 << " + " << num_2 << " * "<< num_3 << " = " << num_1 + num_2 * num_3 << endl;
	cout <<"(" << num_1 << " + " << num_2 << ")" << " * "<< num_3 << " = " << (num_1 + num_2) * num_3 << endl;
} else { cout << "Invalid data";
}
	
	
}
