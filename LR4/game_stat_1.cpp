#include <iostream>
using namespace std;
int main() {
    int speed, time;
    float fuelConsumption, s, fuelConsumed, fuelRemained, distanceTraveled, fuel;

    cout << "How much fuel do you have at start? "; cin >> fuel;
    cout << endl;

    if ((fuel < 0) or (fuel > 50)) {
        cout << "Invalid data." << endl;
        return 0;
    }

    cout << "Car stats" << endl;
    cout << "Fuel: " << fuel << endl;
    cout << "Fuel capacity: 50" << endl;
    cout << "Fuel consumption: 0" << endl;
    cout << "Speed: 0" << endl;
    cout << "Maximum speed: 110" << endl;
    cout << endl;
    cout << "Route info" << endl;
    cout << "Distance: 360 km" << endl;
    cout << "----------------------------------------" << endl;
    cout << "You have to drive a route 360 km long." << endl;
    cout << "But first you need to check if you have enough fuel." << endl;

    if (fuel < 25) {
        fuel = fuel + 25;
        cout << endl;
        cout << "Your fuel before start: " << fuel << endl;
    }

    cout << endl;
    cout << "What speed will you choose? "; cin >> speed;

    if (speed > 110) {
        speed = 110;
    }
    if (speed < 0) {
        cout << endl;
        cout << "Invalid data." << endl; //118
        return 0;
    }

    cout << "Your speed before start: " << speed << " km/h" << endl;
    cout << endl;

    s = speed / 10.;
    fuelConsumption = s * s / 4 - 4.5 * s + 30;
    if (speed == 0) {
        fuelConsumption = 0;
    }

    cout << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km" << endl; //94 в 5 проверке
    cout << endl;

    if (speed > 0) {
        distanceTraveled = fuel / fuelConsumption * 100;
        if (distanceTraveled >= 360) {
            distanceTraveled = 360;
        }
        fuelConsumed = fuelConsumption * (distanceTraveled / 100);
        fuelRemained = fuel - fuelConsumed;
        if (fuelRemained < 0) {
            fuelConsumed = fuel;
            fuelRemained = 0;
        }
        time = distanceTraveled / speed * 60 * 60;
    }

    else {
        fuelRemained = fuel;
        fuelConsumption = 0;
        fuelConsumed = 0;
        time = 0;
        distanceTraveled = 0;
    }

    cout << "Destination result" << endl;
    cout << "Distance traveled: " << distanceTraveled << " km" << endl;
    cout << "Time spent: " << time << " sec" << endl;
    cout << "Fuel consumed: " << fuelConsumed << " litres" << endl; 
    cout << "Fuel remained: " << fuelRemained << " litres" << endl; 
    cout << "----------------------------------------" << endl;

    if (distanceTraveled < 360) {
        cout << "You haven't reached destination point. " << 360 - distanceTraveled << " km left." << endl;
    }
    else {
        cout << "Congratulations! You have reached destination point!" << endl;
    }

    return 0;
}