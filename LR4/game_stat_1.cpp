#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    float fuel, dist = 360, speed1, speed, time = 0, f_cons, s, distCanTr, fuel1, fuel_cons, distTr, timeSp;
    const float max_f = 50, max_s = 110;
    cout << "How much fuel do you have at start? ";
    cin >> fuel;

    if (fuel >= 0 && fuel <= 50) {
        cout << "\nCar stats" << endl;
        cout << "Fuel: " << fuel << endl;
        cout << "Fuel capacity: " << max_f << endl;
        cout << "Fuel consumption: 0" << endl;
        cout << "Speed: 0" << endl;
        cout << "Maximum speed: 110 \n\n";
        cout << "Route info " << endl;
        cout << "Distance: " << dist << " km" << endl;
        cout << "----------------------------------------\n";
        cout << "You have drive a route " << dist << " km long." << endl;
        cout << "But first you need to check if you have enough fuel.\n\n";

        if (fuel < max_f / 2) {
            fuel = fuel + max_f / 2;
            cout << "Your fuel before start: " << fuel << endl << endl;
        }

        cout << "What speed will you choose? "; 
        cin >> speed1;
        speed = min(speed1, max_s);

        if (speed > 0) {
            s = speed / 10;
            f_cons = s * s / 4 - 4.5 * s + 30; //Расход топлива
            cout << "Your speed before start: " << speed << " km/h \n\n";
            cout << "Fuel consumption with chosen speed: " << f_cons << " litres per 100 km \n\n";
            fuel1 = dist / f_cons; //нужное количество топлива
            distCanTr = fuel / f_cons * 100; //Расстояние, которое можно преодолеть
            fuel_cons = min(dist, distCanTr) / 100 * f_cons; //Затраченное топливо
            distTr = min(distCanTr, dist);
            timeSp = int(distTr / speed * 3600);
        } else if (speed == 0) {
            f_cons = 0;
            cout << "Your speed before start: " << speed << " km/h \n\n";
            cout << "Fuel consumption with chosen speed: " << f_cons << " litres per 100 km \n\n";
            fuel1 = 0;
            distCanTr = 0;
            fuel_cons = 0;
            distTr = 0;
            timeSp = 0;
        } else if (speed < 0) {
            cout << "\nInvalid data." << endl;
            goto end;
        }

        cout << "Destination result" << endl;

        if (distTr >= dist) {
            cout << "Distance traveled: " << distTr << " km" << endl;
            cout << "Time spent: " << int(distTr / speed * 3600) << " sec" << endl;
            cout << "Fuel consumed: " << fuel_cons << " litres" << endl;
            cout << "Fuel remained: " << fuel - fuel_cons << " litres \n";
            cout << "----------------------------------------" << endl;
            cout << "Congratulations! You have reached destination point!" << endl;
        } else {
            cout << "Distance traveled: " << distTr << " km" << endl;
            cout << "Time spent: " << timeSp << " sec" << endl;
            cout << "Fuel consumed: " << fuel_cons << " litres" << endl;

            if (fuel_cons > fuel) {
                cout << "Fuel remained: " << 0 << " litres \n";
            } else {
                cout << "Fuel remained: " << fuel - fuel_cons << " litres \n";
            }

            cout << "----------------------------------------" << endl;
            cout << "You haven't reached destination point. " << dist - distTr << " km left." << endl;
        }
    } else {
        cout << "\nInvalid data" << endl;
    }

    end:
    system("pause");
    return 0;
}
