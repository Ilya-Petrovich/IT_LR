#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main() {// :{  :}

	int  speed, time = 0, fuel, fuel1, maxs = 110, fc = 50, fconsumtion = 0, sbs = 0, fue;
	float distance = 360, fc1, dt = 0, fr, kmleft, speed1, s, fconsumed;
	std::cout << "How much fuel do you have at start? "; std::cin >> fuel; std::cout << std::endl;std::cout<<std::endl;
	fuel1 = fuel;
	fue = fuel;

	if (fuel < (1. / 2 * fc)) {
		fuel += fc * 1. / 2;
		std::cout << "Car stats" << std::endl;
		std::cout << "Fuel: " << fuel << std::endl;
		std::cout << "Fuel capacity: " << fc << std::endl;
		std::cout << "Fuel consumption: " << fconsumtion << std::endl;
		std::cout << "Speed: " << sbs << std::endl;
		std::cout << "Maximum speed: " << maxs << std::endl;

		std::cout << std::endl;
		std::cout << "Route info" << std::endl;
		std::cout << "Distance: " << distance << " km " << std::endl;
		std::cout << "----------------------------------------" << std::endl;

		std::cout << "You have to drive a route 360 km long." << std::endl;
		std::cout << "But first you need to check if you have enough fuel." << std::endl;
		std::cout << std::endl;
		std::cout << "What speed will you choose? "; std::cin >> speed; std::cout << std::endl;
		speed1 = speed;

		if (speed > maxs) {
			speed = maxs;
			speed1 = speed;
		}

		std::cout << "Your speed before start: " << speed << " km/h" << std::endl;
		s = speed1 / 10;
		fc1 = (s * s / 4) - (4.5 * s) + 30;

		if (speed <= 0) {
			fc1 = 0; dt = 0; time = 0;
		}

		std::cout << "Fuel consumption with chosen speed: " << fc1 << " liters per 100 km" << std::endl;
		std::cout << std::endl;

		std::cout << "Destination result" << std::endl;
		dt = fuel / fc1 * 100;

		if (dt > distance) {
			dt = distance;
		}
		if (speed > 0) {
			time = dt / speed * 3600;
			fconsumed = ((dt * fc1) / 100);
			fr = fuel - fconsumed;
		}
		else if (speed <= 0) {
			fr = fue; fconsumed = 0; time = 0; dt = 0;
		}
		std::cout << "Distance traveled: " << dt << " km" << std::endl;
		std::cout << "Time spend: " << time << " sek" << std::endl;
		std::cout << "Fuel consumed: " << fconsumed << " liters" << std::endl;
		std::cout << "Fuel remained: " << fr << " liters" << std::endl;
		std::cout << "----------------------------------------" << std::endl;
		kmleft = distance - dt;

		if (dt == 360) {
			std::cout << "Condratulations! You have reached destination point!";
		}
		else {
			std::cout << "You haven't reached destination point. " << kmleft << " km left.";
		}
	}


	else if (fuel > fc) {
		std::cout << "Invalid data.";
		exit;
	}


	else {
		std::cout << "Car stats" << std::endl;
		std::cout << "Fuel: " << fuel << std::endl;
		std::cout << "Fuel capacity: " << fc << std::endl;
		std::cout << "Fuel consumption: " << fconsumtion << std::endl;
		std::cout << "Speed: " << sbs << std::endl;
		std::cout << "Maximum speed: " << maxs << std::endl;
		std::cout << std::endl;
		std::cout << "Route info" << std::endl;
		std::cout << "Distance: " << distance << " km" << std::endl;
		std::cout << "----------------------------------------" << std::endl;
		std::cout << "You have to drive a route 360 km long." << std::endl;
		std::cout << "But first you need to check if you have enough fuel." << std::endl;
		std::cout << std::endl;
		std::cout << "What speed will you choose? "; std::cin >> speed;
		speed1 = speed;

		if (speed > maxs) {
			speed = maxs;
			speed1 = speed;
		}

		std::cout << "Your speed before start: " << speed << " km/h" << std::endl; std::cout << std::endl;
		s = speed1 / 10;
		fc1 = (s * s / 4) - (4.5 * s) + 30;
		if (speed <= 0) {
			fc1 = 0; dt = 0; time = 0; fr = fue;
		}
		std::cout << "Fuel consumption with chosen speed: " << fc1 << " liters per 100 km" << std::endl;
		std::cout << std::endl;
		std::cout << "Destination result" << std::endl;
		dt = fuel / fc1 * 100;

		if (dt > distance) {
			dt = distance;
		}
		if (speed > 0) {
			time = dt / speed * 3600;
			fconsumed = ((dt * fc1) / 100);
			fr = fuel - fconsumed;
		}
		else if (speed <= 0) {
			fr = fue; fconsumed = 0; time = 0; dt = 0;
		}
		std::cout << "Distance traveled: " << dt << " km" << std::endl;
		std::cout << "Time spend: " << time << " sek" << std::endl;

		if (dt == 360) {
			std::cout << "Fuel consumed: " << fconsumed << " liters" << std::endl;
			std::cout << "Fuel remained: " << fr << " liters" << std::endl;
			std::cout << "----------------------------------------" << std::endl;
			kmleft = distance - dt;
			std::cout << "Condratulations! You have reached destination point!";
		}
		else {
			if (speed <= 0) {
				fr = fue;
			}
			else { fr = 0; }
			std::cout << "Fuel consumed: " << fconsumed << " liters " << std::endl;
			std::cout << "Fuel remained: " << fr << " liters" << std::endl;
			std::cout << "----------------------------------------" << std::endl;
			kmleft = distance - dt;
			std::cout << "You haven't reached destination point. " << kmleft << " km left.";
		}
	}
}