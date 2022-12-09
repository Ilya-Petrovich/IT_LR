# include <iostream>
using namespace std;
int main() {
	int speed = 0, maximum_speed = 110;
	double fuel, fuel_capacity = 50, fuel_consumption = 0, distance = 360;
	cout << "How much fuel do you have at start? ";
	cin >> fuel;
	cout << endl << endl;

	if (fuel >= 0 and fuel <= 50) {
		cout << "Car stats" << endl;
		cout << "Fuel: " << fuel << endl;
		cout << "Fuel capacity: " << fuel_capacity << endl;
		cout << "Fuel consumption: " << fuel_consumption << endl;
		cout << "Speed: " << speed << endl;
		cout << "Maximum speed: " << maximum_speed << endl;
		cout << endl << endl;
		cout << "Route info" << endl;
		cout << "Distance: " << distance << " km" << endl;
		cout << endl;
		cout << "-------------------------------------------------------" << endl;
	}
	else {
		cout << "Invalid data.";
		exit(0);
	}

	cout << endl << "You have to drive a route " << distance << " km long." << endl;
	cout << "But first you need to check if you have enough fuel." << endl << endl;
	if (fuel < 25) {
		fuel = fuel + fuel_capacity / 2;
		cout << "Your fuel before start: " << fuel << endl << endl;
	}

	cout << "What speed will you choose? ";
	cin >> speed;

	if (speed < 0) {
		cout << "Invalid data." << endl;
		exit(0);
	}

	if (speed > 110) {
		speed = speed - (speed - 110);
	}

	cout << "Your speed before start: " << speed << " km/h" << endl << endl;
	double s = speed / 10., fuelConsumption;

	if (speed == 0) {
		fuelConsumption = 0;
	}
	else { fuelConsumption = s * s / 4 - 4.5 * s + 30; }

	cout << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km" << endl << endl;
	cout << "Destination result" << endl;
	double dT;

	if (speed == 0) {
		dT = 0;
	}
	else {
		dT = (fuel / fuelConsumption) * 100;
	}

	bool Re = false;

	if (dT >= distance) {
		Re = true;
		dT = distance;
	}

	int time;

	if (speed == 0) {
		time = 0;
	}
	else {
		time = (dT / speed) * 3600;
	}

	double fuelConsumed = (fuelConsumption / 100) * dT;
	double fuelRemained = fuel - fuelConsumed;
	cout << "Distance travelled: " << dT << " km" << endl;
	cout << "Time spent: " << time << " sec" << endl;
	cout << "Fuel consumed: " << fuelConsumed << " litres" << endl;
	cout << "Fuel remained: " << fuelRemained << " litres" << endl << endl;
	cout << "--------------------------------------------------" << endl << endl;

	if (Re == true) {
		cout << "Congratulations! You have reached destination point!" << endl;
	}
	else {
		cout << "You haven't reached destination point. " << distance - dT << " km left." << endl;
	}
	return 0;
}