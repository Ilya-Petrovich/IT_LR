# include <iostream>

using namespace std;

int main() {
    float fuel_capacity = 50, fuel, fuelTemp;
    float fuel_consumption = 0, distance = 360, distCan, speed = 0;
    int time;
    int max_speed = 110;
    cout << "How much fuel do you have at start? ";
    cin >> fuel;
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
        if (fuel < (fuel_capacity / 2)) {
            fuel += (fuel_capacity / 2);
            cout << "\nYour fuel before start: " << fuel << endl;
        }
        cout << "\nWhat speed will you choose? ";
        cin >> speed;
    } else {
        cout << "\nInvalid data." << endl;
        return 0;
    }
    if (speed < 0) {
        cout << "\nInvalid data." << endl;
    } else {
        if (speed >= max_speed) { speed = max_speed; }
        cout << "Your speed before start: " << speed << " km/h" << endl << endl;
        float s = speed / 10;
        if (speed == 0) {
            fuel_consumption = 0;
        }
        else {
            fuel_consumption = (s * s) / 4 - 4.5 * s + 30;
        }
        cout << "Fuel consumption with chosen speed: " << fuel_consumption << " litres per 100 km" << endl;

        //// **************** Distance result ****************************
        float dist_t, f_consumed = fuel, f_remained = 0;
        dist_t = (fuel * 100) / fuel_consumption;
        if (speed > 0) {
            dist_t = distance;
            fuelTemp = distance / fuel_consumption;
            distCan = fuel / fuel_consumption * 100;
            f_consumed = min(distance, distCan) / 100 * fuel_consumption;
            f_remained = fuel - fuel_consumption * 3.6;
            dist_t = min(distCan, distance);
            time = (dist_t / speed) * 3600;
        }
        else if (speed == 0) {
            dist_t = 0;
            fuelTemp = 0;
            f_consumed = 0;
            f_remained = 0;
            time = 0;
            distCan = 0;
            fuel_consumption = 0;
        } else {
            cout << "\nInvalid data." << endl;
            return 0;
        }
        cout << "\nDestination result" << endl;
        cout << "Distance traveled: " << dist_t << " km" << endl;
        cout << "Time spent: " << time << " sec" << endl;
        cout << "Fuel consumed: " << f_consumed << " litres" << endl;
        if (dist_t >= distance) {
            cout << "Fuel remained: " << fuel - f_consumed << " litres" << endl;
            cout << "----------------------------------------" << endl;
            cout << "Congratulations! You have reached destination point!" << endl;
        }
        else {
            if (f_consumed > fuel) {
                cout << "Fuel remained: " << 0 << " litres\n";
            }
            else {
                cout << "Fuel remained: " << fuel - f_consumed << " litres\n";
            }
            cout << "----------------------------------------" << endl;
            cout << "You haven't reached destination point. " << distance - dist_t << " km left." << endl;
        }


    }

}
