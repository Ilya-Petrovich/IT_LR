#include<iostream>
#include<cmath>

using namespace std;
int main() {
	int fuel, speed, timefin;
	float dis = 360, time, s, fc, fcon, frem, disne, disno;
	std::cout << "How much fuel do you have at start? "; std::cin >> fuel;
	if (fuel > 50 || fuel < 0) {
		std::cout << "\nInvalid data.\n"; 
	}
	else {
		std::cout << "\nCar stats\n";
		std::cout << "Fuel: " << fuel << "\n";
		std::cout << "Fuel capacity: " << 50 << "\n";
		std::cout << "Fuel consumption: " << 0 << "\n";
		std::cout << "Speed: " << 0 << "\n";
		std::cout << "Maximum speed: " << 110 << "\n\n";
		std::cout << "Route info\n";
		std::cout << "Distance: 360 km\n";
		std::cout << "----------------------------------------\n";
		std::cout << "You have to drive a route " << dis << " km long.\n";
		std::cout << "But first you need to check if you have enough fuel.\n\n";
		if (fuel < 25) {
			fuel = fuel + 25;
			std::cout << "Your fuel before start: " << fuel << "\n\n";
		}
		std::cout << "What speed will you choose? "; std::cin >> speed;
		if (speed > 110) speed = 110;
		if (speed == 0) {
			std::cout << "Your speed before start: " << speed << " km/h\n\n";
			std::cout << "Fuel consumption with chosen speed: " << 0 << " litres per 100 km\n\n";
			std::cout << "Destination result\n";
			std::cout << "Distance traveled: " << 0 << " km\n";
			std::cout << "Time spent: " << 0 << " sec\n";
			std::cout << "Fuel consumed: " << 0 << " litres\n";
			std::cout << "Fuel remained: " << fuel << " litres\n";
			std::cout << "----------------------------------------\n";
			std::cout << "You haven't reached destination point. " << dis << " km left.\n";
		}
		else if (speed < 0) {
			std::cout << "\nInvalid data.\n";
			return 0;
		}
		else if (speed > 0 && speed <= 110) {
			std::cout << "Your speed before start: " << speed << " km/h\n\n";
			s = (float)speed / 10;
			fc = ((s * s) / 4 - (4.5 * s)) + 30;
			std::cout << "Fuel consumption with chosen speed: " << fc << " litres per 100 km\n\n";
			std::cout << "Destination result\n";
			if (fuel - fc * 3.6 > 0) {
				std::cout << "Distance traveled: 360 km\n";
				time = dis / speed;
				timefin = time * 3600;
				std::cout << "Time spent: " << timefin << " sec\n";
				fcon = fc * 3.6;
				frem = fuel - fcon;
				std::cout << "Fuel consumed: " << fcon << " litres\n";
				std::cout << "Fuel remained: " << frem << " litres\n";
				std::cout << "-----------------------------------------\n";
				std::cout << "Congratulations! You have reached destrination point!\n";
			}
			else {
				disne = ((fc * 3.6 - fuel) * 360) / (fuel + (fc * 3.6 - fuel));
				disno = 360 - disne;
				std::cout << "Distance traveled: " << disno << " km\n";
				time = disno / speed;
				timefin = time * 3600;
				std::cout << "Time spent: " << timefin << " sec\n";
				std::cout << "Fuel consumed: " << fuel << " litres\n";
				std::cout << "Fuel remained: " << 0 << " litres\n";
				std::cout << "----------------------------------------\n";
				std::cout << "You haven't reached destination point. " << disne << " km left.\n";
			}
		}
	}
	return 0;
}

