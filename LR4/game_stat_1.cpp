#include <iostream>
using namespace std;

int main()
{
	int fuel, speed;
	int no_fuel = 0, max_fuel = 50, start_speed = 0, max_speed = 110;
	cout << "How much fuel do you have at start? ";
	cin >> fuel;
	if (fuel < no_fuel || fuel > max_fuel) {
		cout << "\nInvalid data";
		return 1;
	}
	cout << "\nCar stats" << "\nFuel: " << fuel << "\nFuel capacity: " << max_fuel << "\nFuel consumption: 0" << "\nSpeed: " << start_speed << "\nMaximum speed: " << max_speed;
	cout << "\n\nRoute info\nDistance: 360 km";
	cout << "\n----------------------------------------";
	cout << "\nYou have to drive a route 360 km long.";
	cout << "\nBut first you need to check if you have enough fuel.";
	if (fuel < max_fuel / 2) {
		fuel += max_fuel / 2;
		cout << "\n\nYour fuel before start: " << fuel;
	}
	cout << "\n\nWhat speed will you choose? ";
	cin >> speed;
	if (speed <= 0) { //fix speed == 0
		cout << "\n\nInvalid data";
		return 1;
	} else if (speed > max_speed){
		speed = max_speed;
	}
	cout << "Your speed before start: " << speed << " km/h";
	double s = (double)speed / 10;
	double fuelConsumption = s * s / 4 - 4.5 * s + 30;
	cout << "\n\nFuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km";
	cout << "\n\nDestination result";
	double distance = 0;
	int time = 0;
	double speed_sec = (double)speed / 3600; //speed km/sec
	for ( ; ; ) {
		time++;
		distance += speed_sec;
		double fuel_remains = fuel - fuelConsumption * distance / 100;
		if (fuel_remains <= 0) {
			time--;
			cout << "\nDistance traveled: " << distance << " km";
			cout << "\nTime spent: " << time << " sec";
			cout << "\nFuel consumed: " << fuel - fuel_remains << " litres";
			cout << "\nFuel remained: " << fuel_remains << " litres";
			cout << "\n----------------------------------------";
			cout << "\nYou haven't reached destination point. " << 360 - distance << " km left.";
			return 0;
		} else if ((int)distance == 360) {
			time--;
			cout << "\nDistance traveled: " << (int)distance << " km";
			cout << "\nTime spent: " << time << " sec";
			cout << "\nFuel consumed: " << fuel - fuel_remains << " litres";
			cout << "\nFuel remained: " << fuel_remains << " litres";
			cout << "\nCongratulations! You have reached destination point!";
			return 0;
		}
	}
}
