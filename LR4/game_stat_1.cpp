#include <iostream>

using namespace std;

int main() {
	float fuel;
	int speed;
	cout << "How much fuel do you have at start? ";
	cin >> fuel;

	if (fuel <= 50 && fuel >= 0) {
		cout << "\n";
		cout << "Car stats\n";
		cout << "Fuel: " << fuel << "\n";
		cout << "Fuel capacity : 50\n";
		cout << "Fuel consumption : 0\n";
		cout << "Speed : 0\n";
		cout << "Maximum speed: 110\n";
		cout << "\n";
		cout << "Route info\n";
		cout << "Distance: 360 km\n";

		cout << "----------------------------------------\n";

		cout << "You have to drive a route 360 km long.\nBut first you need to check if you have enough fuel.\n";
		cout << "\n";

		if (fuel < 25) {
			fuel += 25;
			cout << "Your fuel before start: " << fuel << "\n\n";
		}

		cout << "What speed will you choose? ";
		cin >> speed;

		if (speed < 0) {
			cout << "\n";
			cout << "Invalid data.\n";
		}
		else if (speed == 0) {
			cout << "Your speed before start: 0 km/h\n";
			cout << "\n";
			cout << "Fuel consumption with chosen speed : 0 litres per 100 km\n";
			cout << "\n";
			cout << "Destination result\n";
			cout << "Distance traveled : 0 km\n";
			cout << "Time spent : 0 sec\n";
			cout << "Fuel consumed : 0 litres\n";
			cout << "Fuel remained: " << fuel << " litres\n";

			cout << "----------------------------------------\n";

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
			cout << "\n";
			cout << "\nFuel consumption with chosen speed : " << fuelConsumption << " litres per 100 km\n";
			cout << "\n";
			cout << "Destination result\n";
			cout << "Distance traveled : ";
			float length = fuel * 100 / fuelConsumption;

			if (length < 360) {
				cout << length << " km";
			}
			else {
				length = 360;
				cout << length << " km";
			}

			int time = length * 3600 / speed;
			cout << "\n";
			cout << "Time spent : " << time << " sec\n";
			cout << "Fuel consumed : " << length * fuelConsumption / 100 << " litres\n";
			cout << "Fuel remained: ";

			if (fuel <= length * fuelConsumption / 100) {
				cout << "0 litres";
			}
			else {
				cout << fuel - length * fuelConsumption / 100 << " litres";
			}

			cout << "\n----------------------------------------\n";

			if (length == 360) {
				cout << "Congratulations! You have reached destination point!\n";
			}
			else {
				cout << "You haven't reached destination point. " << 360 - length << " km left.\n";
			}
		}
	}
	else {
		cout << "\n";
		cout << "Invalid data.\n";
	}

	return 0;
}