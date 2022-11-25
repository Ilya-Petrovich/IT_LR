#include <iostream>
using namespace std;
int main() {
	int fuel, speed = 0;
	cout << "How much fuel do you have at start? "; cin >> fuel; cout << "\n\n";
	if (!(fuel > 0 && fuel < 50)) {
		cout << "Invalid data" << endl;
		return 0;
	}
	cout << "Car stats" << endl;
	cout << "Fuel: " << fuel << endl;
	cout << "Fuel capacity: 50" << endl;
	cout << "Fuel consumption: 0" << endl;
	cout << "Speed: " << speed << endl;
	cout << "Maximum speed: 110\n\n";
	cout << "Distance: 360 km" << endl << "----------------------------------------" << endl;
	cout << "You have to drive a route 360 km long.\n";
	cout << "But first you need to check if you have enough fuel.\n\n";
	cout << "Do you need a refil?\n\n";
	cout << "Chose an option.\n";
	cout << "a. 10 litres\n";
	cout << "b. 20 litres\n";
	cout << "c. 30 litres\n";
	cout << "d. custom amount\n\n";
	char a;
	cout << "Your choice: "; cin >> a;
	int fel = 0;
	switch (a)
	{
	case 'a':
		fuel += 10;
		break;
	case 'b':
		fuel += 15;
		break;
	case 'c':
		fuel += 30;
		break;
	case 'd':
		cout << "How much fuel do you need? "; cin >> fel;
		fuel += fel;
		break;
	default:
		cout << "Input incorect data";
		break;
	}
	if (fuel > 50) {
		cout << "Game over. Too much gas!" << endl;
		return 0;
	}
	cout << "Your fuel before start: " << fuel << endl;
	cout << "What speed will you choose? "; cin >> speed;
	if (speed < 0) {
		cout << "Invalid data" << endl;
		return 0;
	}
	if (speed > 110)
		speed = 110;
	int speed_optimal = 90;
	cout << "Your speed before start: " << speed << " km/h" << endl << endl;
	cout << "Type in equation parameters."<< endl;
	double aa, bb, cc;
	double s = speed / 10.;
	cout << "a = "; cin >> aa;
	cout << "b = "; cin >> bb;
	cout << "c = "; cin >> cc;
	double fuelConsumption = aa * s * s + bb * s + cc;
	s = speed_optimal / 10.;
	double fuelConsumptionO = aa * s * s + bb * s + cc;
	cout << endl << endl;
	cout << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km\n\n";
	cout << "Destinition result\n";
	double S = fuel / fuelConsumption * 100;
	cout << "Distance traveled: " << S << " km\n";
	int time = S / speed;
	cout << "Time spent:" << time % 3600 << " h " << time / 60 % 60 << " min" << time % 60 << " sec.\n";
	cout << "Fuel consumed: " << fuelConsumption * 3.6 << " litres \n";
	cout << "Fuel remained: " << double(fuel) - fuelConsumption * 3.6 << " litres \n";
	if (s >= 360) {
		cout << "----------------------------------------";
		cout << "Congratulations! You have reached destination point!\n\n";
	}
	else {

	}
	cout << "The optimal speed for that car is 90 km/h.\n";
	cout << "With that speed:\n";
	cout << "   Fuel consumption would be " << fuelConsumptionO << " l per 100 km." << endl;
	cout << "   You'd need  " << fuelConsumptionO*3.6 << " of fuel to reach your destination." << endl;
	cout << "   You wouldn't reach your destination anyway, but you could drive " << fuel / fuelConsumptionO * 100 - s
		<< "more" << endl;
	return 0;
}