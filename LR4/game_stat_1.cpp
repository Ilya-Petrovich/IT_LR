#include <iostream>

int main(){
	int speed, time, distance = 360, fuel;
	double s, fuelConsumption, fuelConsumed, dis_tr;
	std::cout << "How much fuel do you have at start? ";
	std::cin >> fuel;
	if (fuel < 0 or fuel > 50){
		std::cout << "Invalid data!";
		return 1;
	}
	printf("\nCar stats\nFuel: %d\nFuel capacity: 50\nFuel cosumption: 0\nSpeed: 0\nMaximum speed: 110\n\nRoute info\nDistance: %d km\n-------------------",fuel,distance);
	printf("You have to drive a route 360 km long.\nBut first you need to check if you have enough fuel.\n\nWhat speed will you choose?");
	std::cin >> speed;
	if (speed >= 110)
		speed = 110;
	s = double(speed)/10
	printf("You speed before start: %d km/h",speed);
	fuelConsumption = s*s/4 - 4.5 * s + 30;
	printf()
}