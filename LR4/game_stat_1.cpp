#include <iostream>

using namespace std;

int main() {
	int fuelCapacity = 50;
	double fuelConsumption = 0;
	int speed = 0;
	int maxSpeed = 110;
	int distance = 360;

	int fuel;
	cout << "How much fuel do you have at start? " << endl;
	cin >> fuel;

	if (fuel < 0 || fuel > 50) {
		cout << "\nInvalid data";
		exit(0);
	}

	cout << "\nCar stats";
	cout << "\nFuel: " << fuel;
	cout << "\nFuel capacity: " << fuelCapacity;
	cout << "\nFuel consumption: " << fuelConsumption;
	cout << "\nSpeed: " << speed;
	cout << "\nMaximum speed: " << maxSpeed;

	cout << "\n\nRoute info";
	cout << "\nDistance: " << distance << " km\n";

	for (int i = 0; i < 40; i++)
		cout << '-';

	cout << "\nYou have to drive a route " << distance << " km long.";
	cout << "\nBut first you need to check if you have enough fuel.";

	if (fuel < fuelCapacity / 2) {
		fuel += fuelCapacity / 2;
		cout << "\n\nYour fuel before start: " << fuel;
	}

	cout << "\n\nWhat speed will you choose? ";
	cin >> speed;

	if (speed < 0) {
		cout << "\nInvalid data";
		exit(0);
	}

	if (speed > maxSpeed)
		speed = maxSpeed;

	cout << "Your speed before start: " << speed << " km/h";

	double s = speed / 10.;
	if (speed > 0)
		fuelConsumption = s * s / 4 - 4.5*s + 30;
	else
		fuelConsumption = 0;

	cout << "\n\nFuel consumption with chosen speed: " << fuelConsumption
		<< " litres per 100 km";

	double distanceTraveled;
	if (speed > 0)
		distanceTraveled = fuel / fuelConsumption * 100;
	else
		distanceTraveled = 0;
	if (distanceTraveled > distance)
		distanceTraveled = distance;

	int time;
	if (speed > 0)
		time = 3600 * distanceTraveled / speed;
	else
		time = 0;

	double fuelConsumed = fuelConsumption * distanceTraveled / 100;

	double fuelRemained;
	if (fuel > fuelConsumed)
		fuelRemained = fuel - fuelConsumed;
	else
		fuelRemained = 0;

	cout << "\n\nDestination result";
	cout << "\nDistance traveled: " << distanceTraveled << " km";
	cout << "\nTime spent: " << time << " sec";
	cout << "\nFuel consumed: " << fuelConsumed << " litres";
	cout << "\nFuel remained: " << fuelRemained << " litres\n";

	for (int i = 0; i < 40; i++)
		cout << '-';

	if (distanceTraveled >= distance)
		cout << "\nCongratulations! You have reached destination point!";
	else {
		double distanceLeft = distance - distanceTraveled;

		cout << "\nYou haven't reached destination point. "
			<< distanceLeft << "km left.";
	}
}