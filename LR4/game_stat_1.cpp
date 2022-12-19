#include <iostream>

int main()
{
	int fuel, speed;
	float fuelConsumption, fuelConsumed, distance;
	std::cout << "How much fuel do you have at start? ";
	std::cin >> fuel;
	if (fuel < 0 || fuel > 50) {
		std::cout << "\nInvalid data.\n";
		return 1;
	}
	std::cout << "\nCar stats" << "\nFuel: " << fuel << "\nFuel capacity: 50" << "\nFuel consumption: 0" << "\nSpeed: 0" "\nMaximum speed: 110";
	std::cout << "\n\nRoute info\nDistance: 360 km";
	std::cout << "\n----------------------------------------";
	std::cout << "\nYou have to drive a route 360 km long.";
	std::cout << "\nBut first you need to check if you have enough fuel.";
	if (fuel < 25) {
		fuel += 25;
		std::cout << "\n\nYour fuel before start: " << fuel;
	}
	std::cout << "\n\nWhat speed will you choose? ";
	std::cin >> speed;
	if (speed < 0) {
		std::cout << "\nInvalid data.\n";
		return 1;
	} else if (speed == 0){
		std::cout << "Your speed before start: " << speed << " km/h\n";
		std::cout << "\nFuel consumption with chosen speed: 0 litres per 100 km";
		std::cout << "\n\nDestination result";
		std::cout << "\nDistance traveled: 0 km";
		std::cout << "\nTime spent: 0 sec";
		std::cout << "\nFuel consumed: 0 litres";
		std::cout << "\nFuel remained: " << fuel << " litres";
		std::cout << "\n----------------------------------------";
		std::cout << "\nYou haven't reached destination point. 360 km left.\n";
		return 0;
	} else if (speed > 110){
		speed = 110;
	}
	std::cout << "Your speed before start: " << speed << " km/h";
	float s = (float)speed / 10;
	fuelConsumption = s * s / 4 - 4.5 * s + 30;
	std::cout << "\n\nFuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km";
	std::cout << "\n\nDestination result";
	distance = fuel / fuelConsumption * 100;
	if (distance > 360) distance = 360;
	fuelConsumed = fuelConsumption * 3.6;
	if(fuelConsumed > fuel) fuelConsumed = fuel;
	std::cout << "\nDistance traveled: " << distance << " km";
	std::cout << "\nTime spent: " << (int)(distance / speed * 3600) << " sec";
	std::cout << "\nFuel consumed: " << fuelConsumed << " litres";
	std::cout << "\nFuel remained: " << fuel - fuelConsumed << " litres";
	std::cout << "\n----------------------------------------";
	if (distance == 360){
		std::cout << "\nCongratulations! You have reached destination point!\n";
	} else { std::cout << "\nYou haven't reached destination point. " << 360 - distance << " km left.\n";}
	return 0;
}
