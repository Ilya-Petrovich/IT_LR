// расстояние - км, время - сек.
#include <iostream>

int main() {
    int fuel = 0, speed, timeSpent, maxSpeed = 110, distance = 360;
    float s, fuelConsumption, fuelConsumed, distanceTraveled, fuelRemained;
    bool destinationPoint;

    std::cout << "How much fuel do you have at start? [0 - 50]: ";
    std::cin >> fuel;

    // Initialize fuel
    if (fuel < 0 || fuel > 50 || !std::cin) {
        std::cout << "Invalid data.";
        return 0;
    } else if (fuel < 25) {
        fuel += 25;
    }

    std::cout << std::endl << "Car stats" << std::endl;
    std::cout << "Fuel: " << fuel << std::endl;
    std::cout << "Fuel capacity: 50" << std::endl << "Fuel consumption: 0" << std::endl;
    std::cout << "Speed: 0" << std::endl << "Maximum speed: 110" << std::endl;
    std::cout << std::endl << "Route info" << std::endl << "Distance: 360km" << std::endl;
    std::cout << "----------------------------------------" << std::endl;
    std::cout << "You have to drive a route 360km long." << std::endl;
    std::cout << "But first you need to check if you have enough fuel." << std::endl;
    std::cout << std::endl << "What speed will you choose? "; std::cin >> speed;

    // Initialize speed
    if (speed > maxSpeed) speed = maxSpeed;
    if (speed > 0) {
        s = speed * 1.0 / 10;
        fuelConsumption = s * s / 4 - 4.5 * s + 30;

        // пройденное расстояние
        distanceTraveled = fuel / fuelConsumption * 100;
        destinationPoint = distanceTraveled > distance;

        // общее время движения
        if (destinationPoint) timeSpent = float(distance) / speed * 3600;
        else timeSpent = float(distanceTraveled) / speed * 3600;

        // общий расход топлива на весь путь,
        if (destinationPoint) fuelConsumed = fuelConsumption * distance / 100;
        else fuelConsumed = fuelConsumption * distanceTraveled / 100;

        // остаток топлива. Вывести в консоль.
        fuelRemained = (fuel - fuelConsumed < 0) ? 0 : fuel - fuelConsumed;
    } else if (speed < 0) {
      std::cout << "Invalid data.";
      return 0;
    } else {
      fuelConsumption = 0;
      distanceTraveled = 0;
      timeSpent = 0;
      fuelConsumed = 0;
      destinationPoint = false;
      fuelRemained = fuel;
    }
    std::cout << "Your speed before start: " << speed << " km/h" << std::endl;
    std::cout << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km" << std::endl;

    std::cout << std::endl << "Destination result" << std::endl;
    if (destinationPoint) std::cout << "Distance traveled: 360 km" << std::endl;
    else std::cout << "Distance traveled: " << distanceTraveled << " km" << std::endl;
    std::cout << "Time spent: " << timeSpent << " sec" << std::endl;
    std::cout << "Fuel consumed: " << fuelConsumed << " litres" << std::endl;
    std::cout << "Fuel remained: " << fuelRemained << " litres" << std::endl;
    std::cout << "----------------------------------------" << std::endl;

    if (destinationPoint) std::cout << std::endl << "Congratulations! You have reached destination point!";
    else std::cout << "You haven't reached destination point. " << distance - distanceTraveled << " km left.";

}
