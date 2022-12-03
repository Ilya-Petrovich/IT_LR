#include<iostream>
using namespace std;

int main() {
	double fuel, ifuel = 0, speed, s, fConsuption, time;
	cout << "How much fuel do you have at start? "; cin >> fuel;

	if ((fuel < 0) || (fuel > 50)) {
		cout << "\nInvalid data.\n";
		return 0;
	}

	cout << "\nCar stats";
	cout << "\nFuel: " << fuel;
	cout << "\nFuel capacity: 50";
	cout << "\nFuel consumption: 0";
	cout << "\nSpeed: 0";
	cout << "\nMaximum speed: 110\n";
	cout << "\nRoute info";
	cout << "\nDistance: 360 km";
	cout << "\n----------------------------------------";
	cout << "\nYou have to drive a route 360 km long.";
	cout << "\nBut first you need to check if you have enough fuel.";

	if (fuel < 25) {
		fuel += 25;
		cout << "\n\nYour fuel before start: " << fuel;
	}

	cout << "\n\nWhat speed will you choose? "; cin >> speed;

	if (speed < 0) {
		cout << "\nInvalid data.\n";
		return 0;
	}

	if (speed > 110) {
		speed = 110;
	}

	cout << "Your speed before start: " << speed << " km/h" << endl;

	if (speed == 0) {
		fConsuption = 0, s = 0, time = 0, ifuel = fuel, fuel = 0;
	}
	else {
		fConsuption = (speed / 10.0) * (speed / 10.0) / 4.0 - 4.5 * (speed / 10.0) + 30.0;
		s = 100.0 * fuel / fConsuption;
		time = s / speed * 60.0 * 60.0;
	}

	cout << "\nFuel consumption with chosen speed: " << fConsuption << " litres per 100 km" << endl;

	cout << "\nDestination result" << endl;

	if (s >= 360) {
		double koef = 3.6;
		double lm = fuel - koef * fConsuption;
		lm *= 1000000.0;
		lm = (int)lm;
		lm /= 1000000.0;
		cout << "Distance traveled: " << 360 << " km" << endl;
		cout << "Time spent: " << int(360 / speed * 60 * 60) << " sec" << endl;
		cout << "Fuel consumed: " << 3.6 * fConsuption << " litres" << endl;
		cout << "Fuel remained: " << lm << " litres" << endl;
		cout << "----------------------------------------" << endl;
		cout << "Congratulations! You have reached destination point!\n";
		return 0;
	}

	cout << "Distance traveled: " << s << " km" << endl;
	cout << "Time spent: " << int(time) << " sec" << endl;
	cout << "Fuel consumed: " << fuel << " litres" << endl;
	cout << "Fuel remained: " << ifuel << " litres" << endl;
	cout << "----------------------------------------" << endl;
	cout << "You haven't reached destination point. " << 360.0 - s << " km left.\n";
}