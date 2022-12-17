#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int maxs, capacity;
    int fuel, speed, dis;
    double s;

    maxs = 110;
    capacity = 50;
    dis = 360;

    cout << "How much fuel do you have at start? ";
    cin >> fuel;

    if (fuel < 0 || fuel > capacity) {
        cout << "\nInvalid data.\n";
        return 0;
    }
 
	cout << "\nCar stats";
	cout << "\nFuel: " << fuel;
	cout << "\nFuel capacity: 50";
	cout << "\nFuel consumption: 0";
	cout << "\nSpeed: 0";
	cout << "\nMaximum speed: 110\n";
	cout << "\nRoute info";
	cout << "\nDistance: 360 km";
	cout << "\n----------------------------------------";
	cout << "\nYou have to drive a route 360 km long.";
	cout << "\nBut first you need to check if you have enough fuel.";

    if (fuel < capacity / 2) {
        fuel += capacity / 2;
        cout << endl;
        cout << "\nYour fuel before start: " << fuel;
        cout << endl;
    }

    cout << "\nWhat speed will you choose? ";
    cin >> speed;
    
    if (speed < 0) {
        cout << "\nInvalid data.\n";
        return 0;
    }
    
    speed = min(maxs, speed);

    cout << "Your speed before start: " << speed << " km/h\n"; 

    s = speed / 10.0;
    double fuelConsumption = s * s / 4 - 4.5 * s + 30;

    cout << "\nFuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km";

    double d = (fuel / fuelConsumption * 100);
    double traveled = min(360.0, d);
    double consumed = fuelConsumption * traveled / 100;

    cout << endl << "\nDestination result\n";
    cout << "--------------------------------------\n";
    cout << "Distance traveled: " << traveled << " km\n";
    cout << "Time spent: " << traveled / speed * 360 << " sec\n";
    cout << "Fuel consumed: " << consumed << " litres\n";
    cout << "Fuel remained: " << fuel - consumed << " litres\n";
    cout << "--------------------------------------\n";
    
    if (traveled == 360.0) {
    cout << "Congratulations! You have reached destination point\n";
    }
    else {
        cout << "You haven't reached destination point. " <<  max(dis - traveled, 0.0) << " km left.\n";
    }

    return 0;
}