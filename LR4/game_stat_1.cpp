#include <iostream>

int main() {

	int fuel, t;
	float speed, speed_2, Fuel_consumed, Fuel_cosumption, Fuel_remained, Distance_traveled, km_left;

	std::cout << "How much fuel do you have ay start?" << std::endl;
	std::cin >> fuel;

	if (0 < fuel) {
		std::cout << "Car stats" << std::endl;
	}
	else {
		std::cout << "Invalide date." << std::endl;
		return 0;
	}
	if (fuel < 50) {
	}
	else {
		std::cout << "Invalide date." << std::endl;
		return 0;
	}
	if (fuel == 25) {
		std::cout << "Fuel: " << fuel + 25 << std::endl;
	}
	else {
		std::cout << "Fuel: " << fuel << std::endl;
	}
	std::cout << "Fuel capacity: 50" << std::endl;
	std::cout << "Fuel consumention: 0" << std::endl;
	std::cout << "Speed: 0" << std::endl;
	std::cout << "Maximum speed: 110" << std::endl << std::endl;
	std::cout << "Route info" << std::endl;
	std::cout << "Distance: 360 km" << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << "You have to drive a route 360 km long." << std::endl;
	std::cout << "But first you need to check if you have enough fuel." << std::endl << std::endl;
	std::cout << "What speed will you choose?" << std::endl;

	std::cin >> speed;

	if (speed < 110) {
		std::cout << "Your speed before start: " << speed << " km/h" << std::endl;
	}
	else {
		std::cout << "Your speed before start: 110 km/h" << std::endl;
	}
	speed_2 = speed / 10;

	Fuel_cosumption = speed_2 * speed_2 / 4 - 4.5 * speed_2 + 30;

	std::cout << "Fuel consumption with chosen speed :" << Fuel_cosumption << " liters per 100 km" << std::endl << std::endl;
	std::cout << "Destination result" << std::endl;

	Distance_traveled = fuel / (Fuel_cosumption / 100);

	if (Distance_traveled > 360) {
		std::cout << "Distance traveled : 360 km" << std::endl;
	}
	else {
		std::cout << "Distance traveled: " << Distance_traveled << " km" << std::endl;
	}

	Fuel_consumed = Fuel_cosumption / 100 * 360;
	Fuel_remained = fuel - Fuel_consumed;

	t = 360 / speed * 60 * 60;



	std::cout << "Time spent: " << t << " sec" << std::endl;
	std::cout << "Fuel consumed: " << Fuel_consumed << " liters" << std::endl;

	if (Fuel_remained < 0) {
		Fuel_remained = 0;
	}


	std::cout << "Fuel remained: " << Fuel_remained << " liters" << std::endl;
	std::cout << "------------------------------" << std::endl;

	km_left = 360 - Distance_traveled;

	if (Fuel_remained == 0) {
		std::cout << "You haven't reached destination point. " << km_left << " km left.";
	}
	else {
		std::cout << "Congraturations! You have reached destionation point!" << std::endl;
	}






}