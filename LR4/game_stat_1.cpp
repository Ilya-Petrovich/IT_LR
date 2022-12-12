#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float fuel, speed, s, fuelConsumption, distanceDone, time, fuelBurned, fuelRemained, distanceRemained = 0;
	cout << "How much fuel do you have at start? ";
	cin >> fuel;
	if (0 <= fuel and fuel <= 50) {
		cout << "" << endl;
		cout << "Car Stats" << endl;
		cout << "Fuel: " << fuel << endl;
		cout << "Fuel capacity : 50" << endl;
		cout << "Fuel consumption : 0" << endl;
		cout << "Speed: 0" << endl;
		cout << "Maximum speed : 110" << endl;
		cout << "" << endl;
		cout << "Route info" << endl;
		cout << "Distance: 360 km" << endl;
		cout << "----------------------------------------" << endl;
		cout << "You have to drive a route 360 km long." << endl;
		cout << "But first you need to check if you have enough fuel." << endl;
		cout << "" << endl;

		if (fuel < 25) {
			fuel += 25;
			cout << "Your fuel before start: " << fuel << endl;
			cout << "" << endl;
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
		cout << "Your speed before start: " << speed << " km/h" << endl;
		cout << "" << endl;

		if (speed == 0) {
			fuelConsumption = 0;
		}
		else {
			s = speed / 10.0;
			fuelConsumption = s * s / 4 - 4.5 * s + 30;
		}

		cout << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km" << endl;
		cout << "" << endl;

		if (fuelConsumption == 0) {
			distanceDone = 0;
			fuelBurned = 0;
			fuelRemained = fuel;
			distanceRemained = 360;
			time = 0;
		}
		else {
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
		}

		cout << "Destination result" << endl;
		cout << "Distance travelled: " << distanceDone << " km" << endl;
		cout << "Time spent: " << int(time) << " sec" << endl;
		cout << "Fuel consumed: " << fuelBurned << " litres" << endl;
		cout << "Fuel remained: " << fuelRemained << " litres" << endl;

		cout << "----------------------------------------";
		cout << "" << endl;
		if (distanceRemained == 0) {
			cout << "Congratulations! You have reached destination point!";
		}
		else cout << "You haven't reached destination point. " << distanceRemained << " km left.";
	}
	else cout << "Invalid data";
}
