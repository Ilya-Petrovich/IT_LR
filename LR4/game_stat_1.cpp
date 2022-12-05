#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int speed = 0, time = 0, maxSpeed = 110;
	bool pointReached = false;
	float speedMS, fullDistance, fuel, fuelCapacity = 50.0, s = 0, distance = 360, distanceTraveled = 0;
	float fuelConsumption = 0, fuelConsumed = 0;
	cout << "How much fuel do you have at start? "; cin >> fuel;
	cout << endl;
	if (fuel >= 0 && fuel <= fuelCapacity)
	{
		cout << "Car stats" << endl;
		cout << "Fuel: " << fuel << endl;
		cout << "Fuel capacity: " << fuelCapacity << endl;
		cout << "Fuel consumption: " << fuelConsumption << endl;
		cout << "Speed: " << speed << endl;
		cout << "Maximum speed: " << maxSpeed << endl;

		cout << "\nRoute info" << endl;
		cout << "Distance: 360 km" << endl;
		cout << "----------------------------------------" << endl;
		cout << "You have to drive a route 360 km long." << endl;
		cout << "But first you need to check if you have enough fuel." << endl;

		if (fuel < fuelCapacity / 2)
		{
			fuel += fuelCapacity / 2;
			cout << "\nYour fuel before start: " << fuel << endl;
		}

		cout << "\nWhat speed will you choose? "; cin >> speed;

		if (speed < 0)
		{
			cout << endl;
			cout << "Invalid data." << endl;
			return 0;
		}
		else if (speed > maxSpeed)
		{
			speed = maxSpeed;
		}

		cout << "Your speed before start: " << speed << " km/h" << endl;
		s = (float)speed / 10;
		speed == 0 ? fuelConsumption = 0 : fuelConsumption = s * s / 4 - 4.5 * s + 30;
		cout << endl;
		cout << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km" << endl;

		if (fuelConsumption == 0)
		{
			fullDistance = 0;
		}
		else
		{
			fullDistance = fuel / fuelConsumption * 100;
		}
		if (fullDistance < distance)
		{
			distanceTraveled = fullDistance;
			if (fuelConsumption == 0)
			fuelConsumed = 0;
			else
			fuelConsumed = fuel;
			pointReached = false;
		}
		else
		{
			distanceTraveled = distance;
			fuelConsumed = distanceTraveled / 100 * fuelConsumption;
			pointReached = true;
		}

		speedMS = (float)speed / 3.6;
                speed == 0 ? time = 0 : time = (float)distanceTraveled * 1000 / speedMS; 
				
		speed == 0 ? distanceTraveled = 0: distanceTraveled;
		cout << endl;
		cout << "Destination result" << endl;
		cout << "Distance traveled: " << distanceTraveled << " km" << endl;
		cout << "Time spent: " << time << " sec" << endl;
		cout << "Fuel consumed: " << fuelConsumed << " litres" << endl;
		cout << "Fuel remained: " << (int)fuel - fuelConsumed << " litres" << endl;
		cout << "----------------------------------------" << endl;
		if (pointReached)
			cout << "Congratulations! You have reached destination point!" << endl;
		else
			cout << "You haven`t reached destination point. " << distance - distanceTraveled << " km left." << endl;
	}
	else
	{
		cout << "Invalid data." << endl;
		return 0;
	}
}