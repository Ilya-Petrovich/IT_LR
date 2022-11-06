#include <cstdio>
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float  fuel, speed, fuelConsuption, DistanceTraveled, Timespent, Fuelconsumed, Fuelremained;
    float s, a;
    setlocale(LC_ALL, "Russian");

    std::cout << "How much fuel do you have at start?\n";
    std::cin >> fuel;



    if (fuel < 50) {
        std::cout << "  " << endl;
    }
    else {
        std::cout << "Invalid data " << endl;
        exit(0);
    }
    if (fuel > 25) {
        std::cout << "  " << endl;
    }
    else {
        std::cout << "Топливо меньше половины - добавьте до половины\n " << endl;
        exit(0);
    }


    std::cout << "Car stats:" << endl;
    std::cout << "fuel = " << fuel << endl;
    std::cout << "fuel capacity = 50" << endl;
    std::cout << "fuel consuption:0 " << endl;
    std::cout << "speed:0 " << endl;
    std::cout << "Max speed = 110\n" << endl;

    std::cout << "Route info" << endl;
    std::cout << "Distance:360\n" << endl;
    std::cout << "-------------------------------------------------\n" << endl;

    std::cout << "You have to drive a route 360 km long." << endl;

    std::cout << "But first you need to check if you have enough fuel.\n" << endl;


    std::cout << "What speed will you choise?\n";
    std::cin >> speed;

    Timespent = (360 / speed) * 60 * 60;
    

    std::cout << "You speed before start: " << speed << " km/h " << endl;
    s = speed / 10;
    fuelConsuption = s * s / 4 - 4.5 * s + 30;
    std::cout << "Fuel Consuption with chosen speed: " << fuelConsuption << " litres per 100 km " << endl;

    Fuelconsumed = fuelConsuption * 360 / 100;
    Fuelremained = fuel - Fuelconsumed;

    if (speed < 110) {
        std::cout << "  " << endl;
    }
    else {
        std::cout << "Выше максимальной скорости - Уменьшите значение " << endl;
        exit(0);
    }



    std::cout << "Destination result" << endl;
    std::cout << "Distance Traveled: 360 km" << endl;
    std::cout << "Time spent = " << Timespent << " sec " << endl;
    std::cout << "Fuel consumed = " << Fuelconsumed << " litres " << endl;
    std::cout << "Fuel remained = " << Fuelremained << " litres " << endl;

    std::cout << "-------------------------------------------------\n" << endl;

    if (Fuelconsumed < fuel) {
        std::cout << "Congratulations!You have reached destination point!  " << endl;
    }
    else {
        std::cout << "You haven't reached destination point. 360 km left.  " << endl;
        exit(0);
    }

    return 0;
    
}