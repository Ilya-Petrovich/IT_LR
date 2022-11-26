#include <iostream>

using namespace std;

int main() {
	int speed, fuel;
	cout << "How much fuel do you have at start? "; cin >> fuel; cout << endl;
	int fuelCapacity = 50;
	if (fuel >= 0 && fuel <= fuelCapacity) {
		if (fuel < 25) {
			fuel += 25;
		}
		int maxSpeed = 110;
		int distance = 360;
		cout << "Car stats" << endl;
		cout << "Fuel: " << fuel << endl;
		cout << "Fuel capacity: " << fuelCapacity << endl;
		cout << "Fuel consumption: 0" << endl;
		cout << "Speed: 0" << endl;
		cout << "Maximum speed: " << maxSpeed << endl;
		cout << endl;
		cout << "Route info" << endl;
		cout << "Distance: " << distance << " km" << endl;
		cout << "----------------------------------------" << endl;
		cout << "You have to drive a route 360 km long." << endl;
		cout << "But first you need to check if you have enough fuel." << endl;
		cout << endl;
		cout << "What speed will you choose? "; cin >> speed;
		if (speed > maxSpeed) {
			speed = maxSpeed;
		}
		cout << "Your speed before start: " << speed << " km/h" << endl;
		double s = double(speed) / 10;
		double fuelConsumption = s * s / 4 - 4.5 * s + 30;
		cout << "Fuel consumtion with chosen speed: " << fuelConsumption << " litres per 100 km" << endl;
		cout << endl;
		double traveledDistance = fuel * 100 / fuelConsumption;
		if (traveledDistance > 360) {
			traveledDistance = 360;
		}
		int timeSpend = traveledDistance * 1000 / (speed / 3.6);
		double fuelConsumed = fuelConsumption * 3.6;
		double fuelRemained = fuel - fuelConsumed;

		cout << "Destination result" << endl;
		cout << "Distance traveled: " << traveledDistance << " km" << endl;
		cout << "Time spent: " << timeSpend << " sec" << endl;
		if (traveledDistance == 360) {
			cout << "Fuel consumed: " << fuelConsumed << " litres" << endl;
			cout << "Fuel remained: " << fuelRemained << " litres" << endl;
		}
		else {
			cout << "Fuel consumed: " << fuel << " litres" << endl;
			cout << "Fuel remained: 0 litres" << endl;
		}
		cout << "----------------------------------------" << endl;
		if (traveledDistance == distance) {
			cout << "Congratulations! You have reached destination point!" << endl;
		}
		else {
			cout << "You haven't reached destination point. " << distance - traveledDistance << " km left." << endl;
		}
	}
	else {
		cout << "Invalid data" << endl;
	}
}
