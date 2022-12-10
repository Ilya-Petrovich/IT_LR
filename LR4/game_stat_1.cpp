#include <iostream>

using namespace std;

int main() {
	float fuel;
	int speed;
	cout << "How much fuel do you have at start? ";
	cin >> fuel;

	if (fuel <= 50 && fuel >= 0) {
		cout << "\nCar stats\nFuel: " << fuel << "\nFuel capacity: 50\nFuel consumption: 0\nSpeed: 0";
		cout << "\nMaximum speed: 110\n\nRoute info\nDistance: 360 km";
		cout << "\n----------------------------------------\n";
		cout << "You have to drive a route 360 km long.\nBut first you need to check if you have enough fuel.\n\n";

		if (fuel < 25) {
			fuel += 25;
			cout << "Your fuel before start: " << fuel << "\n\n";
		}

		cout << "What speed will you choose? ";
		cin >> speed;

		if (speed < 0) {
			cout << "\nInvalid data.\n";
		}
		else if (speed == 0) {
			cout << "Your speed before start: 0 km/h\n\nFuel consumption with chosen speed: 0 litres per 100 km";
			cout << "\n\nDestination result\nDistance traveled: 0\nTime spent: 0 sec\nFuel consumed: 0 litres";
			cout << "\nFuel remained: " << fuel << " litres";
			cout << "\n----------------------------------------\n";
			cout << "You haven't reached destination point. 360 km left.\n";
		}
		else if (speed <= 110) {
			cout << "Your speed before start: " << speed << " km/h";
		}
		else {
			speed = 110;
			cout << "Your speed before start: " << speed << " km/h";
		}

		if (speed > 0) {
			float s = (float)speed / 10;
			float fuelConsumption = s * s / 4 - 4.5 * s + 30;
			cout << "\n\nFuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km\n";
			cout << "\nDestination result\nDistance traveled: ";
			float distance = fuel * 100 / fuelConsumption;

			if (distance < 360) {
				cout << distance << " km";
			}
			else {
				distance = 360;
				cout << distance << " km";
			}

			int time = distance * 3600 / speed;
			cout << "\nTime spent: " << time << " sec" << "\nFuel consumed: " << distance * fuelConsumption / 100 << " litres";
			cout << "\nFuel remained: ";

			if (fuel <= distance * fuelConsumption / 100) {
				cout << "0 litres";
			}
			else {
				cout << fuel - distance * fuelConsumption / 100 << " litres";
			}

			cout << "\n----------------------------------------\n";

			if (distance == 360) {
				cout << "Congratulations! You have reached destination point!\n";
			}
			else {
				cout << "You haven't reached destination point. " << 360 - distance << " km left.\n";
			}
		}
	}
	else {
		cout << "\nInvalid data.\n";
	}

	return 0;
}