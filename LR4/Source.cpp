#include <iostream> 
#include <cmath> 

using namespace std;

int main() {
    int fuel, speed, time;
    float s, fuelConsumption, z, q, length;
    cout << "How much fuel do you have at start? ";
    cin >> fuel;
    cout << "\n";

    if (fuel >= 0 && fuel <= 50) {
        cout << "Car stats\n";
        cout << "Fuel: " << fuel << "\n";
        cout << "Fuel capacity: 50\n";
        cout << "Fuel consumption: 0\n";
        cout << "Speed: 0\n";
        cout << "Maximum speed: 110\n";

        cout << "\n";

        cout << "Route info\n";
        cout << "Distance: 360 km\n";

        cout << "---------------------------------------\n";

        cout << "You have to drive a route 360 km long\n";
        cout << "But first you need to check if you have enough fuel.\n";

        cout << "\n";

        cout << "What speed will you choose? ";
        cin >> speed;

        if (speed == 0) {
            cout << "Your speed before start: 0 km/h\n";

            cout << "\n";

            cout << "Fuel consumption with chosen speed: 0 litres per 100 km\n";

            cout << "\n";

            cout << "Destination result\n";
            cout << "Distance traveled: 0 km\n";
            cout << "Time spent: 0 sec\n";
            cout << "Fuel consumed: 0 litres\n";
            cout << "Fuel remained: " << fuel << " litres\n";

            cout << "---------------------------------------\n";

            cout << "You haven't reached destination point. 360 km left." << endl;
        }
        else if (speed > 0) {
            if (speed <= 110 && fuel > 0) {
                cout << "Your speed before start: " << speed << " km/h";
                speed = speed;
            }
            else {
                cout << "Your speed before start: 110 km/h";
                speed = 110;
            }

            s = speed / 10.;
            fuelConsumption = s * s / 4 - 4.5 * s + 30;
            cout << "\n";
            cout << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km\n";
            cout << "\n";
            cout << "Destination result\n";

            if ((fuel / fuelConsumption * 100) >= 360) {
                length = 360;
                cout << "Distance traveled: " << length << " km\n";
                time = length / speed * 3600;
                cout << "Time spent: " << time << " sec\n";
                z = fuelConsumption * 3.6;
                cout << "Fuel consumed: " << z << " litres\n";
                q = fuel - z;
                cout << "Fuel remained: " << q << " litres\n";
            }
            else {
                length = fuel / fuelConsumption * 100;
                cout << "Distance traveled: " << length << " km\n";
                time = length / speed * 3600;
                cout << "Time spent: " << time << " sec\n";
                cout << "Fuel consumed: " << fuel << " litres\n";
                cout << "Fuel remained: 0 litres\n";
            }

            cout << "---------------------------------------\n";

            if (length == 360) {
                cout << "Congratulations! You have reached destination point!" << endl;
            }
            else {
                cout << "You haven't reached destination point." << 360 - length << "km left." << endl;
            }
        }
        else {
            cout << "\n";
            cout << "Invalid data." << endl;
        }
    }
    else {
        cout << "Invalid data." << endl;
    }

    return 0;
}