#include <iostream>

using namespace std;

int main() {
	double fuel, fuel_capacity=50, fuel_consumption = 0, speed, s, max_speed = 110, distance = 360, distance_travelled, fuel_consumed, fuel_remained;
	int time_spent, speed;
	cout << "How much fuel do you have at start? "; cin >> fuel;

	if (fuel < 0 or fuel > 50) {
		cout << "\nInvalid data.\n";
		return 0;
	}

	cout << "\nCar stats";
	cout << "\nFuel: " << fuel;
	cout << "\nFuel capacity: " << fuel_capacity;
	cout << "\nFuel consumption: " << fuel_consumption;
	cout << "\nSpeed: 0";
	cout << "\nMaximum speed: " << max_speed;
	cout << "\n\nRoute info";
	cout << "\nDistance: " << distance << " km\n";
	cout << "----------------------------------------";
	cout << "\nYou have to drive a route " << distance << " km long.";
	cout << "\nBut first you need to check if you have enough fuel.";
	if (fuel < fuel_capacity / 2.) {
		fuel += fuel_capacity / 2.;
		cout << "\n\nYour fuel before start: " << fuel;
	}
	cout << "\n\nWhat speed will you choose? "; cin >> speed;

	if (speed < 0) {
		cout << "\nInvalid data.\n";
		return 0;
	}

	if (speed > max_speed) {
		speed = max_speed;
	}

	cout << "Your speed before start: " << speed << " km/h\n";
	s = speed / 10.0;
	fuel_consumption = s * s / 4 - 4.5 * s + 30;
	if (speed == 0) fuel_consumption = 0;
	cout << "\nFuel consumption with chosen speed: " << fuel_consumption << " litres per 100 km\n";
	distance_travelled = fuel / fuel_consumption * 100.0;

	if (distance_travelled > distance) distance_travelled = distance;

	fuel_consumed = distance_travelled * fuel_consumption / 100.0;
	fuel_remained = fuel - fuel_consumed;

	if (fuel_remained < 0) fuel_remained = 0;

	time_spent = distance_travelled / speed * 3600;
	cout << "\nDestination result";

	if (speed == 0) {
		distance_travelled = 0;
		time_spent = 0;
	}
	
	cout << "\nDistance traveled: " << distance_travelled << " km";
	cout << "\nTime spent: " << time_spent << " sec";
	cout << "\nFuel consumed: " << fuel_consumed << " litres";
	cout << "\nFuel remained: " << fuel_remained << " litres";
	cout << "\n----------------------------------------\n";
	if (distance_travelled >= distance) cout << "Congratulations! You have reached destination point!\n";
	else  cout << "You haven't reached destination point. " << distance - distance_travelled << " km left.\n";
	return 0;
}