#include <iostream>
#include <cmath>
using namespace std;
void carStats(double fuel);
int routeInfo(double fuel);
int spee(int speed);
void result(int speed, double fuel, double fuelConsum);
int main()
{
	int speed;
	double fuel, fuelConsum, s;
	std::cout << "How much fuel do you have at start? ";
	std::cin >> fuel;
	std::cout << std::endl;
	if (fuel < 0 || fuel > 50)
	{
		std::cout << "\nInvalid data.";
		return 0;
	}
	carStats(fuel);
	fuel = routeInfo(fuel);
	std::cout << std::endl << "What speed will you choose? ";
	std::cin >> speed;
	speed = spee(speed);
	if (speed != 0)
	{
		s = speed / 10.;
		fuelConsum = s * s / 4 - 4.5 * s + 30;
	}
	else
	{
		fuelConsum = 0;
	}
	std::cout << "Fuel consumption with chosen speed: " << fuelConsum << " litres per 100 km" << std::endl;
	result(speed, fuel, fuelConsum);
	return 0;
}
void carStats(double fuel)
{
	std::cout << "Car stats " << std::endl;
	std::cout << "Fuel: " << fuel << std::endl;
	std::cout << "Fuel capacity: 50" << std::endl;
	std::cout << "Fuel consumption: 0" << std::endl;
	std::cout << "Speed: 0" << std::endl;
	std::cout << "Maximum speed: 110" << std::endl;
}
int routeInfo(double fuel)
{
	std::cout << std::endl << "Route info " << std::endl;
	std::cout << "Distance: 360 km" << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	std::cout << "You have to drive a route 360 km long." << std::endl;
	std::cout << "But first you need to check if you have enough fuel." << std::endl;
	if (fuel < 25)
	{
		fuel += 25;
		std::cout << std::endl << "Your fuel before start: " << fuel << std::endl;
	}
	return fuel;
}
int spee(int speed)
{
	if (speed > 110)
	{
		speed = 110;
	}
	if (speed >= 0)
	{
		std::cout << "Your speed before start: " << speed << " km/h" << std::endl << std::endl;
	}
	else
	{
		std::cout << std::endl << "Invalid data.";
		exit(0);
	}
	return speed;
}
void result(int speed, double fuel, double fuelConsum)
{
	double distance = 0, consum, remain, ostatok;
	int t = 0;
	std::cout << std::endl << "Destination result " << std::endl;
	if (speed > 0)
	{
		distance = fuel / fuelConsum * 100;
	}
	if (distance > 360.)
	{
		distance = 360.;
	}
	std::cout << "Distance traveled: " << distance << " km " << std::endl;
	if (speed > 0)
	{
		t = int(distance * 3600 / speed);
	}
	consum = distance * fuelConsum / 100;
	remain = fuel - consum;
	std::cout << "Time spent: " << t << " sec " << std::endl;
	std::cout << "Fuel consumed: " << consum << " litres " << std::endl;
	std::cout << "Fuel remained: " << remain << " litres " << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	if (distance == 360)
	{
		std::cout << "Congratulations! You have reached destination point! " << std::endl;
	}
	else
	{
		ostatok = 360. - distance;
		std::cout << "You haven't reached destination point. " << ostatok << " km left. ";
	}
}