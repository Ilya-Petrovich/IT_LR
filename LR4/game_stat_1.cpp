#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float fuel, speed, s, fuelConsumption, distanceDone, time, fuelBurned, fuelRemained, distanceRemained = 0;
	cout << "How much fuel do you have at start? ";
	cin >> fuel;
	if (0 <= fuel and fuel <= 50) {
		cout << "\nCar Stats\nFuel: " << fuel << "\nFuel capacity: 50\nFuel consumption: 0\nSpeed: 0\nMaximum speed: 110\n\n";
		cout << "Route info\nDistance: 360 km\n----------------------------------------\n";
		cout << "You have to drive a route 360 km long.\nBut first you need to check if you have enough fuel.\n\n";

		if (fuel < 25) {
			fuel += 25;
			cout << "Your fuel before start: " << fuel << "\n\n";
		}

		cout << "What speed will you choose? ";
		cin >> speed;
		if (speed > 110) {
			speed = 110;
		}
		if (speed < 0) {
			cout << "Invalid data";
			exit(0);
		}
		cout << "Your speed before start: " << speed << " km/h\n\n";

		s = speed / 10.0;
		fuelConsumption = s * s / 4 - 4.5 * s + 30;

		cout << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km\n\n";

		distanceDone = 100 * fuel / fuelConsumption;
		if (distanceDone > 360) {
			distanceDone = 360;
			fuelBurned = distanceDone * fuelConsumption / 100;
			fuelRemained = fuel - fuelBurned;
		}
		else {
			fuelBurned = fuel;
			fuelRemained = 0;
			distanceRemained = 360 - distanceDone;
		}
		time = distanceDone / speed * 3600;

		cout << "Destination result\nDistance travelled: " << distanceDone << " km\nTime spent: " << int(time) << " sec";
		cout << "\nFuel consumed: " << fuelBurned << " litres\nFuel remained: " << fuelRemained << " litres\n";

		cout << "----------------------------------------\n";
		if (distanceRemained == 0) {
			cout << "Congratulations! You have reached destination point!";
		}
		else cout << "You haven't reached destination point. " << distanceRemained << " km left.";
	}
	else cout << "Invalid data";
}
