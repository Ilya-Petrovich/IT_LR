#include <iostream>

int main() {
	int fuel, time;
	float consumed, remained, speed, S;
	std::cout << "How much fuel do you have at start? "; 
	std::cin >> fuel;

	if (fuel > 50 || fuel < 0) {
		std::cout << "\nInvalid data.\n";
	} else {
		std::cout << "\nCar stats";
		std::cout << "\nFuel: " << fuel;
		std::cout << "\nFuel capacity: 50";
		std::cout << "\nFuel consumption: 0";
		std::cout << "\nSpeed: 0";
		std::cout << "\nMaximum speed: 110";
		std::cout << "\n\nRoute info";
		std::cout << "\nDistance: 360 km";
		std::cout << "\n----------------------------------------";
		std::cout << "\nYou have to drive a route 360 km long.";
		std::cout << "\nBut first you need to check if you have enough fuel.";

		if (fuel <= 25) {
			fuel += 25;
			std::cout << "\n\nYour fuel before start: " << fuel;
		}

		std::cout << "\n\nWhat speed will you choose? "; 
		std::cin >> speed;

		if (speed < 0) {
			std::cout << "\nInvalid data.";
			return 0;
		} else if (speed > 110) {
				speed = 110;
			}

		std::cout << "Your speed before start: " << speed << " km/h";
		float s = speed / 10;
		float fuelConsumption = s * s / 4 - 4.5 * s + 30;
		float need_fuel = fuelConsumption * 3.6;
		if (need_fuel <= fuel) {
			S = 360;
			time = (int)((S / speed) * 3600);
			consumed = fuelConsumption * 3.6;
			remained = fuel - consumed;
		} else {
			if (fuelConsumption != 0) {
				S = (100 / fuelConsumption) * fuel;
				consumed = fuel;
				time = (int)((S / speed) * 3600);
				remained = 0;
			} else {
				S = 0;
				consumed = 0;
				time = 0;
				remained = 0;
			}
		}

		if (speed != 0) {
			std::cout << "\n\nFuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km";
		} else {
			std::cout << "\n\nFuel consumption with chosen speed 0 litres per 100 km";
		}

		std::cout << "\n\nDestination result";

		if (speed != 0) {
			std::cout << "\nDistance traveled: " << S << " km";
		} else {
			S = 0;
			consumed = 0;
			std::cout << "\nDistance traveled 0 km";
		}

		std::cout << "\nTime spent: " << time << " sec";
		std::cout << "\nFuel consumed: " << consumed << " litres";
		std::cout << "\nFuel remained: " << remained << " litres";
		std::cout << "\n----------------------------------------";
		
		if (S == 360) {
			std::cout << "\nCongratulations! You have reached destination point!";
		} else if (S == 0) {
			std::cout << "\nYou haven't reached destination point. 360 km left.";
		} else if (S < 360) {
			std::cout << "\nYou haven't reached destination point. " << ((((360 - S) * 10000) / 10000)) << " km left.";
		}
	}
return 0;
}
