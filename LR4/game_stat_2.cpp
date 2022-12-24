#include <iostream>
#include <cmath>

using namespace std;

int inputAFuel() {
	int fuel;
	cout << "How much fuel do you have at start? ";
	cin >> fuel;
	if (fuel < 0 || fuel > 50) {
		cout << "\nInvalid data";
		exit(1);
	}
	return fuel;
}
void refill(int &fuel) {
	char refillNeed;
	cout << "\n\nDo you need a refill? ";
	cin >> refillNeed;
	switch (refillNeed) {
	case 'y':
		cout << "\nChoose an option.";
		cout << "\na. 10 litres";
		cout << "\nb. 20 litres";
		cout << "\nc. 30 litres";
		cout << "\nd. custom amount";

		cout << "\n\nYour choice: ";
		char refillChoice;
		cin >> refillChoice;

		switch (refillChoice) {
		case 'a':
			fuel += 10;
			cout << "\n";
			break;

		case 'b':
			fuel += 20;
			cout << "\n";
			break;

		case 'c':
			fuel += 30;
			cout << "\n";
			break;

		case 'd':
			cout << "\nHow much fuel do you need? ";
			int refillAmount;
			cin >> refillAmount;
			fuel += refillAmount;
			break;

		default:
			cout << "Invalid data";
			exit(1);
		}
		break;

	case 'n':
		break;

	default:
		cout << "Invalid data";
		exit(1);
	}
}
void outputACarStats(int fuel, int fuelCapacity, double fuelConsumption, int speed, int maxSpeed, int distance) {
	cout << "\nCar stats";
	cout << "\nFuel: " << fuel;
	cout << "\nFuel capacity: " << fuelCapacity;
	cout << "\nFuel consumption: " << fuelConsumption;
	cout << "\nSpeed: " << speed;
	cout << "\nMaximum speed: " << maxSpeed;

	cout << "\n\nRoute info";
	cout << "\nDistance: " << distance << " km\n";

	for (int i = 0; i < 40; i++)
		cout << '-';

	cout << "\nYou have to drive a route " << distance << " km long.";
	cout << "\nBut first you need to check if you have enough fuel.";

}
void outputAFuel(int fuel, int fuelCapacity) {
	cout << "Your fuel before start: " << fuel;

	if (fuel > fuelCapacity) {
		cout << "Game over. Too much gas!";
		exit(1);
	}
}
int inputASpeed(int maxSpeed) {
	int speed;
	cout << "\n\nWhat speed will you choose? ";
	cin >> speed;

	if (speed < 0) {
		cout << "\nInvalid data";
		exit(0);
	}

	if (speed > maxSpeed)
		speed = maxSpeed;

	cout << "Your speed before start: " << speed << " km/h";
	return speed;
}
void inputAParameters(double &a, double &b, double&c) {
	cout << "\n\nType in equation parameters.\n";
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
}
void calculationAFuelConsumption(double& fuelConsumption, int speed, double a, double b, double c) {
	double s = speed / 10.;
	if (speed > 0)
		fuelConsumption = a * s * s + b * s + c;
	else
		fuelConsumption = 0;
}
void calculatingAFuelConsumed(double& fuelConsumed, double fuelConsumption, double distanceTraveled) {
	fuelConsumed = fuelConsumption * distanceTraveled / 100;
}
void calculatingADistanceTraveled(int fuel, double fuelConsumption, int speed, int distance, double& distanceTraveled) {
	if (speed > 0)
		distanceTraveled = fuel / fuelConsumption * 100;
	else
		distanceTraveled = 0;
	if (distanceTraveled > distance)
		distanceTraveled = distance;
}
void calculatingTime(int speed, double distanceTraveled, int& hours, int& minutes, int& seconds) {
	int time;
	if (speed > 0)
		time = (int)(3600 * distanceTraveled / speed);
	else
		time = 0;
	seconds = time % 60;
	minutes = (time / 60) % 60;
	hours = time / 3600;
}

int main() {
	int fuelCapacity = 50;
	double fuelConsumption = 0;
	int speed = 0;
	int maxSpeed = 110;
	int distance = 360;

	int fuel = inputAFuel();

	outputACarStats(fuel, fuelCapacity, fuelConsumption, speed, maxSpeed, distance);

	refill(fuel);

	outputAFuel(fuel, fuelCapacity);

	speed = inputASpeed(maxSpeed);

	double a, b, c;
	inputAParameters(a, b, c);

	calculationAFuelConsumption(fuelConsumption, speed, a, b, c);

	cout << "\n\nFuel consumption with chosen speed: " << fuelConsumption
		<< " litres per 100 km";

	double distanceTraveled;

	calculatingADistanceTraveled(fuel, fuelConsumption, speed, distance, distanceTraveled);

	int hours;
	int minutes;
	int seconds;

	calculatingTime(speed, distanceTraveled, hours, minutes, seconds);

	double fuelConsumed;

	calculatingAFuelConsumed(fuelConsumed, fuelConsumption, distanceTraveled);

	double fuelRemained;
	if (fuel > fuelConsumed)
		fuelRemained = fuel - fuelConsumed;
	else
		fuelRemained = 0;

	cout << "\n\nDestination result";
	cout << "\nDistance traveled: " << distanceTraveled << " km";
	cout << "\nTime spent: " << hours << " h " << minutes << " min "
		<< seconds << " sec.";
	cout << "\nFuel consumed: " << fuelConsumed << " litres";
	cout << "\nFuel remained: " << fuelRemained << " litres\n";

	for (int i = 0; i < 40; i++)
		cout << '-';

	if (distanceTraveled >= distance)
		cout << "\nCongratulations! You have reached destination point!";
	else {
		double distanceLeft = distance - distanceTraveled;

		cout << "\nYou haven't reached destination point. "
			<< distanceLeft << "km left.";
	}


	double optimalSpeed = -5 * b / a;
	double optimalFuelConsumption;
	double optimalDistanceTraveled;
	double optimalFuelConsumed;
	calculationAFuelConsumption(optimalFuelConsumption, optimalSpeed, a, b, c);
	calculatingADistanceTraveled(fuel, optimalFuelConsumption, optimalSpeed, distance, optimalDistanceTraveled);
	calculatingAFuelConsumed(optimalFuelConsumed, optimalFuelConsumption, optimalDistanceTraveled);
	calculatingTime(optimalSpeed, optimalDistanceTraveled, hours, minutes, seconds);

	cout << "\n\nThe optimal speed for that car is " << optimalSpeed << " km/h.";

	cout << "\nWith that speed:";
	cout << "\n\tFuel consumption would be " << fuelConsumption << " l per 100 km.";
	cout << "\n\tYou'd need " << optimalFuelConsumed << " l of fuel to reach your destination.";

	if (optimalDistanceTraveled == distance) {
		cout << "\n\tYou could save " << fuelConsumed - optimalFuelConsumed << " l of fuel.";
		cout << "\n\tIt would take " << hours << " h " << minutes << " min " << seconds << " sec.";
	}
	else {
		cout << "\n\tYou wouldn't reach your destination anyway, but you could drive "
			<< optimalDistanceTraveled - distanceTraveled << " kms more.";
	}
}