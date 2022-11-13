#include <iostream>

using namespace std;

int main()
{
    double fuel, speed;
    cout << "How much fuel do you have at start? ";
    cin >> fuel;
    if (fuel < 0 || fuel > 50) {
        cout << "Invalid data";
        return 0;
    }
    cout << endl;
    cout << "Car stats" << endl;
    cout << "Fuel: " << fuel << endl;
    cout << "Fuel capacity: 50" << endl;
    cout << "Fuel consumption: 0" << endl;
    cout << "Speed: 0" << endl;
    cout << "Maximum speed: 110" << endl;
    cout << endl;
    cout << "Route info" << endl;
    cout << "Distance: 360 km" << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "You have to drive a route 360 km long." << endl;
    cout << "But first you need to check if you have enough fuel." << endl;
    cout << endl;
    cout << "Do you need a refill? ";
    string answer;
    cin >> answer;
    if (answer == "y") {
        cout << endl;
        cout << "Choose an option." << endl;
        cout << "a. 10 litres" << endl;
        cout << "b. 20 litres" << endl;
        cout << "c. 30 litres" << endl;
        cout << "d. custom amount" << endl;
        cout << endl;
        cout << "Your choise: ";
        cin >> answer;
        if (answer == "a")
            fuel += 10;
        else if (answer == "b")
            fuel += 20;
        else if (answer == "c")
            fuel += 30;
        else {
            cout << "How much fuel do you need? ";
            int k;
            cin >> k;
            fuel += k;
        }
    }
    cout << "Your fuel before start: " << fuel << endl;
    cout << endl;
    if (fuel > 50) {
        cout << "Game over. Too much gas!";
        return 0;
    }
    cout << "What speed will you choose? ";
    cin >> speed;
    if (speed < 0) {
        cout << "Invalid data";
        return 0;
    }
    speed = min(110.0, speed);
    cout << "Your speed before start: " << speed << "km/h" << endl;

    cout << endl;
    double a, b, c;
    cout << "Type in equation parameters." << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    double s = speed / 10;
    double fuelConsumption = a * s * s + b * s + c;
    cout << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km" << endl;
    cout << endl;
    cout << "Destination result" << endl;
    double distanceTraveled = fuel / fuelConsumption * 100;
    distanceTraveled = min(360.0, distanceTraveled);
    cout << "Distance traveled: " << distanceTraveled << " km" << endl;
    double timeSpent = distanceTraveled / speed * 3600;
    int intTimeSpent = int(timeSpent);
    int hours = int(timeSpent / 3600);
    int minutes = int((intTimeSpent - hours * 3600) / 60);
    int seconds = int((intTimeSpent - hours * 3600) - (minutes * 60));
    cout << "Time spent: " << hours << " h " << minutes << " min " << seconds << " sec." << endl;
    double fuelConsumed = distanceTraveled * fuelConsumption / 100;
    cout << "Fuel consumed: " << fuelConsumed << " litres" << endl;
    cout << "Fuel remained: " << fuel - fuelConsumed << " litres" << endl;
    if (distanceTraveled == 360) {
        cout << "Congratulations! You have reached destination point!" << endl;
        cout << endl;
        double minConsuming = 1111110;
        double fuelConsumed1 = fuelConsumed;
        int optimalSpeed = speed;
        for (int i = 0; i < 111; i++) {
            s = i / 10;
            fuelConsumption = a * s * s + b * s + c;
            if (minConsuming > fuelConsumption) {
                minConsuming = fuelConsumption;
                optimalSpeed = i;
                fuelConsumed1 = fuelConsumed;
                fuelConsumed = distanceTraveled * fuelConsumption / 100;
            }
        }
        cout << "The optimal speed for that car is " << optimalSpeed << " km/h." << endl;
        cout << "With that speed: " << endl;
        cout << "Fuel consumption would be " << minConsuming << " l per 100 km" << endl;
        cout << "You'd need " << fuelConsumed << " l of fuel to reach your destination." << endl;
        cout << "You could save " << fuelConsumed1 - fuelConsumed << " l of fuel" << endl;
        double distanceTraveled2 = fuel / minConsuming * 100;
        distanceTraveled2 = min(360.0, distanceTraveled);
        double timeSpent2 = distanceTraveled2 / optimalSpeed * 3600;
        int intTimeSpent2 = int(timeSpent2);
        int hours2 = int(timeSpent2 / 3600);
        int minutes2 = int((intTimeSpent2 - hours2 * 3600) / 60);
        int seconds2 = int((intTimeSpent2 - hours2 * 3600) - (minutes2 * 60));
        cout << "It would take " << hours2 << " h " << minutes2 << " min " << seconds2 << " sec.";
    }
    else
        cout << "You haven't reached destination point. " << 360 - distanceTraveled << " km left.";
}
