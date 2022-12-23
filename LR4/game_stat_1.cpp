#include<iostream>
using namespace std;
void foo();
int main (){
		double fuel, s, fuelconsumption, fuelcapasity=50, maximumspeed=110;
		cout << "How mach fuel do you have at start? ";
		cin >> fuel;
		if (fuel > 50 or fuel < 0) {
			cout << "Invalid data";
		}
		else
		{
			cout << "Car stats\n";
			cout << "Fuel: " << fuel;
			cout << "\nFuel capasity: " << fuelcapasity;
			cout << "\nFuel consumption: 0";
			cout << "\nSpeed: 0";
			cout << "\nMaximum speed: " << maximumspeed;
			if (fuel > 0 and fuel < 25) {
				fuel = fuel + 25;
			}
			cout << "\n\nRout info\n";
			cout << "Distance: 360 km\n";
			foo();
			cout << "\nYou have to drive a route 360 km long.\nBut first you need to check if you have enough fuel.";
			cout << "\n\nWhat speed will you choose? ";
			double speed;
			cin >> speed;
			if (speed >= 0) {
				if (speed > maximumspeed) {
					speed = maximumspeed;
				}
				double s = speed / 10;
				fuelconsumption = s * s / 4 - 4.5 * s + 30;
				cout << "Your speed before starts: " << speed;
				if (speed != 0) {
					cout << "\nFuel consumption with chosen speed: " << fuelconsumption << " litres per 100 km";
					double distance = fuel / fuelconsumption * 100;
					if (distance > 360) {
						distance = 360;
					}
					double time = distance / speed * 3600;
					cout << "\n\nDestination result ";
					cout << "\nDistance traveled " << distance << " km";
					cout << "\nTime spent: " << floor(time) << " sec";
					cout << "\nFuel cumsumed: " << fuelconsumption * distance / 100 << " litres";
					cout << "\nFuel remained: " << fuel - fuelconsumption * distance / 100 << " litres\n";
					foo();
					if (distance == 360) {
						cout << "\nCongratulation! You have reached destination point ";
					}
					else if (distance < 360) {
						cout << "\nYou haven't reached destination point. " << 360 - distance << " km left.";
					}
				
				}
				else if (speed == 0) {
					cout << "\nFuel consumption with chosen speed: " << "0" << " litres per 100 km";
					cout << "\n\nDestination result ";
					cout << "\nDistance traveled 0 km";
					cout << "\nTime spent: 0 sec";
					cout << "\nFuel cumsumed: 0 litres";
					cout << "\nFuel remained: " << fuel << " litres\n";
					foo();
					cout << "\nYou haven't reached destination point. 360 km left.";
				}
			}
			else
			{
				cout << "Invalid data";
			}
		}
		return 0;
	}
void foo() {
	for (int i = 0; i < 40; i++) {
		cout << "-";
	}
}