#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int x, v, t;
	float s, fuelConsumption, z, q, w;
	cout << "How much fuel do you have at start? ";
	cin >> x;
	cout << "\n";

	if (x >= 0 && x <= 50) {
		cout << "Car stats\n";
		cout << "Fuel: " << x << "\n";
		cout << "Fuel capacity: 50\n";
		cout << "Fuel consumption: 0\n";
		cout << "Speed: 0\n";
		cout << "Maximum speed: 110\n";
		cout << "\n";
		cout << "Route info\n";
		cout << "Distance: 360 km\n";
		cout << "----------------------------------------\n";
		cout << "You have to drive a route 360 km long.\n";
		cout << "But first you need to check if you have enough fuel.\n";
		cout << "\n";

		if (x < 25) {
			x = x + 25;
			cout << "Your fuel before start: " << x << "\n";
			cout << "\n";
		}
		else {
			x = x;
		}

		cout << "What speed will you choose? ";
		cin >> v;

		if (v == 0) {
			cout << "Your speed before start: 0 km/h\n";
			cout << "\n";
			cout << "Fuel consumption with chosen speed: 0 litres per 100 km\n";
			cout << "\n";
			cout << "Destination result\n";
			cout << "Distance traveled: 0 km\n";
			cout << "Time spent: 0 sec\n";
			cout << "Fuel consumed: 0 litres\n";
			cout << "Fuel remained: " << x << " litres\n";
			cout << "----------------------------------------\n";
			cout << "You haven't reached destination point. 360 km left." << endl;
		}
		else if (v > 0) {
			if (v <= 110 && x > 0) {
				cout << "Your speed before start: " << v << " km/h";
				v = v;
			}
			else {
				cout << "Your speed before start: 110 km/h";
				v = 110;
			}

			cout << "\n";
			s = v / 10.;
			fuelConsumption = s * s / 4 - 4.5 * s + 30;
			cout << "\n";
			cout << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km\n";
			cout << "\n";
			cout << "Destination result\n";

			if ((x / fuelConsumption * 100) >= 360) {
				w = 360;
				cout << "Distance traveled: " << w << " km\n";
				t = w / v * 3600;
				cout << "Time spent: " << t << " sec\n";
				z = fuelConsumption * 3.6;
				cout << "Fuel consumed: " << z << " litres\n";
				q = x - z;
				cout << "Fuel remained: " << q << " litres\n";
			}
			else {
				w = x / fuelConsumption * 100;
				cout << "Distance traveled: " << w << " km\n";
				t = w / v * 3600;
				cout << "Time spent: " << t << " sec\n";
				cout << "Fuel consumed: " << x << " litres\n";
				cout << "Fuel remained: 0 litres\n";
			}

			cout << "----------------------------------------\n";

			if (w == 360) {
				cout << "Congratulations! You have reached destination point!" << endl;
			}
			else {
				cout << "You haven't reached destination point. " << 360 - w << " km left." << endl;
			}
		}
		else {
			cout << "\n";
			cout << "Invalid data." << endl;
		}
	}
	else {
		cout << "Invalid data." << endl;
	}

	return 0;
}