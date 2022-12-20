#include<iostream>
using namespace std;

int main() {
	double fuel, fuel_0 = 0, speed, s, fuelConsuption, time;
	cout << "How much fuel do you have at start? "; cin >> fuel;

	if ((fuel < 0) or (fuel > 50)) {
		cout << endl;
		cout << "Invalid data." << endl;
		return 0;
	}
	cout << endl;
	cout << "Car stats" << endl;
	cout << "Fuel: " << fuel << endl;
	cout << "Fuel capacity: 50" << endl;
	cout << "Fuel consumption: 0" << endl;
	cout << "Speed: 0" << endl;
	cout << "Maximum speed: 110" << endl;
	cout << endl;
	cout << "Route info" << endl;
	cout << "Distance: 360 km" << endl;
	cout << "----------------------------------------" << endl;
	cout << "You have to drive a route 360 km long." << endl;
	cout << "But first you need to check if you have enough fuel." << endl;

	if (fuel < 25) {
		fuel += 25;
		cout << endl;
		cout << "Your fuel before start: " << fuel << endl;
	}

	cout << endl;
	cout << "What speed will you choose? "; cin >> speed;

	if (speed < 0) {
		cout << endl;
		cout << "Invalid data." << endl;
		return 0;
	}

	if (speed > 110) {
		speed = 110;
	}

	cout << "Your speed before start: " << speed << " km/h" << endl;

	if (speed == 0) {
		fuelConsuption = 0, s = 0, time = 0, fuel_0 = fuel, fuel = 0;
	}
	else {
		fuelConsuption = (speed / 10.0) * (speed / 10.0) / 4.0 - 4.5 * (speed / 10.0) + 30.0;
		s = 100.0 * fuel / fuelConsuption;
		time = s / speed * 60.0 * 60.0;
	}

	cout << endl;
	cout << "Fuel consumption with chosen speed: " << fuelConsuption << " litres per 100 km" << endl;

	cout << endl;
	cout << "Destination result" << endl;

	if (s >= 360) {
		double k = 3.6;
		double FuRe = fuel - k * fuelConsuption;
		FuRe *= 1000000, 0;
		FuRe = (int)FuRe;
		FuRe /= 1000000, 0;
		cout << "Distance traveled: " << 360 << " km" << endl;
		cout << "Time spent: " << int(360 / speed * 60 * 60) << " sec" << endl;
		cout << "Fuel consumed: " << 3.6 * fuelConsuption << " litres" << endl;
		cout << "Fuel remained: " << FuRe << " litres" << endl;
		cout << "----------------------------------------" << endl;
		cout << "Congratulations! You have reached destination point!" << endl;
		return 0;
	}

	cout << "Distance traveled: " << s << " km" << endl;
	cout << "Time spent: " << int(time) << " sec" << endl;
	cout << "Fuel consumed: " << fuel << " litres" << endl;
	cout << "Fuel remained: " << fuel_0 << " litres" << endl;
	cout << "----------------------------------------" << endl;
	cout << "You haven't reached destination point. " << 360.0 - s << " km left." << endl;
}