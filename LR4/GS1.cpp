//Game statistics

#include<iostream>

using namespace std;

int main() {
	float fuel, fuel2 = 0, speed, s, fuelConsuption, time;
	bool flag = 1;

	cout << "How much fuel do you at start? "; cin >> fuel;

	cout << endl;

	if ((fuel < 0) or (fuel > 50)) {
		cout << "Invalid data.";
		return 0;
	}

	cout << "Car stats" << endl;
	cout << "Fuel: "<< fuel << endl;

	if (fuel < 25) fuel += 25, flag = false;

	cout << "Fuel capacity: 50" << endl;
	cout << "Fuel consumption: 0" << endl;
	cout << "Speed: 0" << endl;
	cout << "Maximum speed: 110" << endl;

	cout << ' ' << endl;

	cout << "Route info" << endl;
	cout << "Distance: 360 km" << endl;
	cout << "----------------------------------------" << endl;
	cout << "You have to drive a route 360 km long." << endl;
	cout << "But first you need to check if you have enough fuel." << endl;

	cout << endl;

	if (flag == 0) cout << "Your fuel before start: " << fuel << endl;

	cout << endl;


	cout << "What speed will you choose? ";cin >> speed;

	if (speed < 0) {
		cout << "Invalid data.";
		return 0;
	}
	if (speed > 110) speed = 110;

	cout << "Your speed before start: " << speed << " km/h" << endl;

	if (speed == 0) fuelConsuption = 0, s = 0, time = 0, fuel2 =fuel, fuel = 0;
	else {
		fuelConsuption = (speed / 10) * (speed / 10) / 4 - 4.5 * (speed / 10) + 30;
		s = 100 * fuel / fuelConsuption;
		time = s / speed * 60 * 60;
	}

	cout << "Fuel consumption with chosen speed: " << fuelConsuption << " liters per 100 km" << endl;

	cout  << endl;

	cout << "Destination result" << endl;

	if (s >= 360) {
		cout << "Distance traveled: " << 360 << "km" << endl;
		cout << "Time spend: " << int(360 / speed * 60 * 60) << " sec" << endl;
		cout << "Fuel consumed: " << 3.6 * fuelConsuption << " liters" << endl;
		cout << "Fuel remained: " << fuel - 3.6 * fuelConsuption << " liters" << endl;
		cout << "----------------------------------------" << endl;
		cout << "Congratulation! You have reached destination point!" << endl;
			return 0;
	}

	cout << "Distance traveled: " << s << "km" << endl;
	cout << "Time spend: " << int(time) << " sec" << endl;
	cout << "Fuel consumed: " << fuel << " liters" << endl;
	cout << "Fuel remained: " << fuel2 << " liters" << endl;
	cout << "----------------------------------------" << endl;
	cout << "You haven't reached destination point. " << 360 - s << " km left.";




}







