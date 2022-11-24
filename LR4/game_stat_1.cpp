#include <iostream>
int main() {
    double fuelConsumption, s, sd, t;
	int fuel, speed;
	std::cout << "How much fuel do you have at start? ";
	std::cin >> fuel;
	if (fuel <= 50 && fuel >= 0) {
	std::cout << "\nCar stats\n";
	std::cout << "Fuel: " << fuel;
	std::cout << "\nFuel capacity: 50\n";
	std::cout << "Fuel consumption: 0\n";
	std::cout << "Speed: 0\n";
	std::cout << "Maximum speed: 110\n\n";
	std::cout << "Route info\n";
	std::cout << "Distance: 360 km\n";
	std::cout << "---------------------------------------\n";
	std::cout << "You have to drive a route 360 km long.\n";
	std::cout << "But first you need to check if you have enough fuel.";
	if (fuel < 25){
	    fuel += 25;
	std::cout << "\n\nYour fuel before start: " << fuel;	
	}
	std::cout << "\n\nWhat speed will you choose? " ;
	std::cin >> speed;
	if (speed >= 0){
	if (speed > 110) {
	    speed = 110;
	    }
	std::cout << "Your speed before start: " << speed << " km/h\n";
	s = float(speed) / 10;
	if (s != 0){
	fuelConsumption = s * float(s) / 4 - 4.5 * s + 30;}
	else{
	    fuelConsumption = 0;
	}
	std::cout << "\nFuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km\n\n";
	std::cout << "Destination result\n";
	if (fuelConsumption != 0){
	sd = float(fuel) / fuelConsumption;
	}
	else{
	    sd = 0;
	}
	if (sd > 3.6) { 
	    sd = 3.6;
	}
	std::cout << "Distance traveled: " << sd * 100 << " km";
	if (sd != 0){
	t = 60 * 60 * (sd * 100 / speed);
	}
	else{
	    t = 0;
	}
	std::cout << "\nTime spent: " << int(t) << " sec";
	std::cout << "\nFuel consumed: " << sd * fuelConsumption << " litres";
	std::cout << "\nFuel remained: " << fuel - (sd * fuelConsumption) << " litres";
	std::cout << "\n---------------------------------------\n";
    	if (sd >= 3.6) {
    	std::cout << "Congratulations! You have reached destination point!";
    	}
    	else{
    	    std::cout << "You haven't reached destination point. " << 360 - (sd *100) << " km left.";
    	}
	}
	else {
	std::cout << "Invalid data.";
}
	}
    else {
	std::cout << "\nInvalid data.";
}

	

}