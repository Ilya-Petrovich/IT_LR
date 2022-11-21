#include <iostream>
using namespace std;
int main()
{
	int fuel, time;
	float fuelConsumption, s, distance, speed, fuelConsumed, fuelRemained;cout << "How much fuel do you have at start? ";cin >> fuel;
	if ((fuel <= 0 or fuel > 50))
	{
		cout << "Invalid data";
		return 0;
	}
	if (fuel < 25)
	{
		fuel += 25;
	}
	cout << "Car stats:" << endl;
	cout << "Fuel: " << fuel << endl;
	cout << "Fuel capacity: 50 " << endl;
	cout << "Fuel consumption: 0 " << endl;
	cout << "Speed: 0 " << endl;
	cout << "Maximum speed: 110 " << endl;
	cout << "Route info" << endl;
	cout << "Distance: 360 " << " km" << endl;
	cout << "----------------------------------------" << endl;
	cout << "You have to drive a route 360 km long." << endl;
	cout << "But first you need to check if you have enough fuel." << endl;
	if (fuel < 25)
	{
		cout << "Your fuel before start: " << fuel << endl;
	}
	cout << "What speed will you choose?";
	cin >> speed;
	if (speed < 0)
	{
		cout << "invalid data";
	}
	if (speed > 110)
	{
		speed = 110;
	}
	s = speed / 10;
	fuelConsumption = s * s / 4 - 4.5 * s + 30;
	distance = fuel / fuelConsumption * 100;
	if (distance > 360)
	{
		distance = 360;
	}
	time = distance * 3600 / speed;
	fuelConsumed = distance * fuelConsumption / 100;
	if (speed == 0)
	{
		fuelConsumption = 0;
		distance = 0;
		time = 0;
		fuelConsumed = 0;
	}
	fuelRemained = fuel - fuelConsumed;
	cout << "Your speed before start: " << speed << " km/h" << endl;
	cout << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km" << endl;
	cout << "Destination result";
	cout << "Distance traveled:" << distance << "km" << endl;
	cout << "TIme spent:" << time << "sec" << endl;
	cout << "Fuel consumed:" << fuelConsumed << " litres" << endl;
    cout << "Fuel remained:" << fuelRemained << "litres" << endl;
	cout << "----------------------------------------";
	if (distance == 360)
	{
		cout << "Congratulations! You have reached destination point!";
	}
	else
	{
		cout << "You haven't reached destination point. " << 360 - distance << " km left";
	}
	return 0;
}
