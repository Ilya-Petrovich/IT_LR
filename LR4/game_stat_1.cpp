// #include <iostream>

// int main() {
// 	int fuel, time;
// 	float consumed, remained, speed, S;
// 	std::cout << "How much fuel do you have at start? "; std::cin >> fuel;

// 	if (fuel > 50 || fuel < 0) {
// 		std::cout << "\nInvalid data.\n";
// 	} else {
// 		std::cout << "\nCar stats";
// 		std::cout << "\nFuel: " << fuel;
// 		std::cout << "\nFuel capacity: 50";
// 		std::cout << "\nFuel consumption: 0";
// 		std::cout << "\nSpeed: 0";
// 		std::cout << "\nMaximum speed: 110\n";
// 		std::cout << "\nRoute info";
// 		std::cout << "\nDistance: 360 km";
// 		std::cout << "\n----------------------------------------";
// 		std::cout << "\nYou have to drive a route 360 km long.";
// 		std::cout << "\nBut first you need to check if you have enough fuel.";

// 		if (fuel < 25) {
// 			fuel += 25;
// 			std::cout << "\n\nYour fuel before start: " << fuel;
// 		}

// 		std::cout << "\n\nWhat speed will you choose? "; std::cin >> speed;

// 		if (speed < 0) {
// 			std::cout << "\nInvalid data.\n";
// 			return 0;
// 		} else if (speed > 110) {
// 				speed = 110;
// 			}

// 		std::cout << "Your speed before start: " << speed << " km/h" << std::endl;

// 		float s = speed / 10;
// 		float fuelConsumption = (s == 0 ? 0 : s * s / 4 - 4.5 * s + 30);
// 		float need_fuel = fuelConsumption * 3.6;
// 		if (need_fuel <= fuel) {
// 			S = (speed == 0 ? 0 : fuel / fuelConsumption * 100);
// 			if (S > 360) {
// 				S = 360;
// 			}
// 			time = (speed == 0 ? 0 : (int)((S / speed) * 3600));
// 			consumed = fuelConsumption * 3.6;
// 			remained = fuel - consumed;
// 		} else {
// 			if (fuelConsumption != 0) {
// 				S = fuel / fuelConsumption * 100;
// 				if (S > 360) {
// 					S = 360;
// 				}
// 				consumed = fuel - remained;
// 				time = (speed == 0 ? 0 : (int)((S / speed) * 3600));
// 				remained = (fuel - consumed >= 0 ? fuel - consumed : 0);

// 			} else {
// 				S = 0;
// 				consumed = 0;
// 				time = 0;
// 				remained = fuel;
// 			}
// 		}

// 		if (speed != 0) {
// 			std::cout << "\nFuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km" << std::endl;
// 		} 

// 		std::cout << "\nDestination result" << std::endl;
// 		if (speed != 0) {
// 			std::cout << "Distance traveled: " << S << " km" << std::endl;
// 		} else {
// 			S = 0;
// 			consumed = 0;
// 			time = 0;
// 			std::cout << "\nDistance traveled 0 km";
// 		}

// 		std::cout << "Time spent: " << time << " sec" << std::endl;
// 		std::cout << "Fuel consumed: " << consumed << " litres" << std::endl;
// 		std::cout << "Fuel remained: " << remained << " litres" << std::endl;
// 		std::cout << "----------------------------------------" << std::endl;
		
// 		if (S == 360 || S > 360) {
// 			std::cout << "Congratulations! You have reached destination point!\n";
// 		} else if (S == 0) {
// 			std::cout << "You haven't reached destination point. 360 km left.\n";
// 		} else if (S < 360) {
// 			std::cout << "You haven't reached destination point. " << ((((360 - S) * 10000) / 10000)) << " km left.\n";
// 		}
// 	}
// return 0;
// }

#include <iostream>

int main() {
	int fuel, time;
	float speed, fuelConsumption, spatium;

	std::cout << "How much fuel do you have at start? "; std::cin >> fuel;   
	
	if ((fuel < 0) or (fuel > 50)) {
		std::cout << "\nInvalid data.\n";
		return 0;
	}

	std::cout << "\nCar stats";
	std::cout << "\nFuel: " << fuel;
	std::cout << "\nFuel capacity: 50";
	std::cout << "\nFuel consumption: 0";
	std::cout << "\nSpeed: 0";
	std::cout << "\nMaximum speed: 110\n";
	std::cout << "\nRoute info";
	std::cout << "\nDistance: 360 km";
	std::cout << "\n----------------------------------------";
	std::cout << "\nYou have to drive a route 360 km long.";
	std::cout << "\nBut first you need to check if you have enough fuel.";

	if (fuel < 25) {
		fuel += 25;
		std::cout << "\n\nYour fuel before start: " << fuel;
	}

	std::cout << "\n\nWhat speed will you choose? "; std::cin >> speed;

	if (speed < 0) {
		std::cout << "\nInvalid data.\n";
		return 0;
	}

	if (speed > 110) {
		speed = 110;
	}

	std::cout << "Your speed before start: " << speed << " km/h\n";

	float s = speed / 10.0;
	float consumed;
	float remained;

	if (speed == 0) {
		fuelConsumption = 0, spatium = 0, time = 0, consumed = 0, remained = fuel;
	} else {
		fuelConsumption = s * s / 4.0 - 4.5 * s + 30.0;
		consumed = 3.6 * fuelConsumption;
		remained = fuel - consumed;
		spatium = 100.0 * fuel / fuelConsumption;
		time = spatium / speed * 60.0 * 60.0;
	}

	std::cout << "\nFuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km\n";
	std::cout << "\nDestination result\n";

	if (spatium >= 360) {
		spatium = 360;
		std::cout << "Distance traveled: " << 360 << " km\n";
		std::cout << "Time spent: " << int(360 / speed * 60 * 60) << " sec\n";
		std::cout << "Fuel consumed: " << consumed << " litres\n";
		std::cout << "Fuel remained: " << remained << " litres\n";
		std::cout << "----------------------------------------\n";
		std::cout << "Congratulations! You have reached destination point!\n";
		return 0;
	}
	remained = 0;
	std::cout << "Distance traveled: " << spatium << " km\n";
	std::cout << "Time spent: " << int(time) << " sec\n";
	std::cout << "Fuel consumed: " << fuel << " litres\n";
	std::cout << "Fuel remained: " << remained << " litres\n";
	std::cout << "----------------------------------------\n";
	std::cout << "You haven't reached destination point. " << 360.0 - spatium << " km left.\n";
}
