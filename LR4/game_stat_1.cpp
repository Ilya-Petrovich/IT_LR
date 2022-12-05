#include <iostream>

using namespace std;

int main() {
	double fuel, fuel_capacity=50, fuel_consumption = 0, speed = 0, s, max_speed = 110, distance = 360, distance_travelled, fuel_consumed;
	cout << "How much fuel do you have at start? "; cin >> fuel;

	if (fuel < 0 or fuel > 50) {
		cout << "\nInvalid data.\n";
		system("pause");
		return 0;
	}

	cout << "\nCar stats";
	cout << "\nFuel: " << fuel;
	cout << "\nFuel capacity: " << fuel_capacity;
	cout << "\nFuel consumption: " << fuel_consumption;
	cout << "\nSpeed: " << speed;
	cout << "\nMaximum speed: " << max_speed;
	cout << "\n\nRoute info";
	cout << "\nDistance: " << distance << " km\n";
	cout << "----------------------------------------";
	cout << "\nYou have to drive a route " << distance << " km long.";
	cout << "\nBut first you need to check if you have enough fuel.";
	if (fuel < fuel_capacity / 2.)
	{
		fuel += fuel_capacity / 2.;
		cout << "\n\nYour fuel before start: " << fuel;
	}
	cout << "\n\nWhat speed will you choose? "; cin >> speed;

	if (speed < 0) {
		cout << "\nInvalid data.\n";
		system("pause");
		return 0;
	} else {
		speed = speed > max_speed ? max_speed : speed;
		cout << "Your speed before start: " << speed << " km/h";
	}

	s = speed / 10.0;
	fuel_consumption = s == 0 ? 0 : s * s / 4 - 4.5 * s + 30;
	cout << "\n\nFuel consumption with chosen speed: " << fuel_consumption << " litres per 100 km\n";
	cout << "\nDestination result";
	distance_travelled = speed == 0 ? 0 : 100 * fuel / fuel_consumption;

	if (distance_travelled > distance) {
		distance_travelled = distance;
		fuel_consumed = distance_travelled * fuel_consumption / 100.0;
	} else {
		fuel_consumed = speed == 0 ? 0 : fuel;
	}

	cout << "\nDistance traveled: " << distance_travelled << " km\n";

	if (speed == 0) {
		cout << "Time spent: 0 sec\n";
	} else {
		cout << "Time spent: " << int(distance_travelled / speed * 3600) << " sec\n";
	}

	cout << "Fuel consumed: " << fuel_consumed << " litres";
	cout << "\nFuel remained: " << fuel - fuel_consumed << " litres";
	cout << "\n----------------------------------------\n";
	distance_travelled != distance ? cout << "You haven't reached destination point. " << distance - distance_travelled << " km left.\n" : cout << "Congratulations! You have reached destination point!\n";
	system("pause");
	return 0;
}