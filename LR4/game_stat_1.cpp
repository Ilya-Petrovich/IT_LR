include <iostream>
using namespace std;
int main() {
	float fuel, speed, s, fuelConsumption, distance_traveled, time_spent, fuel_consumed, fuel_remained, distance_remained;
	cout << "How much fuel do you have at start? ";
	cin >> fuel;
	cout << endl;
	if (fuel >= 0 && fuel <= 50) {
		cout << "Car stats" << endl;
		cout << "Fuel: " << fuel << endl;
		cout << "Fuel capacity: " << 50 << endl;
		cout << "Fuel consumption: " << 0 << endl;
		cout << "Speed: " << 0 << endl;
		cout << "Maximum speed: " << 110 << endl;
		cout << endl;
		cout << "Route info" << endl;
		cout << "Distance: " << 360 << " km" << endl;
		cout << "----------------------------------------" << endl;
		cout << "You have to drive a route 360 km long." << endl;
		cout << "But first you need to check if you have enough fuel." << endl;
		if (fuel < 25) {
			cout << endl;
			fuel = fuel + 25;
			cout << "Your fuel before start: " << fuel << endl;
			cout << endl;
		}
		else {
			cout << endl;
		}
		cout << "What speed will you choose? ";
		cin >> speed;
		if (speed >= 0 && speed <= 110) {
			cout << "Your speed before start: " << speed << " km/h" << endl;
		}
		else if (speed > 110) {
			speed = 110;
			cout << "Your speed before start: " << speed << " km/h" << endl;
		}
		else {
			cout << "Invalid data" << endl;
			system("pause");
			return 0;
		}
		s = speed / 10;
		fuelConsumption = s * s / 4 - 4.5 * s + 30;
		if (speed > 0) {
			cout << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km" << endl;
		}
		else if (speed == 0) {
			fuelConsumption = 0;
			cout << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km" << endl;
		}
		cout << endl;
		cout << "Destination result" << endl;
		distance_traveled = (fuel / fuelConsumption) * 100;
		if (fuelConsumption > 0) {
			if ((distance_traveled <= 360) && (distance_traveled > 0)) {
				cout << "Distance traveled: " << distance_traveled << " km" << endl;
			}
			if (distance_traveled > 360) {
				distance_traveled = 360;
				cout << "Distance traveled: " << distance_traveled << " km" << endl;
			}
		}
		else {
			distance_traveled = 0;
			cout << "Distance traveled: " << distance_traveled << " km" << endl;
		}
		if (distance_traveled == 0 || speed == 0) {
			time_spent = 0;
			cout << "Time spent: " << time_spent << " sec" << endl;
		}
		else {
			time_spent = floor((distance_traveled / speed) * 3600);
			cout << "Time spent: " << time_spent << " sec" << endl;
		}
		fuel_consumed = (fuelConsumption * distance_traveled) / 100;
		cout << "Fuel consumed: " << fuel_consumed << " litres" << endl;
		fuel_remained = fuel - fuel_consumed;
		if (fuel_remained < 0) fuel_remained = 0;
		cout << "Fuel remained: " << fuel_remained << " litres" << endl;
		cout << "----------------------------------------" << endl;
		distance_remained = round((360 - distance_traveled) * 100) / 100;
		if (distance_traveled == 360) {
			cout << "Congratulations! You have reached destination point!" << endl;
		}
		else {
			cout << "You haven't reached destination point. " << distance_remained << " km left." << endl;
		}
	}
	else {
		cout << "Invalid data" << endl;
		system("pause");
		return 0;
	}
	system("pause");
	return 0;
}


