#include <iostream>
int main() {
	int speed, time;
	double fuel, fuelConsumption, s, distance;
	std::cout << "How much fuel do you have at start? ";
	std::cin >> fuel;
	std::cout << "Car stats" << std::endl;
	if (fuel > 0 && fuel <= 50) {
		std::cout << "Fuel: " << fuel << std::endl;
	}
	else {
		std::cout << "Invalid data" << std::endl;
		return 0;
	}
	std::cout << "Fuel capacity: " << "50" << std::endl;
	std::cout << "Fuel consumption: " << "0" << std::endl;
	std::cout << "Speed: " << "0" << std::endl;
	std::cout << "Maximum speed: " << "110" << std::endl;
	std::cout << std::endl;
	std::cout << "Route info" << std::endl;
	std::cout << "Distance: " << "360 km" << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	std::cout << "You have to drive a route 360 km long." << std::endl;
	std::cout << "But first you need to check if you have enough fuel." << std::endl;
	if (fuel < 25) {
		fuel += 25;
		std::cout << "Your fuel before start: " << fuel << std::endl;
	}
	else {
		fuel = fuel;
		std::cout << "Your fuel before start: " << fuel << std::endl;
	}
	std::cout << std::endl;
	std::cout << "What speed will you choose? ";
	std::cin >> speed;
	if (speed > 110) {
		speed = 110;
		std::cout << "Your speed before start: " << speed << " km/h" << std::endl;
	}
	if (speed < 0) {
		std::cout << "Invalid data" << std::endl;
		return 0;
	}
	if (speed == 0) {
		std::cout << "Your speed before start: " << speed << " km/h" << std::endl;
		std::cout << std::endl;
		std::cout << "Fuel consumption with chosen speed: " << "0" << " litres per 100 km" << std::endl;
		std::cout << std::endl;
		std::cout << "Destination result " << std::endl;
		std::cout << "Distance traveled: " << "0 km" << std::endl;
		std::cout << "Time spent: " << "0" << " sec" << std::endl;
		std::cout << "Fuel consumed: " << fuel << " litres" << std::endl;
		std::cout << "Fuel remained: " << "0" << " litres" << std::endl;
		std::cout << "----------------------------------------" << std::endl;
		std::cout << "You haven't reached destrination point. " << "360" << " km left." << std::endl;
		return 0;
	}
	
	if (speed = speed){
		std::cout << "Your speed before start: " << speed << " km/h" << std::endl;
	}
	s = double(speed) / 10;
	fuelConsumption = s * s / 4 - 4.5 * s + 30;
	std::cout << std::endl;
	std::cout << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km" << std::endl;
	std::cout << std::endl;
	std::cout << "Destination result " << std::endl;
	distance = fuel * 100 / fuelConsumption;
	if (distance >= 360) {
		distance = 360;
		std::cout << "Distance traveled: " << "360 km" << std::endl;
	}
	else {
		std::cout << "Distance traveled: " << "360 km" << std::endl;
	}
	time = (distance /speed) * 3600;
	std::cout << "Time spent: " << time << " sec" << std::endl;
	std::cout << "Fuel consumed: " << distance * fuelConsumption / 100 << " litres" << std::endl;
	std::cout << "Fuel remained: " << fuel - (distance * fuelConsumption / 100) << " litres" << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	if (distance >= 360) {
		std::cout << "Congratulations! You have reached destrination point! " << std::endl;
	}
	else {
		std::cout << "You haven't reached destrination point. " << 360 - distance << " km left." << std::endl;
	}
}
