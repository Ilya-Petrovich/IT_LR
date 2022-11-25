#include <iostream>
#include <iostream>
using namespace std;
int main() {
	int fuel, distance = 360;
	double s, fuel_consumption;
	int speed;
	cout << "How much fuel do you have at start? ";
	cin >> fuel;
	cout << endl;
	if (fuel < 0 or fuel > 50) {
		cout << "Invalid data" << endl;
		return 1;
	}
	cout << "Car stats" << endl;
	cout << "Fuel: " << fuel<<endl;
	cout << "Fuel capacity: 50" << endl;
	cout << "Fuel consumption: 0" << endl;
	cout << "Speed: 0" << endl;
	cout << "Maximum speed: 110" << endl;
	cout << endl;
	cout << "Route info" << endl;
	cout << "Distance: 360" << " km" << endl;
	cout << "---------------------------------------" << endl;
	cout << "You have to drive a route " << distance << " km long"<<endl;
	cout << "But first you need to check if you have enough fuel." << endl;
	cout << endl;
	if (fuel < 25) {
		fuel += 25;
		cout << "Your fuel before start: " << fuel << endl << endl;
	}
	cout << "What speed you will choose? ";
	cin >> speed;
	if (speed > 110) {
		speed = 110;
	}
	else if (speed < 0) {
		cout << "Invalid data";
		return 1;
	}
	cout << "Your speed before start: " << speed << " km/h" << endl;
	s = speed / 10.;
	fuel_consumption = s * s / 4 - 4.5 * s + 30;
	if (speed == 0) {
		fuel_consumption = 0;
		s = 0;
	}
	cout << "Fuel consumption with chosen speed: " << fuel_consumption << " liters per 100 km" << endl<<endl;
	cout << "Destination result" << endl;
	float dt = 100 / fuel_consumption * fuel;
	if (dt > 360) {
		dt = 360;
	}
	if (speed == 0) {
		dt = 0;
	}
	cout << "Distance traveled: " << dt << " km" << endl;
	int t = dt / speed * 3600;
	if (speed == 0) {
		t = 0;
	}
	cout << "Time spent: " << t << " sec" << endl;
	double m = distance * fuel_consumption / 100;
	if (m >= fuel) {
		m = fuel;
	}
	cout << "Fuel consumed: " << m << " liters" << endl;
	double fr = fuel - m;
	cout << "Fuel remained: " << fr << " liters" << endl;
	cout << "---------------------------------------" << endl;
	if (dt == distance) {
		cout << "Congratulations! You have reached destination point!";
	}
	else {
		cout << "You haven't reached destination point. " << 360 - dt << " km left.";
	}
	return 0;
}