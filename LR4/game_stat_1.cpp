#include <iostream>
using namespace std;
int main() {
	int rasst = 360, t, fuel, maxspeed = 110, maxfuel = 50;
	float Speed, prasst, ostrast = 0, fuelcons, fuelrem;
	cout << "How much fuel do you have at start? "; cin >> fuel;
	if (fuel < 0 || fuel > 50) {
		cout << endl;
		cout << "Invalid data.";
		return 1;
	}
	else {
		if (fuel < maxfuel / 2) {
			fuel += maxfuel / 2;
		}
	}
	cout << endl;
	cout << "Car stats";
	cout << "\nFuel: " << fuel;
	cout << "\nFuel capacity: " << maxfuel;
	cout << "\nFuel consumption: " << 0;
	cout << "\nSpeed: " << 0;
	cout << "\nMaximum speed: " << maxspeed << endl;
	cout << "\nRoute info";
	cout << "\nDistance: " << 360 << " km"  ;
	cout << "\n----------------------------------------"  ;
	cout << "\nYou have to drive a route 360 km long."  ;
	cout << "\nBut first you need to check if you have enough fuel." << endl  ;
	cout << "\nWhat speed will you choose? "; cin >> Speed;
	if (Speed > maxspeed) {
		Speed = maxspeed;
	}
	cout << "Your speed before start: " << Speed << " km/h" << endl ;
	double fuelConsumption = (Speed / 10) * (Speed / 10) / 4 - 4.5 * (Speed / 10) + 30;
	cout << "\nFuel consumption with choosen speed: " << fuelConsumption << " litres per 100 km" << endl ;
	cout << "\nDentination result"  ;
	prasst = (float(fuel) / fuelConsumption) * 100;
	if (prasst < rasst) {
		ostrast = rasst - prasst;
	}
	else {
		prasst = rasst;
		ostrast = 0;
	}
	t = prasst / Speed * 3600;
	fuelcons = prasst * fuelConsumption / 100;
	fuelrem = fuel - fuelcons;
	cout << "\nDistance traveled: " << prasst << " km"  ;
	cout << "\nTime spent: " << t << " sec"  ;
	cout << "\nFuel consumed: " << fuelcons << " litres";
	cout << "\nFuel remained: " << fuelrem  << " litres";
	cout << "\n----------------------------------------"  ;
	if (prasst == rasst) {
		cout << "\nCongratulations! You have reached destination point!";
	}
	else {
		cout << "\nYou haven't reach destination point. " << ostrast << " km left.";
	}
	return 0;


}