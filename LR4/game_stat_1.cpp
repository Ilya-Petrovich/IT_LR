#include <iostream>
using namespace std;

int main()
{
	float fuelValue = 0;
	float speedValue = 0;
	float s = 0;
	float d = 360;
	float distance = 0;
	float fuelConsumed = 0;
	float fuelConsumption = 0;
	float fuelRemained = 0;
	int z = 0;
	cout << "How much fuel do you have at start? "; cin >> fuelValue;
	if (fuelValue < 0 || fuelValue > 50) {
		cout << "\nInvalid data."<<endl;
		return 0;
	}

	cout << "\nCar stats" << endl;
	cout << "Fuel: " << fuelValue << endl;
	cout << "Fuel capacity: 50" << endl;
	cout << "Fuel consumption: 0" << endl;
	cout << "Speed: 0" << endl;
	cout << "Maximum speed: 110" << endl;
	cout << "Route info" << endl;
	cout << "Distance: 360 km" << endl;
	cout << "------------------------------------------" << endl;
	cout << "You have to drive a route 360 km long." << endl;
	cout << "But first you need to check if you have enough fuel." << endl;

	if (fuelValue < 26) {
		fuelValue += 25;
		cout << "\nYour fuel before start: " << fuelValue << endl;
	}
	cout << "\nWhat speed will you choose? "; cin >> speedValue;

	if (speedValue > 110) {
		speedValue = 110;
	}

	if (speedValue < 0) {
		cout << "\nInvalid data.";
		exit(0);
	}
	cout << "Your speed before start: " << speedValue << " km/h" << endl;
	s = speedValue / 10;
	fuelConsumption = s * s / 4 - 4.5 * s + 30;

	if (speedValue == 0) {
		fuelConsumption = 0;
	}
	cout << "\nFuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km" << endl;
	distance = fuelValue / fuelConsumption * 100;

	if (distance > 360) {
		distance = 360;
	}
	z = distance / speedValue * 3600;
	fuelConsumed = fuelConsumption * distance / 100;
	fuelRemained = fuelValue - fuelConsumed;

	if (fuelRemained < 0) {
		fuelRemained = 0;
	}

	if (speedValue == 0) {
		z = 0;
		distance = 0;
	}
	cout << "\nDestination result" << endl;
	cout << "Distance traveled: " << distance << " km" << endl;
	cout << "Time spent: " << z << " sec" << endl;
	cout << "Fuel consumed: " << fuelConsumed << " litres" << endl;
	cout << "Fuel remained: " << fuelRemained << " litres" << endl;
	cout << "-------------------------------------------" << endl;

	if (distance == 360) {
		cout << "Congratulations! You have reached destination point!" << endl;
	}
	else {
		cout << "You haven't reached destination point. " << 360 - distance << " km left." << endl;
	}
	return 0;
}