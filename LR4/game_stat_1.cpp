#include <iostream>
int main() {

	float fuel, speed, s, time, S; double consumed, remained;
	std::cout << "How much fuel do you gave at start? "; std::cin >> fuel;
	if ((fuel < 0) || (50 <= fuel)) {
		std::cout << '\n' << "Invalid data.";
		return 0;
	}

	std::cout << '\n' << "Car stats" << '\n';
	std::cout << "Fuel: " << fuel << '\n';
	std::cout << "Fuel capacity: 50" << '\n';
	std::cout << "Fuel consumption: 0" << '\n';
	std::cout << "Speed: 0" << '\n';
	std::cout << "Maximum speed: 110" << '\n' << '\n';
	std::cout << "Route info" << '\n';
	std::cout << "Distance: 360 km" << '\n';
	std::cout << "----------------------------------------" << '\n';
	std::cout << "You have to drive a route 360 km long." << '\n';
	std::cout << "But first you need to check if you have enough fuel." << '\n' << '\n';

	if (fuel < 25) {
		fuel += 25;
	}
	std::cout << "Your fuel before start: " << fuel << '\n' << '\n';

	std::cout << "What speed will you choose? "; std::cin >> speed;
	if (speed > 110)
		speed = 110;
	if (speed < 0) {
		std::cout << "Invalid data.";
		return 0;
	}
	std::cout << "Your speed before start: " << speed << " km/h" << '\n';
	
	s = speed / 10;
	double fuelConsumption = s * s / 4 - 4.5 * s + 30;
	if (speed == 0)
		fuelConsumption = 0;
	std::cout << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km" << '\n' << '\n';

	
	double need_fuel = fuelConsumption * 3.6;
	if (need_fuel <= fuel) {
		S = 360; 
		time = (short int)((S / speed) * 3600);
		consumed = fuelConsumption * 3.6;
		remained = fuel - consumed;
	}
	else {
		if (fuelConsumption != 0) {
			S = (100 / fuelConsumption) * fuel;
			consumed = fuel;
			time = (short int)((S / speed) * 3600);
			remained = 0;
		} else {
			S = 0;
			consumed = 0;
			time = 0;
			remained = fuel;
		}
	}

	std::cout << "Destination result" << '\n';
	std::cout << "Distance traveled: " << S << " km" << '\n';
	std::cout << "Time spent: " << time << " sec" << '\n';
	std::cout << "Fuel consumed: " << consumed << " litres" << '\n';
	std::cout << "Fuel remained: " << remained << " litres" << '\n';
	std::cout << "----------------------------------------" << '\n';

	if (S == 360) {
		std::cout << "Congratulations! You have reached destination point!";
	}
	else {
		int count = ((int)((360 - S) / 0.001));
		if (count % 10 >= 5) {
			count /= 10;
			count += 1;
		}
		else
			count /= 10;
		std::cout << "You haven't reached destination point. " << (float) count / 100 << " km left.";
	}
	return 0;
}