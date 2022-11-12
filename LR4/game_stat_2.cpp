#include <iostream>
#include <cmath>
#define s (speed / 10.)
using namespace std;

int main(){
    int time, speed;
    char ans, choice;
    double distance, fuelcons = 0, a, b, c, fuel, extraf;
    cout << "How much fuel do you have at start? ";
    cin >> fuel;
    if (fuel > 50){
        cout << endl << "Invalid data";
        return -1;
    }

    cout << "Car stats" << endl;
    cout << "Fuel: " << fuel << endl;
    cout << "Fuel capacity: 50" << endl;
    cout << "Fuel consumption: " << fuelcons << endl;
    cout << "Speed: " << speed << endl;
    cout << "Maximum speed: 110" << endl;

    cout << endl << "Route info" << endl;
    cout << "Distance: 360 km" << endl;
    cout << "-----------------------------------" << endl;
    cout << "You have to drive a route 360 km long." << endl;
    cout << "But first you need to check if you have enough fuel." << endl;

    cout << endl << "Do you need a refill? ";
    cin >> ans;
    switch (ans) {
        case 'y':
            cout << endl << "Chose an option." << endl << "a. 10 litres" <<
            endl << "b. 20 litres" << endl << "c. 30 litres" << endl <<
            "d. custum amount" << endl;
            cout << endl << "Your choice is ";
            cin >> choice;
            switch (choice){
                case 'a': fuel += 10;
                break;
                case 'b': fuel += 20;
                break;
                case 'c': fuel += 30;
                break;
                case 'd':
                    cout << endl << "How much fuel do you need? ";
                    cin >> extraf;
                    fuel += extraf;
                    break;
            }

        break;
        case 'n': break;
    }
    if (fuel > 50) {
        cout << endl << "Game over. Too much gas!";
        return -1;
    }
    cout << endl << "Your fuel before start: " << fuel << endl;

    cout << endl << "What speed will you choose? ";
    cin >> speed;
    if (speed > 110) speed = 110;
    else if (speed < 0) {
        cout << "Invalid data";
        return -1;
    }

    cout << "Your speed before start: " << speed << " km/h" << endl;

    cout << endl << "Type in equation parameters.";
    cout << "\na = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    if (speed != 0) fuelcons = a * s * s + s * b + c;
    else fuelcons = 0;
    cout << endl << "Fuel consumption with chosen speed: " << fuelcons << " litres per 100 km" << endl;

    cout << endl << "Distination result" << endl;
    if (speed != 0) distance = (fuel / fuelcons * 100.) > 360 ? 360 : (fuel / fuelcons * 100.);
    else distance = 0;
    cout << "Distance traveled: " << distance << " km" << endl;
    if (speed != 0) time = distance / speed * 3600.;
    else time = 0;
    int h = time / 3600;
    int m = (time - h * 3600 ) / 60;
    int sec = time - h * 3600 - m * 60;
    cout << "Time spent: " << h << " h " << m << " m " << sec << " sec" << endl;
    cout << "Fuel consumed: " << fuelcons / 100. * distance << " litres" << endl;
    cout << "Fuel remained: " << fuel - fuelcons / 100. * distance << " litres" << endl;
    cout << "-----------------------------------" << endl;
    if (distance == 360) cout << "Congratulations! You have reached destination point!" << endl;
    else cout << "You haven't reached destination point. " << 360 - distance << " km left." << endl;

    speed = -b * 10 / 2 / a;
    double opfuelcons;
    opfuelcons = a * s * s + s * b + c;

    cout << endl << "The optimal speed for that car is " << speed << " km/h." << endl;
    cout << "With that speed: " << endl;
    cout << "   Fuel consumption would be: " << opfuelcons << " litres per 100 km." << endl;
    cout << "   You'd need " << 360 * opfuelcons / 100 << " of fuel to reach your destination." << endl;

    if (distance == 360 ) {
        cout << "   You could save " <<  round((fuelcons / 100. * distance -  opfuelcons / 100. * distance) * 10) / 10 << " l of fuel." << endl;
        time = 360 / speed * 3600;
        h = time / 3600;
        m = (time - h * 3600 ) / 60;
        sec = time - h * 3600 - m * 60;
        cout << "   It would take " << h << " h " << m << " m " << sec << " sec.";
    }
    else cout << "   You wouldn't reach your destination anyway, but you could drive " << (fuel / opfuelcons * 100. - distance) << " kms more.";
    return 0;
}
