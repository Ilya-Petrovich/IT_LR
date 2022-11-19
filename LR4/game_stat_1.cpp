#include <iostream>

using namespace std;

int main() {
	float fuel, fuel_capacity=50, fuel_consumption=0, speed=0, s, max_speed = 110, needed_distance, distance = 360, distance_travelled, distance_left, time, fuel_consumed, fuel_remained;
	cout << "How much fuel do you have at start? "; cin >> fuel; cout << endl;
	
	if (fuel<0 or fuel>50 or cin.fail()) {
		cout << "Invalid data." << endl;
		return 0;
	}

	cout << "Car stats" << endl;
	cout << "Fuel: " << fuel << endl;
	cout << "Fuel capacity: " << fuel_capacity << endl;
	cout << "Fuel consumption: " << fuel_consumption << endl;
	cout << "Speed: " << speed << endl;
	cout << "Maximum speed: " << max_speed << endl << endl;
	cout << "Route info" << endl;
	cout << "Distance: " << distance << " km" << endl;
	cout << "----------------------------------------" << endl;
	cout << "You have to drive a route " << distance << " km long." << endl;
	cout << "But first you need to check if you have enough fuel." << endl << endl;
	fuel = fuel < fuel_capacity/2 ? fuel+fuel_capacity/2 : fuel;
	cout << "What speed will you choose? "; cin >> speed;

	if (speed < 0 or cin.fail()) {
		cout << "Invalid data.";
		return 0;
	} else {
		speed = speed > max_speed ? max_speed : speed;
		cout << "Your speed before start: " << speed << " km/h" << endl;
	}

	s = speed / 10.0;
	fuel_consumption = s == 0 ? 0 : s * s / 4 - 4.5 * s + 30;
	cout << endl << "Fuel consumption with chosen speed: " << fuel_consumption << " litres per 100 km" << endl << endl;
	cout << "Destination result" << endl;
	distance_travelled = speed == 0 ? 0 : 100*fuel/fuel_consumption;

	if (distance_travelled > distance) {
		distance_travelled = distance;
		fuel_consumed = distance_travelled*fuel_consumption/100.0;
	} else {
		fuel_consumed = speed == 0 ? 0 : fuel;
	}

	cout << "Distance traveled: " << distance_travelled << " km" << endl;

	if (speed == 0) {
		cout << "Time spent: 0 sec" << endl;
	} else {
		cout << "Time spent: " << int(distance_travelled/speed*3600) << " sec" << endl;
	}

	cout << "Fuel consumed: " << fuel_consumed << " litres" << endl;
	cout << "Fuel remained: " << fuel-fuel_consumed << " litres" << endl;
	cout << "----------------------------------------" << endl;
	distance_travelled != distance ? cout << "You haven't reached destination point. " << distance-distance_travelled << " km left." : cout << "Congratulations! You have reached destination point!"; cout << endl;

}