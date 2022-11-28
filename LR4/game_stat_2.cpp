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

	std::cout << "Do you need a reffil? ";
	char answer;
	std::cin >> answer;
	
	if (answer == 'n') {
		std::cout << "Your fuel before start: " << fuel << std::endl;
	}
	else {
		std::cout << "Choose an option." << std::endl;
		std::cout << "a. 10 litres" << std::endl;
		std::cout << "b. 20 litres" << std::endl;
		std::cout << "c. 30 litres" << std::endl;
		std::cout << "d. Custom amount" << std::endl;

		std::cout << " " << std::endl;

		char dop;
		int custom;
		std::cout << "Your choice: ";
		std::cin >> dop;
		switch (dop) {
		case 'a':
			std::cout << "Your fuel before start: " << fuel + 10 << std::endl;
			break;
		case 'b':
			std::cout << "Your fuel before start: " << fuel + 20 << std::endl;
			break;
		case 'c':
			std::cout << "Your fuel before start: " << fuel + 30 << std::endl;
			break;
		case 'd':
			std::cout << "How much fuel do you need? ";
			std::cin >> custom;
			std::cout << "Your fuel before start: " << fuel + custom << std::endl;
			break;
		default:
			std::cout << "There is no such option." << std::endl;
			exit(1);
			break;
		}
	}

	std::cout << " " << std::endl;

	if (fuel > 50) {
		std::cout << "Game over. Too much gas!" << std::endl;
		exit(1);
	}

	double speed;

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

	std::cout << " " << std::endl;

	std::cout << "Type in equation parametrs." << std::endl;
	double a;
	std::cout << "a = ";
	std::cin >> a;
	double b;
	std::cout << "b = ";
	std::cin >> b;
	double c;
	std::cout << "c = ";
	std::cin >> c;

	std::cout << " " << std::endl;

	double s;
	s = speed / 10.;

	double fuelConsumption;

	if (speed == 0) {
		fuelConsumption = 0;
	}
	else {
		fuelConsumption = a * s * s + b * s + c;
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

	std::cout << "Time spent: " << time / 3600 << " h " << time % 3600 / 60 << " min " <<time % 3600 % 60 << " sek" << std::endl;

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

	double optfuelConsumption, optconsumed_fuel, opts, optdistance, ne_optconsumed_fuel;
	int opttime;
	for (double optspeed = 0; optspeed <= 110; optspeed++) {
		opts = optspeed / 10. ;
		optfuelConsumption = a * opts * opts + b * opts + c;
		if (optfuelConsumption < fuelConsumption) {
			fuelConsumption = optfuelConsumption;
			optconsumed_fuel = optfuelConsumption / 100 * distance;
			speed = optspeed;
			opttime = distance / speed * 3600;
			optdistance = fuel / optfuelConsumption * 100;
			ne_optconsumed_fuel = optfuelConsumption / 100 * optdistance;
			//opttime = optdistance / speed * 3600;
		}
	}

	std::cout << " " << std::endl;

	std::cout << "The optional speed for that car is " << speed << " km/h." << std::endl;
	std::cout << "With that speed:" << std::endl;
	std::cout << "   Fuel consumption would be " << fuelConsumption << " l per 100 km." << std::endl;
	if (optdistance < 360) {
		std::cout << "   You'd need " << ne_optconsumed_fuel << " l of fuel to reach your destination." << std::endl;
		std::cout << "   You wouldn't reach your destination anyway, but you could drive " << optdistance - distance << " kms more." << std::endl;
	}
	else {
		std::cout << "   You'd need " << optconsumed_fuel << " l of fuel to reach your destination." << std::endl;
		std::cout << "   You could save " << consumed_fuel - optconsumed_fuel << " l of fuel." << std::endl;
		std::cout << "   It would take " << opttime / 3600 << " h " << opttime % 3600 / 60 << " min " << opttime % 3600 % 60 << " sek" << std::endl;
	}
	return 0;
}