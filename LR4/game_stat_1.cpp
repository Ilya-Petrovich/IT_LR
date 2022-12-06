#include <iostream>
int main() 
{
	float fuel, fuels = 0, speed, fcon, rfuel = 0, fuelkonec = 0, dist = 0;
	float time = 0, dist1 = 0;
	std::cout << "How much fuel do you have at start? "; std::cin >> fuel;
	if (fuel > 50 || fuel <= 0) {
		std::cout << "\nInvalid data.";
	} else if (fuel < 25) {
		std::cout << "\nCar stats";
		std::cout << "\nFuel: " << fuel;
		std::cout << "\nFuel capacity: 50";
		std::cout << "\nFuel consumption: 0";
		std::cout << "\nSpeed: 0";
		std::cout << "\nMaximum speed: 110";
		std::cout << "\n\nRoute info";
		std::cout << "\nDistance: 360 km";
		std::cout << "\n----------------------------------------";
		std::cout << "\nYou have to drive a route 360 km long.";
		std::cout << "\nBut first you need to check if you have enough fuel.";
		fuel += 25;
		std::cout << "\n\nYour fuel before start: " << fuel << "km/h";
		std::cout << "\n\nWhat speed will you choose? "; std::cin >> speed;
		if (speed < 0) {
			std::cout << "\nInvalid data.";
		}

		if (speed > 110) {
			speed = 110;
		}

		if (speed >= 0) {
			std::cout << "Your speed before start: " << speed << " km/h";
		}
		float s = speed;
		s = s / 10;
		if (speed == 0) {
			fcon = 0;
		} else {
			fcon = s * s / 4 - 4.5 * s + 30;
		}
		if (speed >= 0) {
			std::cout << "\n\nFuel consumption with chosen speed: " << fcon << " litres per 100 km";
			std::cout << "\n\nDestination result";
			dist = fuel / fcon * 100;
			fcon = fcon / 100;
			if (dist == 360) {
				dist = 360;
				time = dist / speed * 3600;
				fuelkonec = fuel;
				rfuel = 0;
			}
			if (dist > 360) {
				dist = 360;
				time = 360 / speed * 3600;
				rfuel = fuel - 360 * fcon;
				fuelkonec = fuel - rfuel;
			}
			if (dist < 360) {
				time = dist / speed * 3600;
				rfuel = 0;
				fuelkonec = fuel;
				dist1 = 360 - dist;
			}
			if (speed == 0) {
				dist = 0;
				time = 0;
				fuelkonec = 0;
				rfuel = fuel;
				dist1 = 360;
			}
			std::cout << "\nDistance traveled: " << dist << " km";
			std::cout << "\nTime spent: " << int(time) << " sec";
			std::cout << "\nFuel consumed: " << fuelkonec << " litres";
			std::cout << "\nFuel remained: " << rfuel << " litres";
			std::cout << "\n----------------------------------------";
			if (dist == 360) {
				std::cout << "\nCongatulations! You have reached destination point!";
			}
			if (dist < 360) {
				std::cout << "\nYou haven't reached destination point. " << dist1 << " km left.";
			}
		}
	}else {
		std::cout << "\nCar stats";
		std::cout << "\nFuel: " << fuel;
		std::cout << "\nFuel capacity: 50";
		std::cout << "\nFuel consumption: 0";
		std::cout << "\nSpeed: 0";
		std::cout << "\nMaximum speed: 110";
		std::cout << "\n\nRoute info";
		std::cout << "\nDistance: 360 km";
		std::cout << "\n----------------------------------------";
		std::cout << "\nYou have to drive a route 360 km long.";
		std::cout << "\nBut first you need to check if you have enough fuel.";
		std::cout << "\n\nWhat speed will you choose? "; std::cin >> speed;
		if (speed < 0) {
			std::cout << "\nInvalid data.";
		}
		if (speed > 110) {
			speed = 110;
		}
		if (speed >= 0) {
			std::cout << "Your speed before start: " << speed << " km/h";
		}
		float s = speed;
		s = s / 10;
		if (speed == 0) {
			fcon = 0;
		}else {
			fcon = s * s / 4 - 4.5 * s + 30;
		}
		if (speed >= 0) {
			std::cout << "\n\nFuel consumption with chosen speed: " << fcon << " litres per 100 km";
			std::cout << "\n\nDestination result";
			dist = fuel / fcon * 100;
			fcon = fcon / 100;
			if (dist == 360) {
				dist = 360;
				time = dist / speed * 3600;
				fuelkonec = fuel;
				rfuel = 0;
			}
			if (dist > 360) {
				dist = 360;
				time = 360 / speed * 3600;
				rfuel = fuel - 360 * fcon;
				fuelkonec = fuel - rfuel;
			}
			if (dist < 360) {
				time = dist / speed * 3600;
				rfuel = 0;
				fuelkonec = fuel;
				dist1 = 360 - dist;
			}
			if (speed == 0) {
				dist = 0;
				time = 0;
				fuelkonec = 0;
				rfuel = fuel;
				dist1 = 360;
			}
			std::cout << "\nDistance traveled: " << dist << " km";
			std::cout << "\nTime spent: " << int(time) << " sec";
			std::cout << "\nFuel consumed: " << fuelkonec << " litres";
			std::cout << "\nFuel remained: " << rfuel << " litres";
			std::cout << "\n----------------------------------------";
			if (dist == 360) {
				std::cout << "\nCongatulations! You have reached destination point!";
			}
			if (dist < 360) {
				std::cout << "\nYou haven't reached destination point. " << dist1 << " km left.";
			}
		}
	}
}