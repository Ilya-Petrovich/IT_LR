#include <iostream>

using namespace std;

int main()
{
    int speed, time;
    float s, fuelConsumption, fuel_consumed, ostalos, g, nedoexal, fuel;

    cout << "How much fuel do you have at start? ";
    cin >> fuel;
    cout << endl;

    if(fuel >= 0 and fuel <= 50)
    {
        if(fuel < 25)
        {
            fuel += 25;
            cout << "Your fuel before start: " << fuel << endl;
            cout << endl;
        }
        else
        {
            fuel = fuel;
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
        cout << endl;

        cout << "What speed will you choose? ";
        cin >> speed;
        if(speed < 0)
        {
            cout << endl;
            cout << "Invalid data";
            return 0;
        }
        else if(speed > 110)
        {
            speed = 110;
        }
        cout << "Your speed before start: " << speed << " km/h" << endl;
        cout << endl;

        s = (float)speed / 10;
        fuelConsumption = s * s / 4 - 4.5 * s + 30;
        cout << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km" << endl;
        cout << endl;

        cout << "Destination result" << endl;
        g = fuelConsumption / 100;
        fuel_consumed = g * 360;
        ostalos = (fuel_consumed - fuel) / g;
        if(speed == 0)
        {
            cout << "Distance traveled: 0 km" << endl;
            cout << "Time spent: 0 sec" << endl;
            cout << "Fuel consumed: " << 0 << " litres" << endl;
            cout << "Fuel remained: " << fuel << " litres" << endl;
            cout << "----------------------------------------" << endl;
            cout << "You haven't reached destination point. 360 km left.";
        }
        else if(ostalos > 0)
        {
            nedoexal = 360 - ostalos;
            cout << "Distance traveled: " << nedoexal << " km" << endl;
            time = nedoexal / (float)speed * 3600;
            cout << "Time spent: " << time << " sec" << endl;
            cout << "Fuel consumed: " << fuel << " litres" << endl;
            cout << "Fuel remained: " << 0 << " litres" << endl;
            cout << "----------------------------------------" << endl;
            cout << "You haven't reached destination point. " << 360 - nedoexal << " km left.";
        }
        else
        {
            cout << "Distance traveled: 360 km" << endl;
            time = 360 / (float)speed * 3600;
            cout << "Time spent: " << time << " sec" << endl;
            cout << "Fuel consumed: " << fuel_consumed << " litres" << endl;
            cout << "Fuel remained: " << fuel - fuel_consumed << " litres" << endl;
            cout << "----------------------------------------" << endl;
            cout << "Congratulations! You have reached destination point!";
        }
    }
    else
    {
        cout << "Invalid data";
        return 0;
    }
}
