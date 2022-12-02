#include <iostream>
int main()
{
	int fuel, time;
	float fuelConsumption, s, distance, speed, fuelConsumed, fuelRemained;

	std::cout << "How much fuel do you have at start? ";
	std::cin >> fuel;

	if ((fuel <= 0 or fuel > 50))
	{
		std::cout << "Invalid data";
		return 0;
	}
	if (fuel < 25)
	{
		fuel += 25;
	}

	std::cout << "Car stats:" << std::endl;
	std::cout << "Fuel: " << fuel << std::endl;
	std::cout << "Fuel capacity: 50 " << std::endl;
	std::cout << "Fuel consumption: 0 " << std::endl;
	std::cout << "Speed: 0 " << std::endl;
	std::cout << "Maximum speed: 110 " << std::endl;

	std::cout << "Route info" << std::endl;
	std::cout << "Distance: 360 " << " km" << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	std::cout << "You have to drive a route 360 km long." << std::endl;
	std::cout << "But first you need to check if you have enough fuel." << std::endl;

	if (fuel < 25)
	{
		std::cout << "Your fuel before start: " << fuel << std::endl;
	}

	std::cout << "What speed will you choose?";
	std::cin >> speed;

	if (speed < 0)
	{
		std::cout << "invalid data";
		return 0;
	}
	if (speed > 110)
	{
		speed = 110;
	}
	s = speed / 10;
	fuelConsumption = s * s / 4 - 4.5 * s + 30;
	distance = fuel / fuelConsumption * 100
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

	std::cout << "Your speed before start: " << speed << " km/h" << std::endl;
	std::cout << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km" << std::endl;

	std::cout << "Destination result"
		std::cout << "Distance traveled:" << distance << "km" << std::endl;
	std::cout << "TIme spent:" << time << "sec" << std::endl;
	std::cout << "Fuel consumed:" << fuelConsumed << " litres" << std::endl;
std:cout << "Fuel remained:" << fuelRemained << "litres" << std::endl;
	std::cout << "----------------------------------------"

		if (distance == 360)
		{
			std::cout << "Congratulations! You have reached destination point!";
		}
		else
		{
			std::cout << "You haven't reached destination point. " << 360 - distance << " km left";
		}
	return 0;
}
