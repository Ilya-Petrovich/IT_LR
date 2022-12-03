#include<iostream>
#include<iomanip>

int main()
{
	int fuel, timeSpent, speed = 0, distance = 360; std::cout << "How much fuel do you have at start? "; std::cin >> fuel; std::cout;
	bool flag;
	float s, fuelConsumption, distanceTraveled, fuelConsumed, fuelRemined;
	if (fuel >= 50 || fuel < 0) {
		std::cout << "\nInvalid data.\n";
		return 0;
	}
	std::cout << "\nCar stats\nFuel: " << fuel;
	std::cout << "\nFuel capacity: 50\nFuel consumption: 0\n";
	std::cout << "Speed: " << speed << "\nMaximum speed: 110\n\n";
	std::cout << "Route info\nDistance: " << distance << " km\n";
	std::cout << "----------------------------------------\n";
	std::cout << "You have to drive a route " << distance << " km long.\n";
	std::cout << "But first you need to check if you have enough fuel.\n\n";
	
	if (fuel < 25) {
		fuel += 25;
		std::cout << "Your fuel before start: " << fuel << "\n\n";
	}
	
	std::cout << "What speed will you choose? "; std::cin >> speed;
	
	if (speed == 0){
		distanceTraveled = 0;
		timeSpent = 0;
		fuelConsumed = 0;
		fuelRemined = fuel;
		
		std::cout << "Your speed before start: " << speed << " km/h\n\n";
		std::cout << "Fuel consuption with chosen speed: " << fuelConsumption << " liters per 100 km\n";
		std::cout << "\nDestination result\nDistance traveled: " << distanceTraveled << " km\n";
		std::cout << "Time spent: " << timeSpent << " sec\n";
		std::cout << "Fuel consumed: " << fuelConsumed << " liters\n";
		std::cout << "Fuel remined: " << fuelRemined << " liters\n";
		std::cout << "----------------------------------------\n";
		std::cout << "You haven't reached destination point. 360 km left.";
	}
	else {
		if (speed < 0) {
		std::cout << "Invalid data.";
		return 0;
	}
	else if (speed > 110) speed = 110;
	std::cout << "Your speed before start: " << speed << " km/h\n\n";
	
	s = speed / 10., fuelConsumption = s * s / 4 - 4.5 * s + 30, distanceTraveled = fuel / fuelConsumption * 100;
	if (distanceTraveled > 360) distanceTraveled = 360;
	if (speed != 0) timeSpent = distanceTraveled * 1. / speed * 3600;
	else timeSpent = 0;
	
	std::cout << "Fuel consuption with chosen speed: " << fuelConsumption << " liters per 100 km\n";
	std::cout << "\nDestination result\nDistance traveled: " << distanceTraveled << " km\n";
	std::cout << "Time spent: " << timeSpent << " sec\n";
	
	fuelConsumed = distanceTraveled * fuelConsumption / 100, fuelRemined = fuel - fuelConsumed;
	(fuelRemined > 0 && speed != 0) ? flag = true : flag = false;
	if (!flag) fuelRemined = 0;
	
	std::cout << "Fuel consumed: " << fuelConsumed << " liters\n";
	std::cout << "Fuel remined: " << fuelRemined << " liters\n";
	std::cout << "----------------------------------------\n";
	
	if (flag) std::cout << "Congratulation! You have reached destantion point!\n";
	else std::cout << "You haven't reached destination point. " << std::fixed << std::setprecision(2) << distance - distanceTraveled << " km left.\n";
	}
	return 0;
}
