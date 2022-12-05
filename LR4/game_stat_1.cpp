#include <iostream>

int main() {
	using namespace std;
	int fuel = 0, distance = 360, speed = 0;
	double fuelConsumption = 0, s = 0, distanceTraveled;
	cout << "How much fuel do you have at start? ";
	cin >> fuel;
	if (fuel <= 50 && fuel >= 0) {
		cout << "\n";
		cout << "Car stats" << endl;
		cout << "Fuel: " << fuel << endl;
		cout << "Fuel capacity: " << 50 << endl;
		cout << "Fuel consumption: " << 0 << endl;
		cout << "Speed: " << 0 << endl;
		cout << "Maximum speed: " << 0 << endl;
		cout << "\n";

		if (fuel < 25) {
			fuel += 25;
		}
		cout << "Route info" << endl;
		cout << "Distance: " << distance << " km" << endl;
		cout << "----------------------------------------" << endl;
		cout << "You have to drive a route 360 km long." << endl;
		cout << "But first you need to check if you have enough fuel." << endl;
		cout << "\n";
		cout << "What speed will you choose? ";
		cin >> speed;
		if (speed > 110) {
			speed = 110;
		}
		cout << "Your speed before start: " << speed << " h/km" << endl;
		s = speed / 10.;
		fuelConsumption = s*s / 4 - 4.5 * s + 30;
		cout << "Fuel consumption with chosen speed: " << fuelConsumption << " liters per 100 km" << endl;
		cout << "\n";
		cout << "Destination result" << endl;
		distanceTraveled = (fuel * 100) / fuelConsumption;
		cout << "Distance traveled: ";
		if (distanceTraveled >= 360) {
			distanceTraveled = 360;
		}
		cout << distanceTraveled << " km" << endl;
		cout << "Time spent: " << int((distanceTraveled / speed) * 3600) << " sec" << endl;
		if (distanceTraveled < 360) {
			cout << "Fuel consumed: " << fuel << " liters" << endl;
			cout << "Fuel remained: " << 0 << " liters" << endl;
		}
		else {
			cout << "Fuel consumed: " << distanceTraveled * (fuelConsumption / 100) << " liters" << endl;
			cout << "Fuel remained: " << fuel - distanceTraveled * (fuelConsumption / 100) << " liters" << endl;
		}
		cout << "----------------------------------------" << endl;
		if (distanceTraveled == distance) {
			cout << "Congratulations! You have reached destination point!" << endl;
		}
		else {
			cout << "You haven't reached destination point. " << distance - distanceTraveled << " km left." << endl;
		}
	}
	else {
		cout << "Invalid data";
	}

}