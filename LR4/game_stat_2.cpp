#include <iostream>
#include <cmath>

using namespace std;

int refill(){
    cout << endl << "Choose an option." << endl;
    cout << "a. 10 litres" << endl;
    cout << "b. 20 litres" << endl;
    cout << "c. 30 litres" << endl;
    cout << "d. custom amount" << endl;

    char answ;
    cout << endl << "Your chooise: ";
    cin >> answ;
    cout << endl;
    
    int add;
    switch (answ) {
        case 'a': {
            add = 10;
            break;
        }
        case 'b': {
            add = 20;
            break;
        }
        case 'c': {
            add = 30;
            break;
        }
        case 'd': {
            cout << "How much full do you need? ";
            cin >> add;
            break;
        }
    }

    return add;
}

int main() {

    int maxs, capacity;
    int fuel, speed, dis;
    double s;
    char answ;

    fuel = 35;
    maxs = 110;
    capacity = 50;
    dis = 360;

    cout << endl << "Car stats" << endl;
    printf("fuel: %i\n", fuel);
    printf("fuel capacity: %i\n", capacity);
    printf("fuel consumption: 0\n");
    printf("Speed: 0\n");
    printf("Maximum speed: %i\n", maxs);

    cout << endl << "Route info" << endl;
    cout << "Distance: 360 km" << endl;
    cout << "-----------------------------------------" << endl;
    cout << "You have to drive a route 360 km long." << endl;
    cout << "But first you need to check if you have enough fuel." << endl;

    cout << endl << "Do you need a refill? ";
    cin >> answ;

    switch (answ) {
        case 'y': {
            fuel += refill();

            if (fuel > capacity){
                cout << "Game over. To much gas!" << endl;
                return 0;
            }
            cout << "Your fuel before start: " << fuel << endl;
            break;
        }
        case 'n': {
            cout << "Your fuel before start: " << fuel << endl;
            break;
        }
    }

    cout << endl << "What speed will you choose? ";
    cin >> speed;
    
    if (speed < 0) {
        cout << "Invalid data." << endl;
        return 0;
    }
    
    speed = min(maxs, speed);

    printf("Your speed before start: %i km/h\n", speed);
    
    double a, b, c;
    cout << endl << "Type in equation paramers" << endl;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    
    s = speed / 10.0;
    double fuelConsumption = a * s * s + b * s + c;

    printf("Fuel consumption with chosen speed: %f litres per 100 km\n", fuelConsumption);

    double d = (fuel / fuelConsumption * 100);
    double traveled = min(360.0, d);
    double consumed = fuelConsumption * traveled / 100;

    cout << endl << "Destination result" << endl;
    cout << "-----------------------------------------" << endl;
    printf("Distance traveled: %f km\n", traveled);
    printf("Time spent: %.f sec\n", traveled / speed * 3600);
    printf("Fuel consumed: %f litres\n", consumed);
    printf("Fuel remained: %f litres\n", fuel - consumed);
    cout << "-----------------------------------------" << endl;

    if (traveled == 360.0) {
    cout << "Congratulations! You have reached destination point" << endl;
    }
    else {
        printf("You haven't reached destination point. %f km left.\n", max(dis - traveled, 0.0));
    }

    double optimalspeed = ((-b) / (2 * a)) * 10;
    double optimaltimespent = (distance_traveled / optimalspeed * 3600);
    double optimalConsumption = a * (optimalspeed / 10) * (optimalspeed / 10) + b * (optimalspeed / 10) + c;
    double optimalFuelConsumed = (optimalConsumption / 100) * distance_traveled;
    

    printf("The optimal speed for that car is %i km/h.\n", optimalspeed);
    printf("With that speed:\n", );

    cout << "\n" << "The optimal speed for that car is " << optimalspeed << " km/h." << "\n";
    cout << "With that speed: 90 km/h."<< endl;
    cout << "Fuel consumption would be " << optimalConsumption;

    return 0;
}