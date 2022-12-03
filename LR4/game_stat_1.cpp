#include <iostream>//N1.1
#include <cmath>
using namespace std;
int main() {
	int fuel, speed, time;
	float fuelConsumption, s, consumed, remained, distance, left;
	cout << "How much fuel do you have at start? "; cin >> fuel;
	if (fuel > 50) {
		cout << endl;
		cout << "Invalid data" << std::endl;
		return 0;
	}
	cout << endl;
	cout << "Car stats" << std::endl;
	cout << "Fuel: " << fuel << std::endl;
	cout << "Fuel capacity: 50 " << std::endl;
	cout << "Fuel consumption: 0 " << std::endl;
	cout << "Speed: 0 " << std::endl;
	cout << "Maximum speed: 110 " << std::endl;
	cout << " " << std::endl;
	cout << "Route info" << std::endl;
	cout << "Distance: 360 km" << std::endl;
	cout << "----------------------------------------" << std::endl;
	cout << "You have to deive a route 360 km long." << std::endl;
	cout << "But first you need to check if you have enough fuel." << std::endl;
	cout << endl;
	if (fuel < 25)
	{
		fuel += 25;
		cout << "Your fuel before start: " << fuel << endl;
		cout << endl;
	}
	cout << "What speed will you choose? "; cin >> speed;
	if (speed < 0) {
		cout << endl;
		cout << "Invalid data";
		return 0;
	}
	if (speed > 110) {
		speed = 110;
	}
	cout << "Your speed before start: " << speed << " km/h" << std::endl;
	if (speed == 0)
	{
		cout << endl;
		cout << "Fuel consumption with chosen speed: 0 litres per 100 km" << std::endl;
		cout << endl;
		cout << "Destination result" << std::endl;
		std::cout << "Distance traveled: 0 km" << std::endl;
		std::cout << "Time spent: 0 sec" << std::endl;
		std::cout << "Fuel consumed: 0 litres" << std::endl;
		std::cout << "Fuel remained: " << fuel << " litres" << std::endl;
		cout << "----------------------------------------" << std::endl;
		cout << "You haven't reached destination point. 360 km left." << std::endl;
		return 0;
	}
	s = (float)speed / 10;
	fuelConsumption = s * s / 4 - 4.5 * s + 30;
	cout << endl;
	cout << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km" << std::endl;
	cout << endl;
	cout << "Destination result" << std::endl;
	distance = fuel / fuelConsumption * 100;
	if (distance >= 360)
	{
		distance = 360;
	}
	time = distance / speed * 60 * 60;
	consumed = fuelConsumption * (float(distance / 100));
	remained = fuel - consumed;
	std::cout << "Distance traveled: " << distance << " km" << std::endl;
	std::cout << "Time spent: " << time << " sec" << std::endl;
	std::cout << "Fuel consumed: " << consumed << " litres" << std::endl;
	std::cout << "Fuel remained: " << remained << " litres" << std::endl;
	cout << "----------------------------------------" << std::endl;
	if (distance >= 360)
	{
		cout << "Congratulations! You have reached destination point!" << std::endl;
	}
	else
	{
		left = 360 - distance;
		cout << "You haven't reached destination point. " << left << " km left." << std::endl;
	}
}