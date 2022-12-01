#include <iostream>

using namespace std;

int main() {

	int fuel, speed;
	float fConsumption, s, time_sec, fConsumed, fRemained, travel_dist;

	cout << "How much fuel do you have at start? "; cin >> fuel;
	cout << "\n";
	
	if (fuel >= 0 && fuel <= 50) {
		cout << "Car stats" << endl;
		printf("Fuel: %d", fuel); cout << "\n";
		printf("Fuel capacity: 50"); cout << "\n";
		printf("Fuel consumption: 0"); cout << "\n";
		printf("Speed: 0"); cout << "\n";
		printf("Maximum speed: 110"); cout << "\n";
		cout << "\n";
		
		cout << "Route info" << "\n";
		printf("Distance: %d km", 360); cout << "\n";
		
		cout << "----------------------------------------" << "\n";
		
		cout << "You have to drive a route 360 km long." << endl;
		cout << "But first you need to check if you have enough fuel." << endl;
		cout << "\n";

		if (fuel < 25) {
			fuel += 25;
		}
		printf("Your fuel before start: %d", fuel); cout << "\n";
		cout << "\n";
		
		cout << "What speed wil you choose? "; cin >> speed;
		if (speed > 110) {
			printf("Your speed before start: 110 km/h"); cout << "\n";
			speed = 110;
		} else if (speed >= 0 && speed <= 110) {
			printf("Your speed before start: %d km/h", speed); cout << "\n";
		} else {
			cout << "Invalid data.";
			return 0;
		}

		s = (float)speed / 10;
		fConsumption = s * s / 4 - 4.5 * s + 30;
		if (speed == 0) {
			fConsumption = 0;
		}
		cout << "Fuel consumption with chosen speed: " << fConsumption << " litres per 100 km";
		cout << "\n";
		cout << "\n";

		cout << "Destination result" << endl;
		if (speed != 0) {
			travel_dist = (float)fuel / (fConsumption / 100 * speed) * speed;
		} else {
			travel_dist = 0;
		}
		
		if (travel_dist > 360) {
			cout << "Distance traveled: 360 km" << "\n";
			travel_dist = 360;
		} else
			cout << "Distance traveled: " << travel_dist << " km" << "\n";
		
		fConsumed = ((float)fConsumption / 100) * travel_dist;
		fRemained = fuel - fConsumed;
		
		if (speed != 0) {
			time_sec = (float)travel_dist / speed * 3600;
		} else {
			time_sec = 0;
		}
		printf("Time spent: %0.0f sec", time_sec); cout << "\n";
		if (fConsumed > fuel) {
			cout << "Fuel consumed: " << fuel << " litres" << endl;
		} else
			cout << "Fuel consumed: " << fConsumed << " litres" << endl;
		
		if (fRemained < 0) {
			cout << "Fuel remained: 0 litres" << endl;
		} else
			cout << "Fuel remained: " << fRemained << " litres" << "\n";

		cout << "----------------------------------------" << "\n";

		if (travel_dist == 360) {
			cout << "Congratulations! You have reached destination point!";
		} else {
			cout << "You haven't reached destination point. " << 360 - travel_dist << " km left.";
		}
		
	} else
		cout << "Invalid data.";
	return 0;
}
