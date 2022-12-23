#include<iostream>
#include<ctime>
using namespace std;
void foo();
int randf();
double optimalspeed(double a, double b, double c);
int main() {
	srand(time(0));
	char  zapravka, a1;
	double fuel, s, fuelconsumption, zapravka_d, fuelcapasity = 50, maximumspeed = 110, a, b, c;
	fuel = randf();
	cout << "Do you need a refill? ";
	cin >> a1;
	if (a1 == 'y'){
		cout << "\nChoose an option.\n";
	cout << "a. 10 litres\n";
	cout << "b. 20 litres\n";
	cout << "c. 30 litres\n";
	cout << "d. custom amount\n";
	cin >> zapravka;
	switch (zapravka) {
	case('a'):fuel += 10;
		break;
	case('b'):fuel += 20;
		break;
	case('c'):fuel += 30;
		break;
	case('d'): if (zapravka == 'd') {
		cin >> zapravka_d;
		fuel += zapravka_d;
		break;
	}
	}
	cout << "\nYour choise: " << zapravka;
	cout << "\nYour fuel before start: " << fuel;
	if (fuel > fuelcapasity) {
		cout << "\nGame over.Too much gas!";
		return 0;
	}
	else {
		cout << "\nYour fuel before start: " << fuel;
	}

		cout << "\n\nWhat speed will you choose? ";
		double speed;
		cin >> speed;
		if (speed >= 0) {
			if (speed > maximumspeed) {
				speed = maximumspeed;
			}
			double s = speed / 10;
			fuelconsumption = s * s / 4 - 4.5 * s + 30;
			cout << "\nYour speed before starts: " << speed;

			cout << "\n\nType in equation parameters.";
			cout << "\na = ";
			cin >> a;
			cout << "b = ";
			cin >> b;
			cout << "c = ";
			cin >> c;
			s = speed / 10;
			fuelconsumption = a * s * s + b * s + c;
			double distance = fuel / fuelconsumption * 100;
			double firstdistance = distance;
			double firstfuel = fuelconsumption * distance / 100;
			if (speed != 0) {
				cout << "\nFuel consumption with chosen speed: " << fuelconsumption << " litres per 100 km";
				if (distance > 360) {
					distance = 360;
				}
				double time = distance / speed * 3600;
				cout << "\n\nDestination result ";
				cout << "\nDistance traveled " << distance << " km";
				cout << "\nTime spent: " << floor(time) << " sec";
				cout << "\nFuel cumsumed: " << fuelconsumption * distance / 100 << " litres";
				cout << "\nFuel remained: " << fuel - fuelconsumption * distance / 100 << " litres\n";
				foo();
				if (distance == 360) {
					cout << "\nCongratulation! You have reached destination point ";
				}
				else if (distance < 360) {
					cout << "\nYou haven't reached destination point. " << 360 - distance << " km left.";
					cout << "\n\nThe optimal speed for that car is " << optimalspeed(a, b, c) * 10 << "km/h.";
					s = optimalspeed(a, b, c);
					fuelconsumption = a * s * s + b * s + c;
					distance = fuel / fuelconsumption * 100;
					cout << "\nWith that speed:";
					cout << "\n\tFuel consumption would be " << fuelconsumption << " l per 100 km.";
					cout << "\n\tYou'd need " << fuelconsumption * distance / 100 << " l of fuel to reach your destination";
					cout << "\n\tYou wouldn't reach your destination anyway, but you could drive " << distance - firstdistance << " kms more.";
					return 0;
				}

			}
			else if (speed == 0) {
				cout << "\nFuel consumption with chosen speed: " << "0" << " litres per 100 km";
				cout << "\n\nDestination result ";
				cout << "\nDistance traveled 0 km";
				cout << "\nTime spent: 0 sec";
				cout << "\nFuel cumsumed: 0 litres";
				cout << "\nFuel remained: " << fuel << " litres\n";
				foo();
				cout << "\nYou haven't reached destination point. 360 km left.";
				cout << "\n\nThe optimal speed for that car is " << optimalspeed(a, b, c) * 10 << "km/h.";
				s = optimalspeed(a, b, c);
				fuelconsumption = a * s * s + b * s + c;
				distance = fuel / fuelconsumption * 100;
				cout << "\nWith that speed:";
				cout << "\n\tFuel consumption would be " << fuelconsumption << " l per 100 km.";
				cout << "\n\tYou'd need " << fuelconsumption * distance / 100 << " l of fuel to reach your destination";
				cout << "\n\tYou wouldn't reach your destination anyway, but you could drive " << distance-firstdistance<<" kms more.";
				return 0;
			}
			cout << "\nThe optimal speed for that car is " << optimalspeed(a, b, c) * 10 << "km/h.";
			s = optimalspeed(a, b, c);
			fuelconsumption = a * s * s + b * s + c;
			distance = fuel / fuelconsumption * 100;
			cout << "\nWith that speed:";
			cout << "\n\tFuel consumption would be " << fuelconsumption << " l per 100 km.";
			cout << "\n\tYou'd need " << fuelconsumption * distance / 100 << " l of fuel.";
			cout << "\n\tYou could save " << firstfuel - fuelconsumption * distance / 100 << " l of fuel.";
			double time = distance / speed * 3600;
			int hour = time / 3600;
			int min = (time - hour * 3600) / 60;
			int sec = (time - hour*3600-min*60) / 60;
			cout << "\n\tIt would take " << hour << " h " << min << " min " << sec << " sec.";
		}
		else
		{
			cout << "Invalid data";
		}
	}
	return 0;
}
void foo() {
	for (int i = 0; i < 40; i++) {
		cout << "-";
	}
}
int randf() {
	return rand() % (25 + 1);
}
double optimalspeed(double a, double b, double c) {
	double min=110, fuelconsumption;
	for (int i = 1; i <= 110; i++) {
		fuelconsumption = a * i * i + b*i + c;
		if (fuelconsumption < min) {
			min = fuelconsumption;
		}
	}
	return min;
}