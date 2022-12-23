#include <iostream>

int main()
{
	int fuel, speed = 0, maxspeed = 110, time = 0, fuelcap = 50;
	double dist = 360, fuelcons = 0, dtraveled = 0, s, cfuel = 0;

	std::cout << "How much fuel do you have at start? "; std::cin >> fuel;
	
	if (fuel < 0 or fuel > 50)
	{
		std::cout << "\nInvalid data.\n";
		return 0;
	}

	std::cout << "\nCar stats\n";
	std::cout << "Fuel: " << fuel << "\n";
	std::cout << "Fuel capacity: " << fuelcap << "\n";
	std::cout << "Fuel consumption: " << fuelcons << "\n";
	std::cout << "Speed: " << speed << "\n";
	std::cout << "Maximum speed: " << maxspeed << "\n" << "\n";
	std::cout << "Route info" << "\n";
	std::cout << "Distance: " << dist << " km\n";
	std::cout << "----------------------------------------" << "\n";
	std::cout << "You have to drive a route " << dist << " km long." << "\n";
	std::cout << "But first you need to check if you have enough fuel." << "\n" << "\n";

	if (fuel < fuelcap * 0.5)
	{
		fuel += fuelcap * 0.5;
		std::cout << "Your fuel before start: " << fuel << " litres" << "\n" << "\n";
	}

	std::cout << "What speed will you choose? "; std::cin >> speed;

	if (speed < 0)
	{
		std::cout << "\n" << "Invalid data.\n";
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

	std::cout << "Your speed before start: " << speed << " km/h" << "\n" << "\n";
	std::cout << "Fuel comsumption with choosen speed: " << fuelcons << " litres per 100 km" << "\n" << "\n";
	std::cout << "Destination result" << "\n";
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

	std::cout << "Distance traveled: " << dtraveled << " km" << "\n";
	std::cout << "Time spent: " << time << " sec" << "\n";
	std::cout << "Fuel consumed: " << cfuel << " litres" << "\n";
	std::cout << "Fuel remained: " << fuel - cfuel << " litres" << "\n";
	std::cout << "----------------------------------------" << "\n";

	if (dtraveled == dist)
	{
		std::cout << "Congratulations! You have reached destionation point!" << std::endl;
	}
	else std::cout << "You haven't reached destination point. " << dist - dtraveled << " km left." << std::endl;
	return 0;
}