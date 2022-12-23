#include <iostream>

using namespace std;

int main()
{
	float fuel = 0, speed = 0, s = 0, d = 360, dt = 0, fuelConsumed = 0, fuelConsumption = 0, fuelRemained = 0;
	int time = 0;
	cout << "How much fuel do you have at start? "; cin >> fuel;
	if (fuel < 0 or fuel > 50) {
		cout << "\nInvalid data." << endl;
		return 0;
	}

	cout << "\nCar stats\nFuel: " << fuel << "\nFuel capacity: 50\nFuel consumption: 0\nSpeed: 0\nMaximum speed: 110\n";
	cout << "\nRoute info\nDistance: 360 km\n";
	cout << "----------------------------------------\nYou have to drive a route 360 km long.\nBut first you need to check if you have enough fuel." << endl;
	if (fuel < 26) {
		fuel += 25; cout << "\nYour fuel before start: " << fuel << endl;
	}

	cout << "\nWhat speed will you choose? "; cin >> speed;
	if (speed > 110)
		speed = 110;
	if (speed < 0) {
		cout << "\nInvalid data." << endl;
		return 0;
	}

	cout << "Your speed before start: " << speed << " km/h\n";
	s = speed / 10;

	fuelConsumption = s * s / 4 - 4.5 * s + 30;
	if (speed == 0)
		fuelConsumption = 0;

	cout << "\nFuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km\n";
	dt = fuel / fuelConsumption * 100;
	if (dt > 360)
		dt = 360;
	time = dt / speed * 3600;
	fuelConsumed = fuelConsumption * dt / 100;
	fuelRemained = fuel - fuelConsumed;
	if (fuelRemained < 0)
		fuelRemained = 0;
	if (speed == 0) {
		time = 0; dt = 0;
	}
	cout << "\nDestination result\nDistance traveled: " << dt << " km\nTime spent: " << time << " sec\nFuel consumed: " << fuelConsumed << " litres\nFuel remained: " << fuelRemained << " litres\n----------------------------------------\n";
	if (dt == 360)
		cout << "Congratulations! You have reached destination point!" << endl;
	else cout << "You haven't reached destination point. " << 360 - dt << " km left." << endl;
	return 0;
}