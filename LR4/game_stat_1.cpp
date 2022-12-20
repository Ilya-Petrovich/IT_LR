#include <iostream>
#include <cmath>

int main() {
    double Fuel, Speed, fuelConsumption, s, passed, passed_if_360, t, fuelConsumed, fuelRemained;
    std::cout << "How much fuel do you have at start? ";
    std::cin >> Fuel;
    std::cout << "" << std::endl;
    if (Fuel < 0 || Fuel > 50) {
        std::cout << "Invalid data." << std::endl;
        return 0;
    }
    std::cout << "Car stats" << std::endl;
    std::cout << "Fuel: " << Fuel << std::endl;
    std::cout << "Fuel capacity: 50" << std::endl;
    std::cout << "Fuel consumption: 0" << std::endl;
    std::cout << "Speed: 0" << std::endl;
    std::cout << "Maximum speed: 110" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Route info" << std::endl;
    std::cout << "Distance: 360 km" << std::endl;
    std::cout << "----------------------------------------" << std::endl;
    std::cout << "You have to drive a route 360 km long." << std::endl;
    std::cout << "But first you need to check if you have enough fuel." << std::endl;
    std::cout << "" << std::endl;
    if (Fuel < 25) {
        Fuel += 25;
        std::cout << "Your fuel before start:" << Fuel << std::endl;
        std::cout << "" << std::endl;
    }
    std::cout << "What speed will you choose? ";
    std::cin >> Speed;
    if (Speed > 110) {
        Speed = 110;
    }
    else if (Speed < 0) {
        std::cout << "Invalid data." << std::endl;
        return 0;
    }
    std::cout << "Your speed before start: " << Speed << " km/h" << std::endl;
    s = Speed / 10;
    fuelConsumption = s * s / 4 - 4.5 * s + 30;
    if (Speed == 0) {
        fuelConsumption = 0;
    }
    std::cout << "" << std::endl;
    std::cout << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Destination result" << std::endl;
    fuelConsumption = fuelConsumption / 100;
    passed = Fuel / fuelConsumption;
    if (Speed == 0) {
        passed = 0;
    }
    if (passed >= 360) {
        passed_if_360 = 360;
        t = passed_if_360 / Speed * 3600;
        fuelRemained = (passed - passed_if_360) * fuelConsumption;
        fuelConsumed = Fuel - fuelRemained;
        std::cout << "Distance traveled: " << passed_if_360 << " km" << std::endl;
        std::cout << "Time spent: " << floor(t) << " sec" << std::endl;
        std::cout << "Fuel consumed: " << fuelConsumed << " litres" << std::endl;
        std::cout << "Fuel remained: " << fuelRemained << " litres" << std::endl;
    }
    else {
        t = passed / Speed * 3600;
        fuelRemained = 0;
        fuelConsumed = Fuel;
        if (Speed == 0) {
            t = 0;
            fuelRemained = Fuel;
            fuelConsumed = 0;
        }
        std::cout << "Distance traveled: " << passed << " km" << std::endl;
        std::cout << "Time spent: " << floor(t) << " sec" << std::endl;
        std::cout << "Fuel consumed: " << fuelConsumed << " litres" << std::endl;
        std::cout << "Fuel remained: " << fuelRemained << " litres" << std::endl;
    }
    std::cout << "----------------------------------------" << std::endl;
    if (passed > 360) {
        std::cout << "Congratulations! You have reached destination point!" << std::endl;
    }
    else {
        std::cout << "You haven't reched destination point. " << ((360 - passed) * 100) / 100 << " km left." << std::endl;
    }