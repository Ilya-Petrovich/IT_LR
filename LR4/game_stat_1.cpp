#include <iostream>
using namespace std;
int main() {
	int rasst = 360, t, fuel, maxspeed = 110, maxfuel = 50;
	float Speed, prasst, ostrast = 0, fuelcons, fuelrem;
	double fuelConsumption;
	cout << "How much fuel do you have at start? "; cin >> fuel;
	int firstfuel = fuel;
	if (fuel < 0 || fuel > 50) {
		cout << endl;
		cout << "Invalid data." << endl;
		return 1;
	}
	else {
		if (fuel < maxfuel / 2) {
			fuel += maxfuel / 2;
		}
	}
	cout << endl;
	cout << "Car stats" << endl;
	cout << "Fuel: " << fuel << endl;
	cout << "Fuel capacity: " << maxfuel << endl;
	cout << "Fuel consumption: " << 0 << endl;
	cout << "Speed: " << 0 << endl;
	cout << "Maximum speed: " << maxspeed << endl;
	cout << endl;
	cout << "Route info" << endl;
	cout << "Distance: " << 360 << " km" << endl;
	cout << "----------------------------------------" << endl;
	cout << "You have to drive a route 360 km long." << endl;
	cout << "But first you need to check if you have enough fuel." << endl;
	cout << endl;
	if (firstfuel < fuel) {
		cout << "Your fuel before start: " << fuel << endl;
		cout << endl;
	}
	cout << "What speed will you choose? "; cin >> Speed;
	if (Speed > maxspeed) {
		Speed = maxspeed;
	}
	else if (Speed < 0) {
		cout << endl;
		cout << "Invalid data." << endl;
		return 3;
	}
	cout << "Your speed before start: " << Speed << " km/h" << endl;
	cout << endl;
	if (Speed != 0) {
		fuelConsumption = (Speed / 10) * (Speed / 10) / 4 - 4.5 * (Speed / 10) + 30;
	}
	else {
		fuelConsumption = 0;

	}
	cout << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km" << endl;
	cout << endl;
	cout << "Destination result" << endl;
	if (fuelConsumption == 0) {
		prasst = 0;
	}
	else {
		prasst = (float(fuel) / fuelConsumption) * 100;
	}
	if (prasst < rasst) {
		ostrast = rasst - prasst;
	}
	else {
		prasst = rasst;
		ostrast = 0;
	}
	if (prasst == 0) {
		t = 0;
	}
	else {
		t = prasst / Speed * 3600;
	}
	fuelcons = prasst * fuelConsumption / 100;
	fuelrem = fuel - fuelcons;
	cout << "Distance traveled: " << prasst << " km" << endl;
	cout << "Time spent: " << t << " sec" << endl;
	cout << "Fuel consumed: " << fuelcons << " litres" << endl;
	cout << "Fuel remained: " << fuelrem << " litres" << endl;
	cout << "----------------------------------------" << endl;
	if (prasst == rasst) {
		cout << "Congratulations! You have reached destination point!" << endl;
	}
	else {
		cout << "You haven't reached destination point. " << ostrast << " km left." << endl;
	}
	return 0;


}