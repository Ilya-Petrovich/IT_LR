#include <iostream>

int main() {

	int fuel;

	std::cout << "How much fuel do you have at start? ";
	std::cin >> fuel;

	if (fuel < 0 || fuel > 50) {
		std::cout << "Invalid data" << std::endl;
		exit(1);
	}

	std::cout << " " << std::endl;

	std::cout << "Car stats" << std::endl;
	std::cout << "Fuel: " << fuel << std::endl;
	std::cout << "Fuel capacity: 50" << std::endl;
	std::cout << "Fuel consuption: 0" << std::endl;
	std::cout << "Speed: 0" << std::endl;
	std::cout << "Maximum speed: 110" << std::endl;

	std::cout << " " << std::endl;

	std::cout << "Route info" << std::endl;
	std::cout << "Distance: 360 km" << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	std::cout << "You have to drive a rout 360 km long." << std::endl;
	std::cout << "But first you need to check if you nave enough fuel." << std::endl;

	std::cout << " " << std::endl;

	if (fuel < 25) {
		fuel = fuel + 25;
		std::cout << "Your fuel before start: " << fuel << std::endl;
	}

	std::cout << " " << std::endl;

	double speed;
	double s;

	std::cout << "What speed will you choose? ";
	std::cin >> speed;

	if (speed > 110) {
		speed = 110;
	}
	else if (speed < 0) {
		std::cout << "Invalid data." << std::endl;
		exit(1);
	}

	std::cout << "Your speed before start: " << speed << " km/h" << std::endl;

	s = speed / 10;

	double fuelConsumption;

	if (speed == 0) {
		fuelConsumption = 0;
	}
	else {
		fuelConsumption = s * s / 4 - 4.5 * s + 30;
	}

	std::cout << "Fuel consuption with chosen speed: " << fuelConsumption << " litres per 100 km" << std::endl;

	std::cout << " " << std::endl;

	std::cout << "Destination result" << std::endl;

	double distance;

	if (speed == 0) {
		distance = 0;
	}
	else {
		distance = fuel / fuelConsumption * 100;
	}

	if (distance > 360) {
		distance = 360;
	}

	std::cout << "Distance travelled: " << distance << " km" << std::endl;

	int time;

	if (speed == 0) {
		time = 0;
	}
	else {
		time = distance / speed * 3600;
	}

	std::cout << "Time spent: " << time << " sek" << std::endl;

	double consumed_fuel;
	consumed_fuel = fuelConsumption / 100 * distance;

	std::cout << "Fuel consumed: " << consumed_fuel << " litres" << std::endl;
	std::cout << "Fuel remained: " << fuel - consumed_fuel << " litres" << std::endl;
	std::cout << "----------------------------------------" << std::endl;

	if (distance < 360) {
		std::cout << "You haven't destination point. " << 360 - distance << " km left." << std::endl;
	}
	else {
		std::cout << "Congratulations! You have reached destination point!" << std::endl;
	}

	return 0;
}