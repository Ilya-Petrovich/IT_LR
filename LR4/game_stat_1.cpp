#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int fuel, rast = 360;
	double fuelConsumption, s, speed, t, speedms, fuelconsumed, fuelremained, dt = 360, distremained;
	cout << "How much fuel do you have at start? ";
	cin >> fuel;
	if ((fuel < 0) || (fuel > 50)) { cout << "invalid data"; return 0; }
	cout << "\nCar stats\n";
	cout << "Fuel: " << fuel << endl;
	cout << "Fuel capacity: 50\n";
	cout << "Fuel consumption: 0\n";
	cout << "Speed: 0\n";
	cout << "Maximum speed: 110\n\n";
	cout << "Route info\n";
	cout << "Distance: 360 km\n";
	cout << "-----------------------------------------------------------\n";
	cout << "You have to drive a route 360 km long.\n";
	cout << "But first you need to check if you have enough fuel.\n\n";
	if (fuel < 25) { fuel += 25; cout << "Your fuel before start: " << fuel << "\n\n"; }
	cout << "What speed will you choose? ";
	cin >> speed;
	if (speed < 0) { cout << "invalid data"; return 0; }
	if (speed > 110) { speed = 110; }
	s = speed / 10;
	speedms = speed / 3600 * 1000;
	fuelConsumption = s * s / 4 - 4.5 * s + 30;
	fuelconsumed = fuelConsumption * 3.6;
	fuelremained = fuel - fuelconsumed;
	if (fuelremained < 0) { fuelremained = 0; }
	if (speed == 0) { fuelconsumed = 100; dt = 0; t = 0; fuelremained = fuel; distremained = rast; fuelConsumption = 0; fuel = 0; }
	cout << "Your speed before start: " << speed << " km/h\n";
	cout << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km\n\n";
	cout << "Destination result\n";
	if (fuel >= fuelconsumed)
	{
		t = rast * 1000 / speedms;
		t = int(t);
		cout << "Distance traveled: 360 km\n";
		cout << "Time spent: " << t << " sec\n";
		cout << "Fuel consumed: " << fuelconsumed << " litres\n";
		cout << "Fuel remained: " << fuelremained << " litres\n";
		cout << "--------------------------------------------------------------------\n";
		cout << "Congratulations! You have reached destination point!";
	}
	else
	{
		if (dt > 0)
		{
			dt = fuel / fuelConsumption * 100;
			distremained = rast - dt;
			t = dt * 1000 / speedms;
			t = int(t);
		}
		cout << "Distance traveled: " << dt;
		cout << "\nTime spent: " << t << " sec\n";
		cout << "Fuel consumed: " << fuel << " litres\n";
		cout << "Fuel remained: " << fuelremained << " litres\n";
		cout << "--------------------------------------------------------------------\n";
		cout << "You haven`t reached destination point. " << distremained << " km left";
	}
	return 0;
}