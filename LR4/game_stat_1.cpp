#include <iostream>
using namespace std;
int main() {
	
	double fuelConsumption, fuel, distance, time, s, speed, b, a, time_spent, fuel_consumed, fuel_remined;
	cout << "How much fuel do you need to start? ";
	cin >> fuel;
	if (fuel < 0) {
		cout << "Invalid data.";
		return 0;
	}
	else if (fuel < 25) {
		fuel += 25;
	}

	cout << endl;

	cout << "Car Stats" << endl;

	
	cout << "Fuel: " << fuel << endl;
	cout << "Fuel capacity: 50" << endl;
	cout << "Fuel Consumption: 0" << endl;
	cout << "Speed: 0" << endl;
	cout << "Max Speed: 110" << endl;
	
	cout << endl;


	cout << "Rout info" << endl;
	cout << "Distance: 360 km" << endl;
	
	cout << "---------------------------------------------" << endl;

	cout << "You have to drive a rout 360 km long." << endl;
	cout << "But first you need to check if you have enough fuel." << endl;

	cout << endl;

	cout << "What speed will you choose? ";
	cin >> speed;
	
	
	if (speed < 0) {
		cout << "Invalid data.";
		return 0;
	}
	else if (speed > 110) {
		speed = 110;
	}
	cout << "Your speed before star: " << speed << " km/h" << endl;


	s = speed / 10;
	fuelConsumption = s * s / 4 - 4.5 * s + 30;

	cout << endl;

	cout << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km" << endl;

	cout << endl;

	cout << "Destination result" << endl;

	cout << endl;

	fuel_remined = fuel;

	distance = 0;
	while (fuel > 0) {
		distance += 1;
		fuel = fuel - (fuelConsumption / 100000.f);
	}
	if (distance >= 360000) {
		a = distance - 360000;
		b = a * fuelConsumption / 100000.f;
		cout << "Distance: " << 360 << endl;
		cout << "Time spent: " << round(360 / speed * 3600) << endl;
		cout << "Fuel consumed: " << fuel_remined - b << endl;
		cout << "Fuel remined: " << b << endl;
		cout << "---------------------------------------------" << endl;
		cout << "Congratulation! You have reached the distination point!" << endl;
		
	}
	else {
		cout << "Distance: " << distance / 1000 << endl;
		cout << "Time spent: " << distance / speed * 3.6 << endl;
		cout << "Fuel consumed: " << fuel_remined << endl;
		cout << "Fuel remined: 0" << endl;
		cout << "---------------------------------------------" << endl;
		cout << "You haven't reached the distination point. " << 360 - distance / 1000 << " km left..." << endl;
	}
	
	


	return 0;
}