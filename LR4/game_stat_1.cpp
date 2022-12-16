#include <iostream>
using namespace std;

int main()
{
	int fuel, speed = 0, maxspeed = 110, time = 0, fuelcap = 50;
	double dist = 360, fuelcons = 0, dtraveled = 0, s, cfuel = 0;

	cout << "How much fuel do you have at start? "; cin >> fuel;
	
	if (fuel < 0 or fuel > 50)
	{
		cout << endl << endl << "Invalid data";
		return 0;
	}

	cout << endl << endl << "Car stats" << endl;
	cout << "Fuel: " << fuel << endl;
	cout << "Fuel capacity: " << fuelcap << endl;
	cout << "Fuel consumption: " << fuelcons << endl;
	cout << "Fuel: " << fuel << endl;
	cout << "Speed: " << speed << endl;
	cout << "Maximum speed: " << maxspeed << endl << endl;
	cout << "Rout info" << endl;
	cout << "Distance: " << dist << endl;
	cout << "----------------------------------------" << endl;
	cout << "You have to drive a route " << dist << " km long." << endl;
	cout << "But first you need to check if you have enough fuel." << endl << endl;

	if (fuel < fuelcap * 0.5)
	{
		fuel += fuelcap * 0.5;
		cout << "Your fuel before start: " << fuel << " litres" << endl << endl;
	}

	cout << "What speed will you choose? "; cin >> speed;

	if (speed < 0)
	{
		cout << endl << endl << "Invalid data";
		return 0;
	}
	else if (speed > maxspeed)
	{
		speed = maxspeed;
	}

	if (speed == 0)
	{
		fuelcons = 0;
	}
	else
	{
		s = speed / 10.;
		fuelcons = s * s / 4 - 4.5 * s + 30;
	}

	cout << "Your speed before start: " << speed << " km/h" << endl << endl;
	cout << "Fuel comsumption with choosen speed: " << fuelcons << " litres per 100 km" << endl << endl;
	cout << "Destination result" << endl;
	if (speed != 0)
	{
		if (dist * fuelcons / 100 <= fuel)
		{
			dtraveled = dist;
			cfuel = fuelcons / 100 * dist;
		}
		else
		{
			dtraveled = fuel / (fuelcons / 100);
			cfuel = fuel;
		}
		time = dtraveled / speed * 60 * 60;
	}

	cout << "Distance traveled: " << dtraveled << " km" << endl;
	cout << "Time spent: " << time << " sec" << endl;
	cout << "Fuel consumed: " << cfuel << " litres" << endl;
	cout << "Fuel remained: " << fuel - cfuel << " litres" << endl;
	cout << "----------------------------------------" << endl;

	if (dtraveled == dist)
	{
		cout << "Congratulations! You have reached destionation point!";
	}
	else cout << "You haven't reached destination point. " << dist - dtraveled << " km left.";
	return 0;
}