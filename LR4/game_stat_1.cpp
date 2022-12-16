#include <iostream>

int main()
{
	int fuel, speed = 0, maxspeed = 110, time = 0, fuelcap = 50;
	double dist = 360, fuelcons = 0, dtraveled = 0, s, cfuel = 0;

	std::cout << "How much fuel do you have at start? "; cin >> fuel;
	
	if (fuel < 0 or fuel > 50)
	{
		std::cout << std::std::endl << std::std::endl << "Invalid data";
		return 0;
	}

	std::cout << std::endl << std::endl << "Car stats" << std::endl;
	std::cout << "Fuel: " << fuel << std::endl;
	std::cout << "Fuel capacity: " << fuelcap << std::endl;
	std::cout << "Fuel consumption: " << fuelcons << std::endl;
	std::cout << "Fuel: " << fuel << std::endl;
	std::cout << "Speed: " << speed << std::endl;
	std::cout << "Maximum speed: " << maxspeed << std::endl << std::endl;
	std::cout << "Rout info" << std::endl;
	std::cout << "Distance: " << dist << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	std::cout << "You have to drive a route " << dist << " km long." << std::endl;
	std::cout << "But first you need to check if you have enough fuel." << std::endl << std::endl;

	if (fuel < fuelcap * 0.5)
	{
		fuel += fuelcap * 0.5;
		std::cout << "Your fuel before start: " << fuel << " litres" << std::endl << std::endl;
	}

	std::cout << "What speed will you choose? "; cin >> speed;

	if (speed < 0)
	{
		std::cout << std::endl << std::endl << "Invalid data";
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

	std::cout << "Your speed before start: " << speed << " km/h" << std::endl << std::endl;
	std::cout << "Fuel comsumption with choosen speed: " << fuelcons << " litres per 100 km" << std::endl << std::endl;
	std::cout << "Destination result" << std::endl;
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

	std::cout << "Distance traveled: " << dtraveled << " km" << std::endl;
	std::cout << "Time spent: " << time << " sec" << std::endl;
	std::cout << "Fuel consumed: " << cfuel << " litres" << std::endl;
	std::cout << "Fuel remained: " << fuel - cfuel << " litres" << std::endl;
	std::cout << "----------------------------------------" << std::endl;

	if (dtraveled == dist)
	{
		std::cout << "Congratulations! You have reached destionation point!";
	}
	else std::cout << "You haven't reached destination point. " << dist - dtraveled << " km left.";
	return 0;
}