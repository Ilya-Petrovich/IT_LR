#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	float fuel, fuelConsumption = 0, s, fuelMax = 50., traveled, fuelConsumpted, a, b, c,
		bestConsumption, bestConsumpted, bestTraveled;
	int colH, colMin, colSec, speed = 0, maxSpeed = 110, distance = 360, col, wastedTime, bestSpeed,
		bestH, bestMin, bestSec, bestTime;
	string needRefil, choice;
	bool isRefil=false;
	cout << "How much fuel do you have at start? ";
	cin >> fuel;
	if (cin.fail()) {
		cout << endl << "Invalid data";
		return 0;
	}
	else {
		if (not((0 <= fuel) and (fuel <= 50))) {
			cout << endl << "Invalid data";
			return 0;
		}
	}
	fuel = (fuelMax / 2 > fuel) ? fuel + (fuelMax / 2) : fuel;

	cout << endl << "Car stats" << endl;
	cout << "Fuel: " << fuel << endl;
	cout << "Fuel capacity: " << fuelMax << endl;
	cout << "Fuel consumption: " << fuelConsumption << endl;
	cout << "Speed: " << speed << endl;
	cout << "Maximum speed: " << maxSpeed << endl << endl << "Route info" << endl << "Distance: " << distance << " km" << endl << "----------------------------------------" << endl;
	cout << "You have to drive a route " << distance << " km long." << endl;
	cout << "But first you need to check if you have enough fuel." << endl << endl;


	// 2 part
	cout << "Do you need a refil? ";
	cin >> needRefil;
	if (needRefil == "y") {
		isRefil = true;
		cout << endl << "Choose an option." << endl << "a. 10 litres" << endl <<
			"b. 20 litres" << endl << "c. 30 litres" << endl << "d. custom amount" << endl << endl;
		cout << "Your choice: ";
		cin >> choice;
		if ((choice != "a") and (choice != "b") and (choice != "c") and (choice != "d")) {
			cout << "Invalid data.";
			return 0;
		}
		cout << endl;
	}
	else {
		if (needRefil != "n") {
			cout << "Invalid data.";
			return 0;
		}
	}
	if (isRefil==true) {
		if (choice == "a") {
			fuel += 10;
			cout << "Your fuel before start: " << fuel << endl << endl;
		}
		else if (choice == "b") {
			fuel += 20;
			cout << "Your fuel before start: " << fuel << endl << endl;
		}
		else if (choice == "c") {
			fuel += 30;
			cout << "Your fuel before start: " << fuel << endl << endl;
		}
		else {
			cout << "How much fuel do you need? ";
			cin >> col;
			if (cin.fail()) {
				cout << "Invalid data.";
				return 0;
			}
			else {
				fuel += col;
				if (fuel > fuelMax) {
					cout << "Your fuel before start: " << fuel << endl;
					cout << "Game Over. Too much gas!";
					return 0;
				}
				cout << "Your fuel before start: " << fuel << endl << endl;
			}
		}
	}
	else {
		cout << "Your fuel before start: " << fuel << endl << endl;
	}
	if (fuel > fuelMax) {
		cout << "Game Over. Too much gas!";
		return 0;
	}

	cout << "What speed will you choose? ";
	cin >> speed;
	if (cin.fail()) {
		cout << "Invalid data.";
		return 0;
	}
	else {
		if (speed < 0) {
			cout << "Invalid data.";
			return 0;
		}
		else {
			speed = (speed > maxSpeed) ? maxSpeed : speed;
		}
	}
	cout << "Your speed before start: " << speed << " km/h" << endl << endl;

	cout << "Type in equation parameters." << endl;
	cout << "a = ";
	cin >> a;
	if (cin.fail()) {
		cout << "Invalid data.";
		return 0;
	}
	cout << "b = ";
	cin >> b;
	if (cin.fail()) {
		cout << "Invalid data.";
		return 0;
	}
	cout << "c = ";
	cin >> c;
	if (cin.fail()) {
		cout << "Invalid data.";
		return 0;
	}

	s = speed / 10.0;
	fuelConsumption = (s == 0) ? 0 : a * s * s + b * s + c;

	cout << endl << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km" << endl << endl;

	
	
	bestSpeed = -b*10/2/a;
	bestConsumption = a * (bestSpeed/10.) * (bestSpeed/10.) + b * (bestSpeed/10.) + c;
	bestTraveled = 100*fuel/bestConsumption;
	if (bestTraveled > 360) {
		bestTraveled = 360;
	}
	bestConsumpted = 3.6*bestConsumption;
	bestTime = (36000*bestTraveled/bestSpeed)/10;
	bestH = bestTime / 3600;
	bestMin = (bestTime - bestH * 3600) / 60;
	bestSec = (bestTime - bestH * 3600 - bestMin * 60);



	traveled = (speed == 0) ? 0 : 100 * fuel / fuelConsumption;
	if (traveled > 360) {
		traveled = 360;
		fuelConsumpted = traveled * fuelConsumption / 100.0;
	}
	else {
		fuelConsumpted = (speed == 0) ? 0 : fuel;
	}

	cout << "Destinatinon result" << endl;
	cout << "Distance traveled: " << traveled << " km" << endl;
	if (speed == 0) {
		cout << "Time spent: 0 h 0 min 0 sec" << endl;
	}
	else {
		wastedTime = int(36000 * traveled / speed) / 10;
		colH = wastedTime / 3600;
		colMin = (wastedTime - colH * 3600) / 60;
		colSec = (wastedTime - colH * 3600 - colMin * 60);
		cout << "Time spent: " << colH << " h " << colMin << " min " << colSec  << " sec." << endl;
	}
	cout << "Fuel consumed: " << fuelConsumpted << " litres" << endl;
	cout << "Fuel remained: " << round(1000*(fuel - fuelConsumpted))/1000 << " litres" << endl << "----------------------------------------" << endl;
	(traveled != 360) ? cout << "You haven't reached destination point. " << round(100*(distance - traveled))/100 << " km left." << endl :
		cout << "Congratulations! You have reached destination point!" << endl;

	cout << endl << "The optimal speed for that car is " << bestSpeed << " km/h." << endl << "With that speed:" << endl;
	cout << "   Fuel consumption would be " << bestConsumption << " l per 100 km." << endl;
	cout << "   You'd need " << bestConsumpted << " l of fuel to reach your destination." << endl;
	if (bestConsumpted > fuel) {
		cout << "   You wouldn't reach your destination anyway, but you could drive " << bestTraveled-traveled << " kms more.";
	} else {
		cout << "   You could save " << round(10*(fuelConsumpted-bestConsumpted))/10 <<  " l of fuel." << endl;
		cout << "   It would take " << bestH << " h " << bestMin << " min " << bestSec  << " sec.";
	}
	
	 
}
