#include <iostream>
using namespace std;

int main(){
    int time, speed,fuel;
    double distance, fuelcons = 0;
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

    if (fuel < 25) {
        fuel += 25;
        cout << endl << "Your fuel before start: " << fuel << endl;
    }
    cout << endl << "What speed will you choose? ";
    cin >> speed;
    if (speed > 110) speed = 110;
    else if (speed < 0) {
        cout << "Invalid data";
        return -1;
    }
    cout << endl << "Your speed before start: " << speed << " km/h" << endl;
    if (speed != 0) fuelcons = speed / 10. * speed / 10. / 4. - 4.5 * speed / 10. + 30.;
    else fuelcons = 0;
    cout << "Fuel consumption with chosen speed: " << fuelcons << " litres per 100 km" << endl;

    cout << endl << "Distination result" << endl;
    if (speed != 0) distance = (fuel / fuelcons * 100.) > 360 ? 360 : (fuel / fuelcons * 100.);
    else distance = 0;
    cout << "Distance traveled: " << distance << " km" << endl;
    if (speed != 0) time = distance / speed * 3600.;
    else time = 0;
    cout << "Time spent: " << time << " sec" << endl;
    cout << "Fuel consumed: " << fuelcons / 100. * distance << " litres" << endl;
    cout << "Fuel remained: " << fuel - fuelcons / 100. * distance << " litres" << endl;
    cout << "-----------------------------------" << endl;
    if (distance == 360) cout << "Congratulations! You have reached destination point!";
    else cout << "You haven't reached destination point. " << 360 - distance << " km left.";
    return 0;
}
