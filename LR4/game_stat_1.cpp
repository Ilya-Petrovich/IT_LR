#include <iostream>
using namespace std;

int main() {
	float s, speed, fuel, fuel_remained, fuel_capacity, fuel_consumed, fuel_consumption, distance, distance_traveled;
	int time_spent, max_speed;

	fuel_capacity = 50;
	max_speed = 110;
	distance = 360;
	fuel_remained = 0;
	fuel_consumed = 0;

	cout << "How much fuel do you have at start? ";
	cin >> fuel;

	if (fuel >= 0 && fuel <= fuel_capacity) {
		cout << "\nCar stats" << endl;
		cout << "Fuel: " << fuel << endl;
		cout << "Fuel capacity: " << fuel_capacity << endl;

		fuel_consumption = 0;

		cout << "Fuel consumption: " << fuel_consumption << endl;

		speed = 0;

		cout << "Speed: " << speed << endl;
		cout << "Maximum speed: " << max_speed << "\n" << endl;

		cout << "Route info\nDistance: " << distance << " km" << endl;
		cout << "----------------------------------------" << endl;
		cout << "You have to drive a route " << distance << " km long.\nBut first you need to check if you have enough fuel." << endl;

		if (fuel < fuel_capacity / 2) {
			fuel = fuel + fuel_capacity / 2;
			cout << "\nYour fuel before start: " << fuel << endl;
		}

		cout << "\nWhat speed will you choose? ";
		cin >> speed;

		if (speed >= 0) {

			if (speed > max_speed) {
				speed = max_speed;
			}

			cout << "Your speed before start: " << speed << " km/h" << endl;

			s = speed / 10.;

			if (speed == 0) {
				fuel_consumption = 0;
			}
			else {
				fuel_consumption = s * s / 4 - 4.5 * s + 30;
			}

			cout << "\nFuel consumption with chosen speed: " << fuel_consumption << " litres per 100 km\n" << endl;

			distance_traveled = fuel / (0.01 * fuel_consumption);

			if (fuel_consumption == 0) {
				distance_traveled = 0;
			}

			fuel_consumed = fuel;

			if (speed == 0) {
				fuel_consumed = 0;
				fuel_remained = fuel;
			}

			if (distance_traveled > distance) {
				fuel_consumed = distance * fuel_consumption * 0.01;
				fuel_remained = fuel - fuel_consumed;
				distance_traveled = distance;
			}

			time_spent = distance_traveled / speed * 3600;
			if (speed == 0) {
				time_spent = 0;
			}

			cout << "Destination result\nDistance traveled: " << distance_traveled << " km" << endl;
			cout << "Time spent: " << time_spent << " sec" << endl;
			cout << "Fuel consumed: " << fuel_consumed << " litres" << endl;
			cout << "Fuel remained: " << fuel_remained << " litres" << endl;
			cout << "----------------------------------------" << endl;

			if (distance_traveled == distance) {
				cout << "Congratulations! You have reached destination point!" << endl;
			}
			else {
				cout << "You haven't reached destination point. " << distance - distance_traveled << " km left." << endl;
			}
		}
		else {
			cout << endl;
			cout << "Invalid data." << endl;
		}
	}
	else {
		cout << endl;
		cout << "Invalid data." << endl;
	}
}
