#include <iostream>

using namespace std;
int main()
{
	int fuel = 0;
	int speed = 0;
	int fuelCapacity = 50;
	int maxSpeed = 110;
	int distance = 360;
	double fuelConsumption = 0;
	float distanceTraveled = 0;
	int time = 0;
	float fuelConsumed = 0;
	float fuelRemained = 0;
	bool isReached = false;
	float distanceRemained = 0;
	string line = "----------------------------------------\n";

	cout << "How much fuel do you have at start? ";
	cin >> fuel;
	cout << endl;
	if (!(fuel >= 0 && fuel <= 50))
	{
		cout << "Invalid data" << endl;
		return 0;
	}

	cout << "Car stats" << endl;
	cout << "Fuel: " << fuel << endl;
	cout << "Fuel capacity: " << fuelCapacity << endl;
	cout << "Fuel consumption: " << fuelConsumption << endl;
	cout << "Speed: " << speed << endl;
	cout << "Maximum speed: " << maxSpeed << endl;
	cout << endl;
	cout << "Route info" << endl;
	cout << "Distance " << distance << " km\n";
	// cout << endl;
	cout << line;
	cout << "You have to drive a route " << distance << " km long." << endl;
	cout << "But first you need to check if you have enought fuel." << endl;

	// if (fuel < fuelCapacity / 2)
	// {
	// 	fuel += fuelCapacity / 2;
	// 	cout << "Fuel low, charging half of tank" << endl;
	// }
	// else
	// 	cout << "Fuel is OK, you can drive";

	cout << endl;
	cout << "What speed will you choose? ";
	cin >> speed;

	if (speed < 0)
	{
		cout << "Invalid data\n";
		return 0;
	}
	else if (speed > maxSpeed)
	{
		cout << "Speed so hight, reduction to maximum" << endl;
		speed = maxSpeed;
	}

	cout << "Your speed before start: " << speed << " km/h\n";
	cout << endl;
	if (speed != 0)
		fuelConsumption = ((double)speed / 10) * ((double)speed / 10) / 4 - 4.5 * ((double)speed / 10) + 30;
	else
		fuelConsumption = 0;
	cout << "Fuel consumption with chosen speed: " << fuelConsumption << " liters per 100 km\n";
	cout << endl;

	if (speed != 0)
		distanceTraveled = fuel / fuelConsumption * 100;
	else
		distanceTraveled = 0;
	if (distanceTraveled >= distance)
	{
		isReached = true;
		distanceTraveled = 360;
	}
	distanceRemained = distance - distanceTraveled;
	if (speed != 0)
		time = distanceTraveled / speed * 3600;
	else
		time = 0;
	fuelConsumed = fuelConsumption * distanceTraveled / 100;
	fuelRemained = fuel - fuelConsumed;

	cout << "Destination result" << endl;
	cout << "Distance travaled: " << distanceTraveled << " km\n";
	cout << "Time spent: " << time << " sec\n";
	cout << "Fuel consumed: " << fuelConsumed << " litres\n";
	cout << "Fuel remained: " << fuelRemained << " litres\n";
	cout << line;
	// cout << endl;

	if (isReached)
	{
		cout << "Congratulations! You have reached destination point!" << endl;
	}
	else
	{
		cout << "You haven't reached destination point. " << distanceRemained << " km left." << endl;
	}

	return 0;
}