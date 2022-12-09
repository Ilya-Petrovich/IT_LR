#include<iostream>
using namespace std;

double f, s, speed, fuelConsumption, distancetraveled, fuelconsumed, distance = 360, fuelremained, asd;
int timespent;

void start();
void speed_n();
void fuel_n();
void d();
void win_or_lose();

int main()
{
	start();
	distancetraveled = f / (fuelConsumption / 100);
	d();
	timespent = distancetraveled / speed * 3600;
	fuelconsumed = (distancetraveled / 100) * fuelConsumption;
	fuelremained = f - fuelconsumed;

	if (speed == 0) {
		distancetraveled = 0;
		timespent = 0;
		fuelconsumed = 0;
		fuelremained = f;
	}

	cout << "Destination result" << endl;
	cout << "Distance traveled: " << distancetraveled << " km" << endl;
	cout << "Time spent: " << timespent << " sec" << endl;
	cout << "Fuel consumed: " << fuelconsumed << " litres" << endl;
	cout << "Fuel remained: " << fuelremained << " litres" << endl;
	cout << "----------------------------------------" << endl;
	win_or_lose();

}

void start()
{
	cout << "How much fuel do you have at start? ";
	cin >> f;
	if (f >= 0 and f <= 50)
	{
		fuel_n();

		cout << "\nCar stats" << endl;
		cout << "Fuel: " << f << endl;
		cout << "Fuel capacity: 50" << endl;
		cout << "Fuel consumption: 0" << endl;
		cout << "Speed: 0" << endl;
		cout << "Maximum speed: 110" << endl;
		cout << "\nRoute info" << endl;
		cout << "Distance: 360 km" << endl;
		cout << "----------------------------------------" << endl;
		cout << "You have to drive a route 360 km long." << endl;
		cout << "But first you need to check if you have enough fuel." << endl;
		cout <<  endl;
		cout << "What speed will you choose? ";

		cin >> speed;
		speed_n();
		cout << "Your speed before start: " << speed << " km/h" << endl;
		cout << endl;

		s = speed / 10;
		fuelConsumption = s * s / 4 - 4.5 * s + 30;

		cout << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km.\n" << endl;

	}

	else{
		cout << "\nInvalid data.\n";
		exit(0);
	}
}

void speed_n()
{
	if (speed < 0) {
		cout << "\nInvalid data.\n";
		exit(0);
	}
	
	else if (speed > 110)
	{
		speed = 110;
	}

	else
	{
		speed = speed;
	}
}

void fuel_n()
{
	if (f < 25)
	{
		f += 25;
	}

	else
	{
		f = f;
	}
}

void d()
{
	if (distancetraveled > 360)
	{
		distancetraveled = 360;
	}
}

void win_or_lose() {
	if (distancetraveled == 360) {
		cout << "Congratulations! You have reached destination point!";
	}

	else {
		cout << "You haven't reached destination point. " << 360 - distancetraveled << " km left.";
	}
}

