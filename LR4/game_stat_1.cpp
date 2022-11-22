#include <iostream>

using namespace std;

int main() {
    int spent_time;
    float fuel, s, traveled_distance, consumed_fuel, remained_fuel;
    float fuel_capacity = 50, fuel_consumption = 0, speed = 0, max_speed = 110, distance = 360;

    cout << "How much fuel do you have at start? ";
    cin >> fuel;

    if (fuel >= 0 && fuel <= 50) {
        cout << endl << "Car stats" << endl;
        cout << "Fuel: " << fuel << endl;
        cout << "Fuel capacity: " << fuel_capacity << endl;
        cout << "Fuel consumption: " << fuel_consumption << endl;
        cout << "Speed: " << speed << endl;
        cout << "Maximum speed: " << max_speed << endl;

        cout << endl << "Route info" << endl;
        cout << "Distance: " << distance << " km" << endl;

        cout << string(40, '-') << endl;

        cout << "You have to drive a route " << distance << " km long." << endl;
        cout << "But first you need to check if you have enough fuel." << endl;

        if (fuel < fuel_capacity / 2) {
            fuel += fuel_capacity / 2;
            cout << endl << "Not enough fuel! Added " << fuel_capacity / 2 << " litres." << endl;
            cout << "Fuel: " << fuel << endl;
        }

        cout << endl << "What speed will you choose? ";
        cin >> speed;

        if (speed >= 0) {
            if (speed > max_speed) {
                speed = max_speed;
            }
        }
        else {
            cout << "Invalid data." << endl;
            return 0;
        }

        cout << "Your speed before start: " << speed << " km/h" << endl;

        if (speed > 0) {
            s = speed / 10;
            fuel_consumption = s * s / 4 - 4.5 * s + 30;
        }
        else {
            fuel_consumption = 0;
        }

        cout << endl << "Fuel consumption with chosen speed: " << fuel_consumption << " litres per 100 km" << endl << endl;

        traveled_distance = fuel / fuel_consumption * 100;

        if (traveled_distance > distance) {
            traveled_distance = distance;
        }

        if (speed > 0) {
            spent_time = traveled_distance / speed * 60 * 60;
        }
        else {
            spent_time = 0;
        }

        consumed_fuel = traveled_distance / 100 * fuel_consumption;
        remained_fuel = fuel - consumed_fuel;

        cout << "Destination result" << endl;
        cout << "Distance traveled: " << traveled_distance << " km" << endl;
        cout << "Time spent: " << spent_time << " sec" << endl;
        cout << "Fuel consumed: " << consumed_fuel << " litres" << endl;
        cout << "Fuel remained: " << remained_fuel << " litres" << endl;
        cout << string(40, '-') << endl;

        if (traveled_distance == distance) {
            cout << "Congratulations! You have reached destination point!" << endl;
        }
        else {
            cout << "You haven't reached destination point. " << distance - traveled_distance << " km left." << endl;
        }
    }
    else {
        cout << endl << "Invalid data." << endl;
    }

    return 0;
}
