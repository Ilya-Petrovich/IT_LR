#include <iostream>
#include <cmath>
using namespacse std;
int main() {
	int speed = 0, time=0, fuel,fuel1, maxs = 110, fc = 50, fconsomtion = 0,sbs,s,fconsumed;
	float distance=360,fc1,dt,fr,kmleft;
	std::cout << "How much fuel do you have at start?"; std::cin >> fuel >> std::endl;
	fuel1 = fuel;
	if (fuel < (1./2*fc) {
		fuel +=fc*1./2 ;
	}
	else if (fuel > fc) {
		std::cout << "Invalid data";
		exit;
	}
	std::cout << "Car stats" << std::endl;
	std::cout << "Fuel: "<<fuel << std::endl;
	std::cout << "Fuel capacity: " << fc << std::endl;
	std::cout << "Fuel consumption: " << fconsumption << std::endl;
	std::cout << "Speed: " << speed << std::endl;
	std::cout << "Maximum speed: " << maxs << std::endl;

	std::cout << std::endl;
	std::cout << "Poute info" << std::endl;
	std::cout << "Distance: " << distance <<" km"<< std::endl;
	std::cout << "----------------------------------------" << std::endl;

	std::cout << "You have to drive a route 360 km long." << std::endl;
	std::cout << "But first you need to check if you have enough fuel." << std::endl;
	std::cout<<std::endl;
	std::cout << "What speed will you choose?"; std::cin >> speed >> std::endl;
	if (speed > maxs) { speed = maxs; }
	std::cout << "Your speed before start: " << sbs <<" km/h"<< std::endl;
	speed = sbs;
	s = speed / 10;
	fc1 = s * s / 4 - 4.5 * s + 30;
	std::cout << "Fuel consumption with chosen speed: " << fc1 << "liters per 100 km" << std::endl;
	std::cout << std::endl;

	std::cout << "Destination result";
	while (fuel > 0) {

		fuel -= fc1 / 10000;
		dt += speed / 10000;
		fr += fc1 / 10000;
		time += dt / speed;
	}

	
	fconsumed = fuel1 - fr;
	std::cout << "Distance traveled: " << dt << "km" << std::endl;
	std::cout << "Time spend: " << time << " sek" << std::endl;
	std::cout << "Fuel consumed: " << fconsumed << " liters" << std::endl;
	std::cout << "Fuel remained: " << fr << " liters" << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	kmleft = distance - dt;
	if (dt = 360) {
		std::cout << "Condratulations! You have reached destination point!";
	}
	else {
		std::cout << "You haven't reached destination point. " << kmleft << " km left.";
	}
}