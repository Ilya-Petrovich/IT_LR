#include <iostream>

int main() 
{
	int fuel, time;
	float speed, s, fuelConsumption, distance, fuelConsumed, fuelRemained; 

	std::cout << "How much fuel do you have at start? ";
	std::cin >> fuel;

	if (fuel <= 0 or fuel > 50) {
		std::cout << "\nInvalid data.";
		return 0;
	}

	if (fuel < 25) {
		fuel += 25;
	}

	std::cout << "\nCar stats" << "\nFuel: " << fuel << "\nFuel capacity: 50 \nFuel consumption: 0 \nSpeed: 0 \nMaximum speed: 110 \n ";
	std::cout << "\nRoute info \nDistance: 360 km \n----------------------------------------";
	std::cout << "\nYou have to drive a route 360 km long. \nBut first you need to check if you have enough fuel.";

	if (fuel < 25) {
		std::cout << "\n \nYour fuel before start: " << fuel;
	}

	std::cout << "\n \nWhat speed will you choose? "; 
	std::cin >> speed;
	
	if (speed < 0) {
		std::cout << "\nInvalid data.";
		return 0;
	}
	if (speed > 110) {
		speed = 110;
	}

	s = speed / 10;  
	fuelConsumption = s * s / 4 - 4.5 * s + 30;
	distance = fuel / fuelConsumption * 100;
	if (distance > 360) {distance = 360;}
	time = distance * 3600 / speed;
	fuelConsumed = distance * fuelConsumption / 100;
	if (speed == 0) {
		fuelConsumption = 0;
		distance = 0;
		time = 0;
		fuelConsumed = 0;
	}
	fuelRemained = fuel - fuelConsumed;

	std::cout << "Your speed before start: " << speed << " km/h" << "\n ";
	std::cout << "\nFuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km";	
	std::cout << "\n \nDestination result \nDistance traveled: " << distance << " km" << "\nTime spent: " << time << " sec"; 
	std::cout << "\nFuel consumed: " << fuelConsumed << " litres" << "\nFuel remained: " << fuelRemained << " litres" ;
	std::cout << "\n----------------------------------------";

	if (distance == 360) {
		std::cout << "\nCongratulations! You have reached destination point!";
	} else {
		std::cout << "\nYou haven't reached destination point. " << 360 - distance << " km left.";
	}	

	return 0;
}