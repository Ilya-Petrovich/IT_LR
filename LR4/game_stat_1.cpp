// расстояние - км, время - сек.
#include <iostream>

int main() {
    int fuel, speed, timeSpent, maxSpeed = 110, distance = 360;
    float s, fuelConsumption, fuelConsumed, distanceTraveled, fuelRemained;
    bool destinationPoint;

    std::cout << "How much fuel do you have at start? "; std::cin >> fuel;

    // Initialize fuel
    if (fuel < 0 || fuel >= 50) {
        std::cout << "\nInvalid data.\n";
        return 0;
    }

    std::cout << "\nCar stats\n";
    std::cout << "Fuel: " << fuel << "\n";
    std::cout << "Fuel capacity: 50\n" << "Fuel consumption: 0\n";
    std::cout << "Speed: 0\n" << "Maximum speed: 110\n";
    std::cout << "\nRoute info\n" << "Distance: 360km\n";
    std::cout << "----------------------------------------\n";
    std::cout << "You have to drive a route 360km long.\n";
    std::cout << "But first you need to check if you have enough fuel.\n\n";

    if (fuel < 25) {
        fuel += 25;
        std::cout << "Your fuel before start: " << fuel << "\n";
    }

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
      std::cout << "\nInvalid data.\n";
      return 0;
    } else {
      fuelConsumption = 0;
      distanceTraveled = 0;
      timeSpent = 0;
      fuelConsumed = 0;
      destinationPoint = false;
      fuelRemained = fuel;
    }
    std::cout << "Your speed before start: " << speed << " km/h\n";
    std::cout << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km\n";

    std::cout << std::endl << "Destination result\n";
    if (destinationPoint) std::cout << "Distance traveled: 360 km\n";
    else std::cout << "Distance traveled: " << distanceTraveled << " km\n";
    std::cout << "Time spent: " << timeSpent << " sec\n";
    std::cout << "Fuel consumed: " << fuelConsumed << " litres\n";
    std::cout << "Fuel remained: " << fuelRemained << " litres\n";
    std::cout << "----------------------------------------\n";

    if (destinationPoint) std::cout << "\nCongratulations! You have reached destination point!";
    else std::cout << "You haven't reached destination point. " << distance - distanceTraveled << " km left.";

}
