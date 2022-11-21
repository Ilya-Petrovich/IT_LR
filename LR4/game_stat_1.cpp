#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int fuel, fuel_capacity = 50, fuel_consumption = 0, speed = 0, max_speed = 110, distance = 360, time_spent;
	float distance_traveled, fuelConsumption;
	cout << "How much fuel do you have at start? "; cin >> fuel;
	if (fuel < 0 or fuel > 50)
	{
		cout << "Invalid data.";
	}
	else
	{
	cout << endl;
	cout << "Car stats" << endl;
	cout << "Fuel: " << fuel << endl;
	cout << "Fuel capacity: " << fuel_capacity << endl;
	cout << "Fuel consumption: " << fuel_consumption << endl;
	cout << "Speed: " << speed << endl;
	cout << "Maximum speed: " << max_speed << endl << endl;
	cout << "Route info" << endl;
	cout << "Distance: " << distance << " km" << endl;
	cout << "----------------------------------------" << endl;
	cout << "You have to drive a route " << distance << " km long." << endl;
	cout << "But first you need to check if you have enough fuel." << endl << endl;
	if (fuel < 25)
		{
		fuel = fuel + 25;
		cout << "Your fuel before start: " << fuel << endl << endl;
		}
	cout << "What speed will you choose? "; cin >> speed;
	if (speed < 0)
	{
		cout << "Invalid data.";
	}
	else{
	if (speed > max_speed)
	{
		speed = max_speed;
	}
	cout << "Your speed before start: " << speed << " km/h" << endl;
	float s = float(speed) / 10;
	speed > 0 ? fuelConsumption = s * s / 4 - 4.5 * s + 30 : fuelConsumption = 0;
	cout << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km" << endl << endl;
	cout << "Destination result" << endl;
	if (fuelConsumption > 0){
	if ((float(fuel) / (fuelConsumption / 100)) > 360)
		{distance_traveled = 360;
		time_spent = distance_traveled / speed * 3600;}
	else
		{distance_traveled = (float(fuel) / (fuelConsumption / 100));
		time_spent = distance_traveled / speed * 3600;}
	}
	else{
		distance_traveled = 0;
		time_spent = 0;
	}
	cout << "Distance traveled: " << distance_traveled << " km" << endl;
	cout << "Time spent: " << time_spent << " sec" << endl;
	cout << "Fuel consumed: " << (fuelConsumption / 100) * distance_traveled << " litres" << endl;
	cout << "Fuel remained: " << fuel - ((fuelConsumption / 100) * distance_traveled) << " litres" << endl;
	cout << "----------------------------------------" << endl;
	if (distance_traveled == 360)
		cout << "Congratulations! You have reached destination point!";
	else
		cout << "You haven't reached destination point. " << 360.0 - distance_traveled << " km left.";
	}}
}
