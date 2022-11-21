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
 
    cout << "\nCar stats\n";
    printf("fuel: %i\n", fuel);
    printf("fuel capacity: %i\n", capacity);
    printf("fuel consumption: 0\n");
    printf("Speed: 0\n");
    printf("Maximum speed: %i\n", maxs);

    cout << "\nRoute info\n";
    printf("Distance: %i km\n", dis);
    cout << "--------------------------------------\n";
    printf("You have to drive a route %i km long.\n", dis);
    cout << "But first you need to check if you have enough fuel.\n";

    if (fuel < capacity / 2) {
        fuel += capacity / 2;
        cout << endl;
        cout << "Your fuel before start: " << fuel << endl;
        cout << endl;
    }

    cout << "What speed will you choose? ";
    cin >> speed;
    
    if (speed < 0) {
        cout << "Invalid data.\n";
        return 0;
    }
    
    speed = min(maxs, speed);

    printf("Your speed before start: %i km/h\n", speed);
    //cout << "Your speed before start" << speed << "km/h\n"; 

    s = speed / 10.0;
    double fuelConsumption = s * s / 4 - 4.5 * s + 30;

   // printf("Fuel consumption with chosen speed: %f litres per 100 km\n", fuelConsumption);

    cout << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km\n";

    double d = (fuel / fuelConsumption * 100);
    double traveled = min(360.0, d);
    double consumed = fuelConsumption * traveled / 100;

    cout << endl << "Destination result\n";
    cout << "----------------------------------\n";

    cout << "Distance traveled: " << traveled << " km\n";
    cout << "Time spent: " << traveled / speed * 360 << " sec\n";
    cout << "Fuel consumed: " << consumed << " litres\n";
    cout << "Fuel remained: " << fuel - consumed << " litres\n";

    //printf("Distance traveled: %f km\n", traveled);
    //printf("Time spent: %.f sec\n", traveled / speed * 3600);
    //printf("Fuel consumed: %f litres\n", consumed);
    //printf("Fuel remained: %f litres\n", fuel - consumed);
    cout << "----------------------------------\n";
    
    if (traveled == 360.0) {
    cout << "Congratulations! You have reached destination point\n";
    }
    else {
        //printf("You haven't reached destination point. %f km left.\n", max(dis - traveled, 0.0));
        cout << "You haven't reached destination point. " <<  max(dis - traveled, 0.0) << " km left.\n";
    }

    return 0;
}