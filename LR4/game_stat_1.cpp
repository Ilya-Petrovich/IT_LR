#include<iostream>
using namespace std;

int main() {
	double fuel, fuel2 = 0, speed, s, fuelConsuption, time; 
	cout << "How much fuel do you have at start? "; cin >> fuel;   
	
	if ((fuel < 0) or (fuel > 50)) {
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
		fuelConsuption = 0, s = 0, time = 0, fuel2 = fuel, fuel = 0;
	} else {
		fuelConsuption = (speed / 10.0) * (speed / 10.0) / 4.0 - 4.5 * (speed / 10.0) + 30.0;
		s = 100.0 * fuel / fuelConsuption;
		time = s / speed * 60.0 * 60.0;
	}

	cout << "\nFuel consumption with chosen speed: " << fuelConsuption << " litres per 100 km" << endl;
	cout  << endl;
	cout << "Destination result" << endl;

	if (s >= 360) {
		double k = 3.6;
		double FuRe = fuel - k * fuelConsuption;
		FuRe *= 1000000.0;
		FuRe = (int)FuRe;
		FuRe /= 1000000.0;
		cout << "Distance traveled: " << 360 << " km" << endl;
		cout << "Time spent: " << int(360 / speed * 60 * 60) << " sec" << endl;
		cout << "Fuel consumed: " << 3.6 * fuelConsuption << " liters" << endl;
		cout << "Fuel remained: " << FuRe << " liters" << endl;
		cout << "----------------------------------------" << endl;
		cout << "Congratulations! You have reached destination point!\n";
		return 0;
	}

	cout << "Distance traveled: " << s << " km" << endl;
	cout << "Time spent: " << int(time) << " sec" << endl;
	cout << "Fuel consumed: " << fuel << " liters" << endl;
	cout << "Fuel remained: " << fuel2 << " liters" << endl;
	cout << "----------------------------------------" << endl;
	cout << "You haven't reached destination point. " << 360.0 - s << " km left.\n";
}