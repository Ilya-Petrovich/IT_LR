#include <iostream>
using namespace std;

int main() {

	float fuelConsumption, s, dis, dis1, lit, l2;
	int fuel, speed, h=0;

	cout << "How much fuel do you have at start? "; cin >> fuel;

	if (fuel < 50 and fuel > 0) {

		cout << "\nCar stats" << endl;
		cout << "Fuel: " << fuel << endl;
		cout << "Fuel capacity: 50" << endl;
		cout << "Fuel consumption: 0" << endl;
		cout << "Speed: 0" << endl;
		cout << "Maximum speed: 110" << endl;
		cout << endl;
		cout << "Route info" << endl;
		cout << "Distance: 360 km" << endl;
		cout << "----------------------------------------" << endl;
		cout << "You have to drive a route 360 km long." << endl;
		cout << "But first you need to check if you have enough fuel." << endl;

		if (fuel < 25) {
			fuel += 25;
			cout << endl;
			cout << "Your fueld before start: " << fuel << endl;
		}

		cout << endl;
		cout << "What speed will you choose?";
		cin >> speed;
	
		if (speed > 110) {
			s = speed / 10;
			cout << "Your speed before start: 110 km/h" << endl;
			speed = 110;
			cout << endl;
			fuelConsumption = s * s / 4 - 4.5 * s + 30;
			cout << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km" << endl;
			cout << endl;
			cout << "Destination result";
			dis = fuel / fuelConsumption * 100;
			if (dis > 360) {
				dis1 = dis - 360;
				dis = 360;
				lit = 3.6 * fuelConsumption;
				cout << endl;
				cout << "Distance traveled: " << (dis * 100) / 100 << " km" << endl;
				cout << "Time spent: " << int(dis / speed * 60 * 60) << " sec" << endl;
				cout << "Fuel consumed: " << lit << " litres" << endl;
				cout << "Fuel remained: " << fuel - lit << " litres" << endl;
				cout << "----------------------------------------" << endl;
				cout << "Congratulations! You have reached destination point!" << endl;
			}
		}
		if (speed == 0) {
				cout << "Your speed before start: " << speed << " km/h" << endl;
				cout << endl;
				cout << "Fuel consumption with chosen speed: " << 0 << " litres per 100 km" << endl;
				cout << endl;
				cout << "Destination result" << endl;
					cout << "Distance traveled: " << 0 << " km" << endl;
					cout << "Time spent: " << 0 << " sec" << endl;
					cout << "Fuel consumed: " << 0 << " litres" << endl;
					cout << "Fuel remained: " << 0 << " litres" << endl;
					cout << "----------------------------------------" << endl;
					cout << "You haven't reached destination point. " << 360 << " km left" << endl;
				}
			if (speed < 110 and speed > 0) {
				s = speed * 0.1;
				cout << "Your speed before start: " << speed << " km/h";
				cout << endl;
				cout << endl;

				fuelConsumption = s * s / 4 - 4.5 * s + 30;
				cout << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km" << endl;
				cout << endl;
				cout << "Destination result" << endl;
				dis = fuel / fuelConsumption * 100;
				if (dis >= 360) {
					dis = 360;
					lit = 3.6 * fuelConsumption;
					cout << "Distance traveled: " << (dis * 100) / 100 << " km" << endl;
					cout << "Time spent: " << int(dis / speed * 60 * 60) << " sec" << endl;
					cout << "Fuel consumed: " << lit << " litres" << endl;
					cout << "Fuel remained: " << fuel - lit << " litres" << endl;
					cout << "----------------------------------------" << endl;
					cout << "Congratulations! You have reached destination point!" << endl;
				}
				else {
					lit = dis * fuelConsumption *0.01;
					l2 = fuel - lit;
					if (fuel = lit) l2 = 0;
					cout << "Distance traveled: " << (dis * 100) / 100 << " km" << endl;
					cout << "Time spent: " << int(dis / speed * 60 * 60) << " sec" << endl;
					cout << "Fuel consumed: " << lit << " litres" << endl;
					cout << "Fuel remained: " << l2 << " litres" << endl;
					cout << "----------------------------------------" << endl;
					cout << "You haven't reached destination point. " << 360 - dis << "km left" << endl;
				}
			}
			else {
				if (speed != 0) {
					cout << endl;
					cout << "Invalid data." << endl;
				}
			}
	}
	else cout << "Invalid data." << endl;

}