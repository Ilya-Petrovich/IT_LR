#include <iostream>
using namespace std;
int main() {
	int rasst = 360, t, fuel, maxspeed = 110, maxfuel = 50;
	float Speed, prasst, ostrast = 0, fuelcons, fuelrem;
	cout << "How much fuel do you have at start? "; cin >> fuel; cout << endl;
	if (fuel < 0 || fuel > 50) {
		cout << "Invalid data.";
		return 1;
	}
	else {
		if (fuel < maxfuel / 2) {
			fuel += maxfuel / 2;
		}
	}
	cout << "Car stats" << endl;
	cout << "Fuel: " << fuel << endl;
	cout << "Fuel capacity: " << maxfuel << endl;
	cout << "Fuel consumption: " << 0 << endl;
	cout << "Speed: " << 0 << endl;
	cout << "Maximum speed: " << maxspeed << endl;
	cout << "\nRoute info" << endl;
	cout << "Distance: " << 360 << " km" << endl;
	cout << "----------------------------------------" << endl;
	cout << "You have to drive a route 360 km long." << endl;
	cout << "But first you need to check if you have enough fuel." << endl;
	cout << "\nWhat speed will you choose? "; cin >> Speed;
	if (Speed > maxspeed) {
		Speed = maxspeed;
	}
	cout << "Your speed before start: " << Speed << " km/h" << endl;
	double fuelConsumption = (Speed / 10) * (Speed / 10) / 4 - 4.5 * (Speed / 10) + 30;
	cout << "\nFuel consumption with choosen speed: " << fuelConsumption << " litres per 100 km" << endl;
	cout << "\nDentination result" << endl;
	prasst = (float(fuel) / fuelConsumption) * 100;
	if (prasst < rasst) {
		ostrast = rasst - prasst;
	}
	else {
		prasst = rasst;
		ostrast = 0;
	}
	t = prasst / Speed * 3600;
	fuelcons = prasst * fuelConsumption / 100;
	fuelrem = fuel - fuelcons;
	cout << "Distance traveled: " << prasst << " km" << endl;
	cout << "Time spent: " << t << " sec" << endl;
	cout << "Fuel consumed: " << fuelcons << endl;
	cout << "Fuel remained: " << fuelrem << endl;
	cout << "----------------------------------------" << endl;
	if (prasst == rasst) {
		cout << "Congratulations! You have reached destination point!";
	}
	else {
		cout << "You haven't reach destination point. " << ostrast << " km left.";
	}
	return 0;


}