#include <iostream>

int main() {
    int speed, time;
    float fuelConsumption, s, fuelConsumed, fuelRemained, distanceTraveled, fuel;

    std::cout << "How much fuel do you have at start? "; std::cin >> fuel;
    std::cout << std::endl;

    if ((fuel < 0) or (fuel > 50)) {
        std::cout << "Invalid data." << std::endl;
        return 0;
    }

    std::cout << "Car stats" << std::endl;
    std::cout << "Fuel: " << fuel << std::endl;
    std::cout << "Fuel capacity: 50" << std::endl;
    std::cout << "Fuel consumption: 0" << std::endl;
    std::cout << "Speed: 0" << std::endl;
    std::cout << "Maximum speed: 110" << std::endl;
    std::cout << std::endl;
    std::cout << "Route info" << std::endl;
    std::cout << "Distance: 360 km" << std::endl;
    std::cout << "----------------------------------------" << std::endl;
    std::cout << "You have to drive a route 360 km long." << std::endl;
    std::cout << "But first you need to check if you have enough fuel." << std::endl;

    if (fuel < 25) {
        fuel = fuel + 25;
        std::cout << std::endl;
        std::cout << "Your fuel before start: " << fuel << std::endl;
    }

    std::cout << std::endl;
    std::cout << "What speed will you choose? "; std::cin >> speed;

    if (speed > 110) {
        speed = 110;
    }
    if (speed < 0) {
        std::cout << std::endl;
        std::cout << "Invalid data." << std::endl; //118
        return 0;
    }

    std::cout << "Your speed before start: " << speed << " km/h" << std::endl;
    std::cout << std::endl;

    s = speed / 10.;
    fuelConsumption = s * s / 4 - 4.5 * s + 30;
    if (speed == 0) {
        fuelConsumption = 0;
    }

    std::cout << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km" << std::endl; //94 в 5 проверке
    std::cout << std::endl;

    if (speed > 0) {
        distanceTraveled = fuel / fuelConsumption * 100;
        if (distanceTraveled >= 360) {
            distanceTraveled = 360;
        }
        fuelConsumed = fuelConsumption * (distanceTraveled / 100);
        fuelRemained = fuel - fuelConsumed;
        if (fuelRemained < 0) {
            fuelConsumed = fuel;
            fuelRemained = 0;
        }
        //distanceTraveled = fuel / fuelConsumption * 100;
        time = distanceTraveled / speed * 60 * 60;
    }

    else {
        fuelRemained = fuel;
        fuelConsumption = 0;
        fuelConsumed = 0;
        time = 0;
        distanceTraveled = 0;
    }

    std::cout << "Destination result" << std::endl;
    std::cout << "Distance traveled: " << distanceTraveled << " km" << std::endl;
    std::cout << "Time spent: " << time << " sec" << std::endl;
    std::cout << "Fuel consumed: " << fuelConsumed << " litres" << std::endl; //затраченное топливо
    std::cout << "Fuel remained: " << fuelRemained << " litres" << std::endl; //оставшееся топливо //в 4 проверке считается как 75 строка
    std::cout << "----------------------------------------" << std::endl;

    if (distanceTraveled < 360) {
        std::cout << "You haven't reached destination point. " << 360 - distanceTraveled << " km left." << std::endl;
    }
    else {
        std::cout << "Congratulations! You have reached destination point!" << std::endl;
    }

    return 0;
}