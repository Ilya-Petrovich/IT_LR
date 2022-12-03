#include <iostream>

using namespace std;

int main(){
    double fuel_capacity = 50, fuel;
    double fuel_consumption = 0, distance = 360;
    int speed = 0, time;
    int max_speed = 110;
    cout << "How much fuel do you have at start? "; cin >> fuel;
    if (fuel >= 0 and fuel <= 50) {
        cout << "\nCar stats" << endl;
        cout << "Fuel: " << fuel << endl;
        cout << "Fuel capacity: " << fuel_capacity << endl;
        cout << "Fuel consumption: " << fuel_consumption << endl;
        cout << "Speed: " << speed << endl;
        cout << "Maximum speed: " << max_speed << endl;

        cout << "\nRoute info\nDistance: " << distance << " km" << endl;
        cout << "----------------------------------------" << endl;
        cout << "You have to drive a route 360 km long.\nBut first you need to check if you have enough fuel." << endl;
        if (fuel < (fuel_capacity / 2.)) {
            fuel += (fuel_capacity / 2.);
            cout << "\n Your fuel before start: " << fuel << endl;
        }
        cout << "\nWhat speed will you chose? ";
        cin >> speed;
    }else{
        cout << "\nInvalid data.";
        return 0;
    }
    if (speed < 0){
        cout << "Invalid data." << endl;
    }else {
        if (speed >= max_speed) { speed = max_speed; }
        cout << "Your speed before start: " << speed << " km/h" << endl;
        double s = speed / 10.;
        if (speed == 0) {
            fuel_consumption = 0;
        }else{
            fuel_consumption = (s * s) / 4 - 4.5 * s + 30;
        }
        cout << "\nFuel consumption with chosen speed: " << fuel_consumption << " litres per 100 km" << endl;

        double dist_t, f_consumed = fuel, f_remained = 0;
        dist_t = double(fuel * 100) / double(fuel_consumption);
        if (dist_t >= distance and speed != 0) {
            dist_t = distance;
            f_consumed = fuel_consumption * 3.6;
            f_remained = fuel - fuel_consumption * 3.6;
            time = (dist_t / speed) * 3600;
        }else if (speed == 0)
        {   dist_t = 0;
            f_consumed  = 0;
            f_remained = 0;
            time = 0;
            fuel_consumption = 0;
        } else if (dist_t < distance)
        {
            time = (dist_t / speed) * 3600;
        }
        cout << "\nDestination result" << endl;
        cout << "Distance traveled: " << dist_t << " km" << endl;
        cout << "Time spent: " << time << " sec" << endl;
        cout << "Fuel consumed: " << f_consumed << " litres" << endl;
        cout << "Fuel remained: " << f_remained << " litres" << endl;
        cout << "----------------------------------------" << endl;
        if (dist_t >= distance) {
            cout << "Congratulations! You have reached destination point!" << endl;
        } else {
            cout << "You haven't reached destination point. " << distance - dist_t << " km left." << endl;
        }
    }

}