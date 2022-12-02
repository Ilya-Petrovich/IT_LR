#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float fuel, fuelConsumption=0, s, fuelMax=50., traveled, fuelConsumpted;
	int speed=0, maxSpeed=110, distance=360;
	cout << "How much fuel do you have at start? ";
	cin >> fuel;
	if (cin.fail()) {
		cout << endl << "Invalid data.";
		return 0;
	} else {
		if (not((0 <= fuel) && (fuel <= 50))) {
			cout << endl << "Invalid data.";
			return 0;
		}
	}
	
	cout << endl << "Car stats" << endl;
	cout << "Fuel: " << fuel << endl;
	cout << "Fuel capacity: " << fuelMax << endl;
	cout << "Fuel consumption: " << fuelConsumption << endl;
	cout << "Speed: " << speed << endl;
	cout << "Maximum speed: " << maxSpeed << endl << endl << "Route info" << endl << "Distance: " << distance << " km" << endl << "----------------------------------------" << endl;
	cout << "You have to drive a route " << distance << " km long." << endl;
	cout << "But first you need to check if you have enough fuel." << endl << endl;
	if (fuelMax/2 > fuel) {
		fuel+=(fuelMax/2);
		cout << "Your fuel before start: " << fuel << "\n\n";
	}
	cout << "What speed will you choose? ";
	cin >> speed;
	if (cin.fail()) {
		cout << endl << "Invalid data.";
		return 0;
	} else {
		if (speed < 0) {
			cout << endl << "Invalid data.";
			return 0;
		} else {
			speed = (speed > maxSpeed) ? maxSpeed : speed;	
		}
	}
	cout << "Your speed before start: " << speed << " km/h" << endl << endl;
	
	s = speed/10.0;
	fuelConsumption = (s==0) ? 0 : s * s / 4 - 4.5 * s + 30;
	
	cout << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km" << endl << endl;
	
	traveled = (speed==0) ? 0 : 100*fuel/fuelConsumption;
	if (traveled > 360) {
		traveled = 360;
		fuelConsumpted = traveled*fuelConsumption/100.0;
	} else {
		fuelConsumpted = (speed==0) ? 0 : fuel;
	}
	
	cout << "Destinatinon result" << endl;
	cout << "Distance traveled: " << traveled << " km" << endl;
	if (speed == 0) {
		cout << "Time spent: 0 sec" << endl;
	} else {
		cout << "Time spent: " << int(36000*traveled/speed)/10 << " sec" << endl;
	}
	cout << "Fuel consumed: " << fuelConsumpted << " litres" << endl;
	cout << "Fuel remained: " << (round(1000*(fuel-fuelConsumpted)))/1000 << " litres" << endl << "----------------------------------------" << endl;
	(traveled != 360) ? cout << "You haven't reached destination point. " << distance-traveled << " km left." :
		cout << "Congratulations! You have reached destination point!";
	
}
