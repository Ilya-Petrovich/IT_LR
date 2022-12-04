#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int topl, speed;
	float fuelConsumption, s, distancetraveled, timespent, fuelconsumed, fuelremained, nexvatka;
	cout << "How much fuel do you have at start? "; cin >> topl;
	cout << "" << '\n';
	if (topl >= 0 and topl <= 50) {
		if (topl < 25) {
			topl += 25;
		}

		cout << "Car stats" << '\n';
		cout << "Fuel: " << topl << '\n';
		cout << "Fuel capacity: " << 50 << '\n';
		cout << "Fuel consumption: " << 0 << '\n';
		cout << "Speed: " << 0 << '\n';
		cout << "Maximum speed: " << 110 << '\n';
		cout << "" << '\n';

		cout << "Route info" << '\n';
		cout << "Distance: " << 360 << " km" << '\n';
		cout << "----------------------------------------" << '\n';
		cout << "You have to drive a route " << 360 << " km long." << '\n';
		cout << "But first you need to check if you have enough fuel." << '\n';
		cout << "" << '\n';

		cout << "What speed will you choose? "; cin >> speed;

		if (speed >= 0) {
			if (speed > 110) {
				speed = 110;
			}
			cout << "Your speed before start: " << speed << " km/h" << '\n';
			s = speed / 10.0;
			if (speed > 0) {
				fuelConsumption = s * s / 4.0 - 4.5 * s + 30;
			}
			else {
				fuelConsumption = 0;
			}

			cout << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km" << '\n';
			cout << "" << '\n';

			cout << "Destination result" << '\n';
			distancetraveled = topl / fuelConsumption * 100;
			if (distancetraveled > 360 and speed > 0) {
				cout << "Distance traveled: " << 360 << " km" << '\n';
				timespent = 360.0 / speed * 3600;
				distancetraveled = 360;
			}
			else if (speed > 0) {
				cout << "Distance traveled: " << distancetraveled << " km" << '\n';
				timespent = distancetraveled * 3600 / speed;
			}
			else {
				cout << "Distance traveled: " << 0 << " km" << '\n';
				distancetraveled = 0;
				timespent = 0;
			}

			cout << "Time spent: " << (int)timespent << " sec" << '\n';

			fuelconsumed = distancetraveled / 100 * fuelConsumption;
			fuelremained = topl - fuelconsumed;;

			if (fuelconsumed > topl and speed > 0) {
				cout << "Fuel consumed: " << topl << " litres" << '\n';
				cout << "Fuel remained: " << 0 << " litres" << '\n';
			}
			else if (speed > 0) {
				cout << "Fuel consumed: " << fuelconsumed << " litres" << '\n';
				cout << "Fuel remained: " << fuelremained << " litres" << '\n';
			}
			else {
				cout << "Fuel consumed: " << 0 << " litres" << '\n';
				cout << "Fuel remained: " << topl << " litres" << '\n';
			}
			cout << "----------------------------------------" << '\n';

			if (distancetraveled >= 360) {
				cout << "Congratulations! You have reached destination point!";
			}
			else {
				if (speed > 0) {
					nexvatka = round((360 - distancetraveled) * 10000) / 10000.0;
				}
				else {
					nexvatka = 360;
				}
				cout << "You haven't reached destination point. " << nexvatka << " km left." << '\n';
			}
		}
		else {
			cout << "" << '\n';
			cout << "Invalid data." << '\n';
		}
	}
	else {
		cout << "Invalid data." << '\n';
	}
	return 0;
}