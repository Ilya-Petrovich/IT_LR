#include <iostream>

int main() {
	int fuel, time;
	float consumed, remained, speed, S;
	std::cout << "How much fuel do you have at start? "; std::cin >> fuel;

	if (fuel > 50 || fuel < 0) {
		std::cout << "\nInvalid data.\n";
	} else {
		std::cout << "\nCar stats\n";
		std::cout << "Fuel: " << fuel << "\n";
		std::cout << "Fuel capacity: 50\n";
		std::cout << "Fuel consumption: 0\n";
		std::cout << "Speed: 0\n";
		std::cout << "Maximum speed: 110\n\n";
		std::cout << "Route info\n";
		std::cout << "Distance: 360 km\n";
		std::cout << "----------------------------------------\n";
		std::cout << "You have to drive a route 360 km long.\n";
		std::cout << "But first you need to check if you have enough fuel.\n\n";

		if (fuel < 25) {
			fuel += 25;
			std::cout << "Your fuel before start: " << fuel << "\n\n";
		}

		std::cout << "What speed will you choose? "; std::cin >> speed;

		if (speed < 0) {
			std::cout << "\nInvalid data.\n";
			return 0;
		} else if (speed > 110) {
				speed = 110;
			}

		std::cout << "Your speed before start: " << speed << " km/h\n";
		float s = speed / 10;
		float fuelConsumption = (s == 0 ? 0 : s * s / 4 - 4.5 * s + 30);
		float need_fuel = fuelConsumption * 3.6;
		if (need_fuel <= fuel) {
			S = (speed == 0 ? 0 : fuel / fuelConsumption * 100);
			if (S > 360) {
				S = 360;
			}
			time = (speed == 0 ? 0 : (int)((S / speed) * 3600));
			consumed = fuelConsumption * 3.6;
			remained = fuel - consumed;
		} else {
			if (fuelConsumption != 0) {
				S = fuel / fuelConsumption * 100;
				if (S > 360) {
					S = 360;
				}
				consumed = fuel - remained;
				time = (speed == 0 ? 0 : (int)((S / speed) * 3600));
				remained = (fuel - consumed >= 0 ? fuel - consumed : 0);

			} else {
				S = 0;
				consumed = 0;
				time = 0;
				remained = fuel;
			}
		}

		if (speed != 0) {
			std::cout << "\nFuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km\n";
		} else {
			std::cout << "\nFuel consumption with chosen speed 0 litres per 100 km\n";
		}

		std::cout << "\nDestination result";

		if (speed != 0) {
			std::cout << "\nDistance traveled: " << S << " km";
		} else {
			S = 0;
			consumed = 0;
			time = 0;
			std::cout << "\nDistance traveled 0 km";
		}

		std::cout << "\nTime spent: " << time << " sec";
		std::cout << "\nFuel consumed: " << consumed << " litres";
		std::cout << "\nFuel remained: " << remained << " litres";
		std::cout << "\n----------------------------------------";
		
		if (S == 360 || S > 360) {
			std::cout << "\nCongratulations! You have reached destination point!\n";
		} else if (S == 0) {
			std::cout << "\nYou haven't reached destination point. 360 km left.\n";
		} else if (S < 360) {
			std::cout << "\nYou haven't reached destination point. " << ((((360 - S) * 10000) / 10000)) << " km left.\n";
		}
	}
return 0;
}
