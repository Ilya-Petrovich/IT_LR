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

    cout << "How much fuel you have on start? ";
    cin >> fuel;

    if (fuel < 0 || fuel > capacity) {
        cout << endl << "Invalid data." << endl;
        return 0;
    }
 
    cout << endl << "Car stats" << endl;
    printf("fuel: %i \n", fuel);
    printf("fuel capacity: %i \n", capacity);
    printf("fuel consumption: 0 \n");
    printf("Speed: 0 \n");
    printf("Maximum speed: %i \n", maxs);

    cout << endl << "Route info" << endl;
    printf("Distance: %i km \n", dis);
    cout << "--------------------------------------" << endl;
    printf("You have to drive a route %i km long. \n", dis);
    cout << "But first you need to check if you have enough fuel." << endl;

    if (fuel < capacity / 2) {
        fuel += capacity / 2;
        cout << endl;
        cout << "Your fuel before start: " << fuel << endl;
        cout << endl;
    }

    cout << "What speed will you choose? ";
    cin >> speed;
    
    if (speed < 0) {
        cout << "Invalid data." << endl;
        return 0;
    }
    
    speed = min(maxs, speed);

    printf("Your speed before start: %i km/h \n", speed);
    
    s = speed / 10.0;
    double fuelConsumption = s * s / 4 - 4.5 * s + 30;

    printf("Fuel consumption with chosen speed: %f litres per 100 km \n", fuelConsumption);

    double d = (fuel / fuelConsumption * 100);
    double traveled = min(360.0, d);
    double consumed = fuelConsumption * traveled / 100;

    cout << endl << "Destination result" << endl;
    cout << "----------------------------------" << endl;
    printf("Distance traveled: %f km \n", traveled);
    printf("Time spent: %.f sec \n", traveled / speed * 3600);
    printf("Fuel consumed: %f litres \n", consumed);
    printf("Fuel remained: %f litres \n", fuel - consumed);
    cout << "----------------------------------" << endl;
    
    if (traveled == 360.0) {
    cout << "Congratulations! You have reached destination point" << endl;
    }
    else {
        printf("You haven't reached destination point. %f km left. \n", max(dis - traveled, 0.0));
    }

    return 0;
}