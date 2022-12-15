#include <iostream>
using namespace std;
int main() {
	float s, speed, fuel, Fuel_consumed, Fuel_remained, Fuel_consumption, distance, Fuel_capacity,  distance_traveled;
	int time, mx_speed;

	Fuel_capacity = 50;
	mx_speed = 110;
	distance = 360;
	Fuel_remained = 0;
	Fuel_consumed = 0;

	cout << "How much fuel do you have at start? ";
	cin >> fuel;

	if (fuel >= 0 && fuel <= Fuel_capacity) {
		cout << "\nCar stats" << endl;
		cout << "Fuel: " << fuel << endl;
		cout << "Fuel capacity: " << Fuel_capacity << endl;
		Fuel_consumption = 0;
		cout << "Fuel consumption: " << Fuel_consumption << endl;
		speed = 0;
		cout << "Speed: " << speed << endl;
		cout << "Maximum speed: " << mx_speed << "\n" << endl;

		cout << "Route info\nDistance: " << distance << " km" << endl;
		cout << "----------------------------------------" << endl;
		cout << "You have to drive a route " << distance << " km long.\nBut first you need to check if you have enough fuel." << endl;

		if (fuel < Fuel_capacity / 2) {
			fuel = fuel + Fuel_capacity / 2;
			cout << "\nYour fuel before start: " << fuel << endl;
		}

		cout << "\nWhat speed will you choose? ";
		cin >> speed;

		if (speed >= 0) {

			if (speed > mx_speed) {
				speed = mx_speed;
			}

			cout << "Your speed before start: " << speed << " km/h" << endl;

			s = speed / 10.;

			if (speed == 0) {
				Fuel_consumption = 0;
			}
			else {
				Fuel_consumption = s * s / 4 - 4.5 * s + 30;
			}

			cout << "\nFuel consumption with chosen speed: " << Fuel_consumption << " litres per 100 km\n" << endl;

			distance_traveled = fuel / (0.01 * Fuel_consumption);

			if (Fuel_consumption == 0) {
				distance_traveled = 0;
			}

			Fuel_consumed = fuel;

			if (speed == 0) {
				Fuel_consumed = 0;
				Fuel_remained = fuel;
			}

			if (distance_traveled > distance) {
				Fuel_consumed = distance * Fuel_consumption * 0.01;
				Fuel_remained = fuel - Fuel_consumed;
				distance_traveled = distance;
			}

			time = distance_traveled / speed * 3600;
			if (speed == 0) {
				time = 0;
			}

			cout << "Destination result\nDistance traveled: " << distance_traveled << " km" << endl;
			cout << "Time spent: " << time << " sec" << endl;
			cout << "Fuel consumed: " << Fuel_consumed << " litres" << endl;
			cout << "Fuel remained: " << Fuel_remained << " litres" << endl;
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
