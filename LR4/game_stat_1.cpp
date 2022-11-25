#include <iostream>
#include <cmath>
using namespace std;
double s, fuelConsumption;
void car_stats(int fuel,int speed) {
	cout << "Car stats" << endl;
	cout << "Fuel: " << fuel << endl;
	cout << "Fuel capacity: 50" << endl;
	cout << "Fuel consumption: 0" << endl;
	cout << "Speed: " << speed << endl;
	cout << "Maximum speed: 110\n\n";
}
void Route_info(int& speed, double &fuelConsumption) {
	cout << "Distance: 360 km" << endl << "----------------------------------------" << endl;
	cout << "You have to drive a route 360 km long.\n";
	cout << "But first you need to check if you have enough fuel.\n\n";
	cout << "What speed will you choose? "; cin >> speed;
	if (speed >= 0) { cout << "Your speed before start: "; speed = (speed <= 110) ? speed : 110; cout << speed <<" km/h" << "\n"; }
	if (speed != 0) {
		s = speed / 10.;
		fuelConsumption = s * s / 4 - 4.5 * s + 30;
	}
	else {
		s = 0;
		fuelConsumption = 0;
	}
	if (speed >= 0)
	cout << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km\n\n";
}
void Destination_result(int fuel,double fuelConsumption,int speed) {
	double fuel1 = 0;
	cout << "Destination result" << endl;
	if (speed == 0) {
		cout << "Distanse traveled: " << 0 << "\n";
	}
	else {
		cout << "Distanse traveled: " << ((fuel / fuelConsumption * 100 >= 360) ? 360 : (fuel / fuelConsumption * 100)) << "\n";
	}
	if (fuel / fuelConsumption * 100 >= 360 && speed != 0) {
		if (speed != 0) {
			cout << "Time spent: " << int(360. * 3600 / speed) << " sec" << endl;
		}
		else {
			cout << "Time spent: " << 0 << " sec" << endl;
		}
		fuel1 = 360 * fuelConsumption / 100;
		cout << "Fuel consumed: " << fuel1 << " litres\n";
		cout << "Fuel remained: " << fuel - fuel1 << " litres";
		cout << endl << "----------------------------------------" << endl;
		cout << "Congratulations! You have reached destination point!"<<endl;
	}
	else {
		if (speed != 0) {
			cout << "Time spent: " << int(fuel / fuelConsumption * 100 * 3600 / speed) << " sec" << endl;
		}
		else {
			cout << "Time spent: " << 0 << " sec" << endl;
		}
		cout << "Fuel consumed: " << fuel << " litres\n";
		cout << "Fuel remained: " << fuel1 << " litres";
		cout << endl << "----------------------------------------" << endl;
		if (speed != 0) {
			cout << "You haven't reached destination point. " << 360 - fuel / fuelConsumption * 100 << " km left." << endl;
		}
		else {
			cout << "You haven't reached destination point. " << 360 << " km left." << endl;
		}
	}
	
}
int main() {
	int fuel, speed = 0; 
	cout << "How much fuel do you have at start? "; cin >> fuel; cout << "\n\n";
	if (!(fuel > 0 && fuel < 50)) {
		cout << "Invalid data." << endl;
		return 0;
	}
	else if (fuel < 50 / 2)
		fuel += 25;
	car_stats(fuel,speed);
	Route_info(speed,fuelConsumption);
	if (speed < 0) {
		cout << "Invalid data." << endl;
		return 0;
	}
	Destination_result(fuel, fuelConsumption,speed);
	return 0;
}