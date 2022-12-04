#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int speed = 0, max_speed = 110, time_spent;
    bool destination_reached;
    double fuel, fuel_consumed, fuel_capacity = 50, fuel_consumption = 0, s = 0, distance = 360, distance_traveled = 0;
    cout << "How much fuel do you have at the start?" << endl; cin >> fuel;
    if (fuel > fuel_capacity or fuel < 1)
    {
        cout << "Invalid data";
        return 0;
    }
    cout << endl << "Car stats" << endl;
    cout << "Fuel: " << fuel << endl;
    cout << "Fuel capacity: " << fuel_capacity << endl;
    cout << "Fuel consumption: " << fuel_consumption << endl;
    cout << "Speed: " << speed << endl;
    cout << "Maximum speed: " << max_speed << endl;

    cout << endl << "Route info" << endl;
    cout << "Distance: 360 km" << endl;
    cout << string(40, '-') << endl;
    cout << "You have to drive a route 360 km long." << endl;
    cout << "But first you need to check if you have enough fuel." << endl;

    if (fuel < fuel_capacity / 2)
    {
        fuel = fuel + (fuel_capacity / 2);
        cout << endl << "Your fuel before start: " << fuel << endl;
    }
    cout << endl << "What speed will you choose? "; cin >> speed;
    if (speed < 0)
    {
        cout << "Invalid data";
        return 0;
    }
    if (speed > max_speed)
    {
        speed = max_speed;
    }
    cout << endl << "Your speed before start: " << speed << " km/h" << endl;
    if (speed == 0)
    {
        fuel_consumption = 0;
        distance_traveled = 0;
        time_spent = 0;
    }
    else
    {
        s = double(speed) / 10;
        fuel_consumption = s * s / 4 - 4.5 * s + 30;
        distance_traveled = fuel / fuel_consumption * 100;
    }
    cout << endl << "Fuel consumption with chosen speed: " << fuel_consumption << " litres per 100 km" << endl;

    if (distance_traveled < distance)
    {
        destination_reached = false;
        fuel_consumed = fuel;
    }
    else
    {
        destination_reached = true;
        distance_traveled = distance;
        fuel_consumed = distance_traveled / 100 * fuel_consumption;
    }
    if (speed == 0)
    {
        time_spent = 0;
    }
    else
    {
        time_spent = int(double(distance_traveled) * 1000 / (double(speed) / 3.6));
    }
    cout << endl << "Destination result" << endl;
    cout << "Distance traveled: " << distance_traveled << " km" << endl;
    cout << "Time spent: " << time_spent << " sec" << endl;
    cout << "Fuel consumed: " << fuel_consumed << " litres" << endl;
    cout << "Fuel remained: " << fuel - fuel_consumed << " litres" << endl;
    cout << string(40, '-') << endl;
    if (destination_reached == true)
    {
        cout << "Congratulations! You have reached destination point!" << endl;
    }
    else
    {
        cout << "You haven't reached destination point. " << distance - distance_traveled << " km left." << endl;
    }
    return 0;
}