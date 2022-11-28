#include <iostream>
using namespace std;
int main()
{
    double fuel, speed;
    cout << "How much fuel do you have at start? ";
    cin >> fuel;
    if (fuel < 0 || fuel > 50) {
        cout << "Invalid data";
        return 0;
    }
    cout << endl;
    cout << "Car stats" << endl;
    cout << "Fuel: " << fuel << endl;
    cout << "Fuel capacity: 50" << endl;
    cout << "Fuel consumption: 0" << endl;
    cout << "Speed: 0" << endl;
    cout << "Maximum speed: 110" << endl;
    cout << endl;
    cout << "Route info" << endl;
    cout << "Distance: 360 km" << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "You have to drive a route 360 km long." << endl;
    cout << "But first you need to check if you have enough fuel." << endl;
    cout << endl;
    if (fuel < 25) {
        fuel += 25;
        cout << "Your fuel before start: " << fuel << endl;
        cout << endl;
    }
    cout << "What speed will you choose? ";
    cin >> speed;
    if (speed < 0) {
        cout << "Invalid data";
        return 0;
    }
    speed = min(110.0, speed);
    cout << "Your speed before start: " << speed << "km/h" << endl;
    double s = speed / 10;
    double fuelConsumption = s * s / 4 - 4.5 * s + 30;
    cout << endl;
    cout << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km" << endl;
    cout << endl;
    cout << "Destination result" << endl;
    double distanceTraveled = fuel / fuelConsumption * 100;
    distanceTraveled = min(360.0, distanceTraveled);
    cout << "Distance traveled: " << distanceTraveled << " km" << endl;
    double timeSpent = distanceTraveled / speed * 3600;
    cout << "Time spent: " << int(timeSpent) << " sec" << endl;
    double fuelConsumed = distanceTraveled * fuelConsumption / 100;
    cout << "Fuel consumed: " << fuelConsumed << " litres" << endl;
    cout << "Fuel remained: " << fuel - fuelConsumed << " litres" << endl;
    cout << "-----------------------------------------------" << endl;
    if (distanceTraveled == 360)
        cout << "Congratulations! You have reached destination point!";
    else
        cout << "You haven't reached destination point. " << 360 - distanceTraveled << " km left.";
    return 0;
}