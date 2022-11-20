#include <iostream>
using namespace std;

int main() {
    int fuel, speed, time;
    float distance, distanceLeft, fuelConsumption, fuelConsumed, fuelRemained;
    
    cout << "How much fuel do you have at start? ";
    cin >> fuel;
    cout << endl;

    if (fuel < 0 || fuel > 50) {
        cout << "Invalid data." << endl;
        exit(0);
    }

    cout << "Car stats" << endl;
    cout << "Fuel: " << fuel << endl;
    cout << "Fuel capacitity: 50" << endl;
    cout << "Fuel consumtion: 0" <<endl;
    cout << "Speed: 0" << endl;
    cout << "Maximum speed: 110" << endl << endl;
    cout << "Route info" << endl;
    cout << "Distance: 360 km" << endl;
    cout << "------------------------------------------" << endl;
    cout << "You have to drive a route 360 km long." << endl;
    cout << "But first you need to check if you have enough fuel." << endl << endl;

    if (fuel < 25) {
        fuel += 25;
        cout << "Your foel before start: " << fuel << endl << endl;
    }

    cout << "What speed will you choose? ";
    cin >> speed;
        
    if (speed < 0){
        cout << "Invalid data." << endl;
        exit(0); 
    }

    if (speed > 110)
    {
        speed = 110;
    }

    cout << "Your speed before start: " << speed << " km/h" << endl;
    fuelConsumption = (speed / 10.) * (speed / 10.) / 4 - 4.5 * (speed / 10.) + 30;
    
    if (speed == 0) {
        cout << "Fuel consumption with chosen speed: " << 0 << " litres per 100 km" << endl << endl;
    } else {
        cout << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km" << endl << endl;
    }
    
    cout << "Destination result" << endl;
    distance = fuel / fuelConsumption * 100;
    
    if (distance > 360) {
        distance = 360;
        time = 360. / speed * 3600;
        fuelConsumed = fuelConsumption / 100 * 360;
        fuelRemained = fuel - fuelConsumed;
    } else {
        time = (float)distance / (float)speed * 3600;
        fuelConsumed = fuel;
        fuelRemained = 0;
    }

    if (speed == 0) {
        fuelConsumption = 0;
        time = 0;
        fuelConsumed = 0;
        fuelRemained = fuel;
        distance = 0;
        distanceLeft = 0;
    }
    
    cout << "Distance traveled: " << distance << " km" << endl;
    cout << "Time spent: " << time << " sec" << endl;
    cout << "Fuel consumed: " << fuelConsumed << " litres" << endl;
    cout << "Fuel remained: " << fuelRemained << " litres" << endl;
    cout << "------------------------------------------" << endl;
    
    if (distance >= 360){
        cout << "Congratulations! You have reached destination point!";
    } else {
        distanceLeft = 360 - distance;
        cout << "You haven't reached destination point. " <<  distanceLeft << " km left.";
    }

    return 0;
}
