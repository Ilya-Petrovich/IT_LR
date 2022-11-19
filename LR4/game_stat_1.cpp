#include <iostream>
using namespace std;
int main()
{
	int fuel, rast = 360;
	double fconsumption, s, speed, t, speedm, fconsumed, fremained, dt = 360, distremained;
	cout << "How much fuel do you have at start? ";
	cin >> fuel;
	if ((fuel < 0 || fuel > 50))
	{
		cout << "Invalid data";
		return 0;
	}
	cout << endl;
	cout << "Car stats:" << endl;
	cout << "Fuel: " << fuel << endl;
	cout << "Fuel capacity: 50 " << endl;
	cout << "Fuel consumption: 0 " << endl;
	cout << "Speed: 0 " << endl;
	cout << "Maximum speed: 110 " << endl;
	cout << endl;
	cout << "Route info" << endl;
	cout << "Distance: 360 " << " km" << endl;
	cout << "----------------------------------------" << endl;
	cout << "You have to drive a route 360 km long." << endl;
	cout << "But first you need to check if you have enough fuel." << endl;
	cout << endl;
	if (fuel < 25)
	{
		fuel += 25;
		cout << "Your fuel before start: " << fuel << endl;
	}
	cout << endl;
	cout << "What speed will you choose?";
	cin >> speed;
	if (speed < 0) { cout << "invalid data"; return 0; }
	if (speed > 110) { speed = 110; }
	s = speed / 10;
	speedm = speed / 3600 * 1000;
	fconsumption = s * s / 4 - 4.5 * s + 30;
	fconsumed = fconsumption * 3.6;
	fremained = fuel - fconsumed;
	if (fremained < 0)
	{
		fremained = 0;
	}
	if (speed == 0)
	{
		fconsumed = 100;
		dt = 0;
		t = 0;
		fremained = fuel;
		distremained = rast;
		fconsumption = 0;
		fuel = 0;
	}
	cout << "Your speed before start: " << speed << " km / h" << endl;
	cout << endl;
	cout << "Fuel consumption with chosen speed: " << fconsumption << " litres per 100 km" << endl;
	cout << endl;
	cout << "Destination result" << endl;
	if (fuel >= fconsumed)
	{
		t = rast * 1000;
		t = int(t);
		cout << "Distance traveled: " << dt << endl;
		cout << "Time spent: " << t << "sec\n";
		cout << "Fuel consumed: " << fconsumed << " litres\n";
		cout << "Fuel remained: " << fremained << " litres\n";
		cout << "----------------------------------------\n";
		cout << "Congratulations! You have reached destination point!";
	}
	else
	{
		if (dt > 0)
		{
			dt = fuel / fconsumption * 100;
			distremained = rast - dt;
			t = dt * 1000 / speedm;
			t = int(t);
		}
		cout << "Distance traveled: " << dt << endl;
		cout << "\nTime spent: " << t << "sec\n";
		cout << "Fuel consumed: " << fuel << " litres\n";
		cout << "Fuel remained: " << fremained << " litres\n";
		cout << "----------------------------------------\n";
		cout << "You haven't reached destination point. " << distremained << " km left";
	}
	return 0;
}


