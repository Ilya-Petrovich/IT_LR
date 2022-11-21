#include <iostream>
#include <cmath>
using namespace std;
int main(){
int fuel;
float fuelConsumption, s, speed;
cout<< "How much fuel do you have at start? "; cin >> fuel;
if (fuel > 0 && fuel < 50) {

	cout << "Car stats"<< endl;
	cout <<"----------------" << endl;
	cout << "Fuel: " << fuel << endl;
	cout << "Fuel capacity: " << 50 << endl;
	cout << "Fuel consumption: 0"<< endl;
	cout << "Speed: 0 " << endl;
	cout << "Max speed: 110"<< endl;
	cout << "                    "<< endl;
	cout << " Route info " << endl;
	cout << " Distance: 360"<< endl;
	cout <<"----------------" << endl;
	if (fuel < 25){ fuel = fuel + 25;
	} else { fuel = fuel;
	}
	cout << " What speed will you choose? "; cin >> speed;
	if (speed > 0) {
		cout << " Your speed before start: " << speed << "km/h" << endl;
		s = speed / 10;
		
		fuelConsumption = s * s / 4 - 4.5 * s + 30;
		cout << " Fuel consumption with chosen speed:" << fuelConsumption << " litres per 100 km";
		cout << " Distantion result"
		
		
	} else { cout << " Invalid data ";
	}
	
}else { cout << "Invalid data";
}
	
	
	
	
}
