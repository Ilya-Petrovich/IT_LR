#include <iostream>
using namespace std;
int main() {
	float fuel, need_fuel, speed, s, a, b, c, fuelConsumption, distance_traveled, time_spent;
	int hour, min, sec;
	string otvet, choice;
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
		cout << endl;
		cout << "Do you need a refill? ";
		cin >> otvet;
		if (otvet == "y") {
			cout << endl;
			cout << "Choose an option." << endl;
			cout << "a. 10 litres" << endl;
			cout << "b. 20 litres" << endl;
			cout << "c. 30 litres" << endl;
			cout << "d. custom amount" << endl;
			cout << endl;
			cout << "Your choice: ";
			cin >> choice;
			cout << endl;
			if (choice == "a") fuel = fuel + 10;
			if (choice == "b") fuel = fuel + 20;
			if (choice == "c") fuel = fuel + 30;
			if (choice == "d") {
				cout << "How much fuel do you need? ";
				cin >> need_fuel;
				fuel = fuel + need_fuel;
			}
			if (fuel > 50) {
				cout << "Game over. Too much gas!" << endl;
				system("pause");
				return 0;
			}
			else {
				cout << "Your fuel before start: " << fuel << endl;
			}
		}
		else if (otvet == "n") {
			cout << "Your fuel before start: " << fuel << endl;
			cout << endl;
		}
		else {
			cout << "Invalid data" << endl;
			system("pause");
			return 0;
		}
		cout << endl;
		cout << "What speed will you choose? ";
		cin >> speed;
		cout << "Your speed before start: " << speed << " km/h" << endl;
		cout << endl;
		s = speed / 10;
		cout << "Type in equation parameters." << endl;
		cout << "a = ";
		cin >> a;
		cout << "b = ";
		cin >> b;
		cout << "c = ";
		cin >> c;
		fuelConsumption = a * s * s + b * s + c;
		cout << endl;
		cout << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km" << endl;
		cout << endl;
		cout << "Destination result" << endl;
		distance_traveled = (fuel / fuelConsumption) * 100;
		if (fuelConsumption > 0) {
			if ((distance_traveled < 360) && (distance_traveled > 0)) {
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
			time_spent = ((distance_traveled / speed) * 3600);
			hour = time_spent / 3600;
			min = (time_spent - hour * 3600) / 60;
			sec = time_spent - hour * 3600 - min * 60;
			cout << "Time spent: " << hour << " h " << min << " min " << sec << " sec." << endl;
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


