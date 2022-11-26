#include <iostream>
#include <cmath>


int main() {
	int fuel;
	float s, speed, fuelconsumption, distance;
	std::cout << "How much fuel do you have at start? "; std::cin >> fuel;
	if ( fuel < 0 || fuel > 50) {
		std::cout << "Invalid data.";
		return 0;
	} 
	std::cout << "Car stats" << std::endl << "Fuel: " << fuel << std::endl << "Fuel capacity: 50" << std::endl << "Fuel consumption: 0" << std::endl << "Speed: 0" << std::endl << "Maximum speed: 110" << std::endl << std::endl;
	std::cout << "Route info" << std::endl << "Distance: 360 km" << std::endl << "----------------------------------------" << std::endl;
	std::cout << "You have to drive a route 360 km long." << std::endl << "But first you need to check if you have enough fuel." << std::endl << std::endl;
	if (fuel < 25 ) { std::cout << "Your fuel before start: " << fuel + 25 <<  std::endl << std::endl;
	fuel = fuel + 25;
	}
	std::cout << "What speed will you choose? "; std::cin >> speed;
	if ( speed < 0 || speed > 110) { 
		std::cout << "Invalid data";
		return 0;
	}
	std::cout << "Your speed before start: " << speed << " km/h" << std::endl;
	
	s = speed / 10;
	
	if (speed == 0) { fuelconsumption = 0;
	} else { fuelconsumption = s * s / 4 - 4.5 * s + 30;
	}
	
	std::cout << "Fuel consumption with chosen speed: " << fuelconsumption << " litres per 100 km" << std::endl << std::endl;
	std::cout << "Destination result" << std::endl;
	if (speed == 0) { distance = 0;
	} else { distance = fuel / fuelconsumption * 100;
	}
	
	
	if ( distance >= 360 ) {
		distance = 360;
		std::cout << "Distance traveled: 360 km" << std::endl;	
	} else { std::cout << "Distance traveled: " << distance  << " km" << std::endl;
	}
	if (speed == 0) { std::cout << "Time spent: " << 0 << " sec" << std::endl;
	} else { std::cout << "Time spent: " << int(distance / speed * 3600) << " sec" << std::endl;
	}
	
	
	std::cout << "Fuel consumed: " << distance * fuelconsumption / 100 << " litres" << std::endl;
	std::cout << "Fuel remained: " << fuel - distance * fuelconsumption / 100 << " litres" << std::endl << "----------------------------------------" << std::endl;
	if ( distance >= 360 ) {
		
		std::cout << "Congratulations! You have reached destination point!" << std::endl;	
	} else { std::cout << "You haven't reached destination point. " << 360 - distance << " km left.";
	
}
}
