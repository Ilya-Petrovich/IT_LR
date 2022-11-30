#include<iostream>

int main() {
	float fuel, fuel2 = 0, speed, s, fuelConsuption, time;
	bool f = true;

	std::cout << "How much fuel do you at start? "; std::cin >> fuel;
	std::cout << std::endl;

	if ((fuel < 0) or (fuel > 50)) {
		std::cout << "Invalid data";
		return 0;
	}

	std::cout << "Car stats" << std::endl << "Fuel: " << fuel << std::endl;

	if (fuel < 25) { fuel += 25, f = false; }

	std::cout << "Fuel capacity: 50" << std::endl;
	std::cout << "Fuel consumption: 0" << std::endl;
	std::cout << "Speed: 0" << std::endl;
	std::cout << "Maximum speed: 110" << std::endl;

	std::cout << std::endl;
	std::cout << "Route info" << std::endl;
	std::cout << "Distance: 360 km" << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	std::cout << "You have to drive a route 360 km long." << std::endl;
	std::cout << "But first you need to check if you have enough fuel." << std::endl;
	std::cout << std::endl;

	if (f == 0) { std::cout << "Your fuel before start: " << fuel << std::endl; }

	std::cout << "What speed will you choose? "; std::cin >> speed;

	if (speed < 0) {
		std::cout << "Invalid data.";
		return 0;
	}
	if (speed > 110) speed = 110;

	std::cout << "Your speed before start: " << speed << " km/h" << std::endl;
	//made by programmerfromrussia
	if (speed == 0) fuelConsuption = 0, s = 0, time = 0, fuel2 = fuel, fuel = 0;
	else {
		fuelConsuption = (speed / 10) * (speed / 10) / 4 - 4.5 * (speed / 10) + 30;
		s = 100 * fuel / fuelConsuption;
		time = s / speed * 60 * 60;
	}

	std::cout << "Fuel consumption with chosen speed: " << fuelConsuption << " liters per 100 km" << std::endl;

	std::cout << std::endl;

	std::cout << "Destination result" << std::endl;

	if (s >= 360) {
		std::cout << "Distance traveled: " << 360 << "km" << std::endl;
		std::cout << "Time spend: " << int(360 / speed * 60 * 60) << " sec" << std::endl;
		std::cout << "Fuel consumed: " << 3.6 * fuelConsuption << " liters" << std::endl;
		std::cout << "Fuel remained: " << fuel - 3.6 * fuelConsuption << " liters" << std::endl;
		std::cout << "----------------------------------------" << std::endl;
		std::cout << "Congratulation! You have reached destination point!" << std::endl;
		return 0;
	}

	std::cout << "Distance traveled: " << s << "km" << std::endl;
	std::cout << "Time spend: " << int(time) << " sec" << std::endl;
	std::cout << "Fuel consumed: " << fuel << " liters" << std::endl;
	std::cout << "Fuel remained: " << fuel2 << " liters" << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	std::cout << "You haven't reached destination point. " << 360 - s << " km left.";




}
//made by programmerfromrussia