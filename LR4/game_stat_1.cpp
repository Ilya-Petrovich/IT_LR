#include <iostream>
int main() {

	double fuel = 0, speed, fuelConsumption = 0, time = 0, S = 0;
	std::cout << "How much fuel do you have at start? "; std::cin >> fuel;
	
	if ((fuel < 0) || (50 < fuel)) {
		std::cout << "\nInvalid data.\n";
		return 0;
	}

	std::cout << "\nCar stats\n";
	std::cout << "Fuel: " << fuel << '\n';
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
	}
	std::cout << "Your fuel before start: " << fuel << "\n\n";
	
	std::cout << "What speed will you choose? "; std::cin >> speed;
	if (speed > 110) {
		speed = 110;
	}
	if (speed < 0) {
		std::cout << "\nInvalid data.\n";
		return 0;
	}
	std::cout << "Your speed before start: " << speed << " km/h\n";
	
	if (speed != 0) {
		fuelConsumption = (speed / 10.) * (speed / 10.) / 4. - 4.5 * (speed / 10.) + 30.;
		S = 100. * fuel / fuelConsumption;
		time = S / speed * 60. * 60.;
	}
	std::cout << "\nFuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km\n\n";

	std::cout << "Destination result\n";
	if (S >= 360) {
		float remained = fuel - 3.6 * fuelConsumption;
		remained = int(remained * 1000000) / 1000000.;
		std::cout << "Distance traveled: " << 360 << " km\n";
		std::cout << "Time spent: " << int(360 / speed * 60 * 60) << " sec\n";
		std::cout << "Fuel consumed: " << 3.6 * fuelConsumption << " litres\n";
		std::cout << "Fuel remained: " << remained << " litres\n";
		std::cout << "----------------------------------------\n";
		std::cout << "Congratulations! You have reached destination point!\n";
	} else {
		std::cout << "Distance traveled: " << S << " km\n";
		std::cout << "Time spent: " << int(time) << " sec\n";
		float consumed = (speed == 0) ? 0 : fuel;
		float remained = (speed == 0) ? fuel : 0;
		std::cout << "Fuel consumed: " << consumed << " litres\n";
		std::cout << "Fuel remained: " << remained << " litres\n";
		std::cout << "----------------------------------------\n";
		std::cout << "You haven't reached destination point. " << 360. - S << " km left.\n";
	}
	return 0;
}