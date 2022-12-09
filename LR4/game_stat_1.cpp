#include <iostream>
using namespace std;

int main()
{
	const float max_speed = 110, fuel_capacity = 50, distance = 360;
	float fuelConsumption, s, speed, distance_left;
	float fuel, distance_traveled, fuel_consumed, fuel_remained; // ввод переменных
	cout << "How much fuel do you have at start? "; cin >> fuel; // запрос начального количества топлива и его ввод

	if (0 <= fuel && fuel < fuel_capacity) {
		cout << "\nCar stats";
		cout << "\nFuel: " << fuel;
		cout << "\nFuel capacity: " << fuel_capacity;
		cout << "\nFuel consumption: 0";
		cout << "\nSpeed: 0";
		cout << "\nMaximum speed: 110" << endl;
		cout << "\nRoute info";
		cout << "\nDistance: 360 km";
		cout << "\n-----------------------------------";
		cout << "\nYou have to drive a route 360 km long.";
		cout << "\nBut first you need to check if you have enough fuel.";

		if (0 <= fuel && fuel < 25) {
			fuel = fuel + fuel_capacity / 2;
			cout << "\n\nYour fuel before start: " << fuel;
		}

		cout << "\n\nWhat speed will you choose? ";
		cin >> speed;

		if (speed > 110) {
			speed = 110;
		}

		if (speed <= 110 && speed > 0) {
			cout << "Your speed before start: " << speed << " km/h" << endl;
			s = speed / 10;
			fuelConsumption = s * s / 4 - 4.5 * s + 30;
			cout << "\nFuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km";
			cout << "\n\nDestination result";
			distance_traveled = (fuel / fuelConsumption) * 100;

			if (distance_traveled > 360) {
				distance_traveled = 360;
			}

			if (distance_traveled <= 360) {
				cout << "\nDistance traveled: " << distance_traveled << " km";
				int time = (distance_traveled / speed) * 3600;
				cout << "\nTime spent: " << time << " sec";
				fuel_consumed = fuelConsumption * (distance / 100.0F);
				if (fuel_consumed > fuel) {
					fuel_consumed = fuel;
				}
				cout << "\nFuel consumed: " << fuel_consumed << " litres";
				fuel_remained = fuel - fuel_consumed;
				cout << "\nFuel remained: " << fuel_remained << " litres";
				cout << "\n----------------------------------------";
			}

			if (distance_traveled == 360) {
				cout << "\nCongratulations! You have reached destination point!" << endl;
			}

			if (distance_traveled < 360) {
				distance_left = distance - distance_traveled;
				cout << "\nYou haven't reached destination point. " << distance_left << " km left.";
			}
		}
		else if (speed == 0) {
			cout << "Your speed before start: " << speed << " km/h" << endl;
			fuelConsumption = 0;
			cout << "\nFuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km" << endl;
			distance_traveled = 0;
			cout << "\nDestination result";
			cout << "\nDistance traveled: " << distance_traveled << " km";
			int time = 0;
			cout << "\nTime spent: " << time << " sec";
			fuel_consumed = 0;
			cout << "\nFuel consumed: " << fuel_consumed << " litres";
			fuel_remained = 0;
			cout << "\nFuel remained: " << fuel_remained << " litres";
			cout << "\n----------------------------------------";
			distance_left = distance - distance_traveled;
			cout << "\nYou haven't reached destination point. " << distance_left << " km left.";
		}
		else {
			cout << "\nInvalid data.";
		}
	}
	else {
		cout << "\nInvalid data." << endl;
	}

	return 0;
}