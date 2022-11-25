#include <iostream>
using namespace std;
int main()
{
	
    int fuel, speed;
    cout << "How much fuel do  you have at start? ";
    cin >> fuel;
    cout << "\n";
    if (fuel <= 50 && fuel >= 0)
    {
        cout << "Car stats\n";
        cout << "Fuel: " << fuel << endl;
        cout << "Fuel capacity: 50\n";
        cout << "Fuel consumption: 0\n";
        cout << "Speed: 0" << endl;
        cout << "Maximum speed: 110\n\n";
        cout << "Route info\n";
        cout << "Distance: 360 km\n";
        cout << "--------------------------------------------------------------" << endl;
        cout << "You have to drive a route 360 km long.\n";
        cout << "But first you need to check if you have enough fuel.\n\n";
        if (fuel <= 25)
        {
            cout << "Your fuel before start: " << fuel + 25 << endl; 
        }
        cout << "\n";
        cout << "What speed will you choose? ";
        cin >> speed;
        if(speed > 110)
        {
            speed = 110;
            cout << "Your speed before start: " << speed << " km/h" << endl;;
        }
        else 
        {
            cout << "Your speed before start: " << speed << " km/h" << endl;
        }
        if (speed < 0)
        {
            cout << "Invalid data" << endl;
            return 0;
        }
        double s = speed / 10, fuelConsumption;
        fuelConsumption = s * s / 4 - 4.5 * s + 30;
        cout << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km\n\n";
        cout << "Destination result\n";
        double fuel_1 = 0;
        if (speed == 0)
        {
            cout<< "Distanse traveled: " << 0 << endl;
        }
        else
        {
            cout << "Distanse traveled: " << ((fuel / fuelConsumption * 100 >= 360) ? 360 : (fuel / fuelConsumption * 100)) << "km" << endl;
        }
        if (fuel / fuelConsumption * 100 >= 360 && speed != 0)
        {
            if (speed != 0)
            {
                cout << "Time spent: " << int(360. * 3600 / speed) << " sec" << endl;
            }
            else 
            {
                cout << "Time spent: " << 0 << " sec" << endl;
            }
            fuel_1 = 360 * fuelConsumption / 100;
            cout << "Fuel consumed: " << fuel_1 << " litres" << endl;
            cout << "Fuel remained: " << fuel - fuel_1 << " litres";
            cout << endl << "--------------------------------------------------------------" << endl;
            cout << "Congratulations! You have reached destination point!" << endl;
        }
        else
        {
            if (speed != 0) 
            {
                cout << "Time spent: " << int(fuel / fuelConsumption * 100 * 3600 / speed) << " sec" << endl;
            }
            else 
            {
                cout << "Time spent: " << 0 << " sec" << endl;
            }
            cout << "Fuel consumed: " << fuel << " litres" << endl;
            cout << "Fuel remained: " << fuel_1 << " litres" << endl;
            cout << "--------------------------------------------------------------" << endl;
            if (speed != 0) 
            {
                cout << "You haven't reached destination point. " << 360 - fuel / fuelConsumption * 100 << " km left." << endl;
            }
            else {
                cout << "You haven't reached destination point. " << 360 << " km left." << endl;
            }
        }
        
    }
    else
    {
        cout << "Invalid data" << endl;
    }
    return 0;
}
