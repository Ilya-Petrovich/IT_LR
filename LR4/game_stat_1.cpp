#include <iostream>
using namespace std;
int main()
{
	double t, mt = 50, fuelConsumption, dm, rt, ot, s, d = 360;
	int ms = 110, speed, time;
	cout << "How much do you have at start? ";
	cin >> t;
	if (t >= 0 && t <= 50)
	{
		cout << "\nCar stats" << endl;
		cout << "Fuel: " << t << endl;
		cout << "Fuel capacity: " << mt << endl;
		cout << "Fuel consumption: 0" << endl;
		cout << "Speed: 0" << endl;
		cout << "Maximum speed: " << ms << endl;
		cout << "\nRoute info" << endl;
		cout << "Distance: 360 km" << endl;
		cout << "\nYou have to drive a route 360 km long." << endl;
		cout << "But first you need to check if you have enough fuel." << endl;
		if (t < mt / 2)
		{
			t = t + mt / 2;
			cout << "Your fuel before start: " << t << endl;
		}
		cout << "\nWhat speed will you choose? ";
		cin >> speed;
		if (speed < 0)
		{
			cout << "Invalid data" << endl;
			return 0;
		}
		if (speed > 110)
		{
			speed = 110;
		}
		cout << "Your speed before start: " << speed << " km/h" << endl;
		if (speed == 0)
		{
			fuelConsumption = 0;
			cout << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km" << endl;
			cout << "\nDestination result" << endl;
			d = 0;
			cout << "Distance traveled: " << d << " km" << endl;
			time = 0;
			cout << "Time spent: " << time << " sec" << endl;
		}
		else
		{
			s = (double)speed / 10;
			fuelConsumption = s * s / 4 - 4.5 * s + 30;
			cout << "\nFuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km" << endl;
			dm = t / fuelConsumption * 100;
			if (dm < d)
			{
				d = dm;
			}
			time = d / speed * 3600;

			cout << "\nDestination result" << endl;
			cout << "Distance traveled: " << d << " km" << endl;
			cout << "Time spend: " << time << " sec " << endl;
		}
		rt = fuelConsumption / 100 * d;
		ot = t - rt;
		cout << "Fuel consumed: " << rt << " litres" << endl;
		cout << "Fuel remained: " << ot << " litres" << endl;
		if (d == 360)
		{
			cout << "\nCongratulations! You have reached destination point!" << endl;
		}
		else
		{
			cout << "\nYou haven't reached destination point. " << 360 - d << " km left." << endl;
		}
	}
	else
	{
		cout << "\nInvalid data";
	}
	return 0;
}