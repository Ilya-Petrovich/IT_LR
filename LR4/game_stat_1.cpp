#include <iostream> 
#include <cmath>
int main()
{
    double fuel, speed;
    std::cout << "How much fuel do you have at start? ";
    std::cin >> fuel;
    if (fuel < 0 || fuel > 50) {
        std::cout << "Invalid data." << std::endl;
        return 0;
    }
    std::cout << std::endl;
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
    std::cout << "You have to drive a route 360 km long. " << std::endl;
    std::cout << "But first you need to check if you have enough fuel." << std::endl;
    std::cout << std::endl;
    if (fuel < 25) {
        fuel += 25;
        std::cout << "Your fuel before start: " << fuel << std::endl;
        std::cout << std::endl;
    }
    std::cout << "What speed will you choose? ";
    std::cin >> speed;
    if (speed < 0) {
        std::cout << "Invalid data." << std::endl;
        return 0;
    }
    speed = std::min(110.0, speed);
    std::cout << "Your speed before start: " << speed << " km/h" << std::endl;
    double s = speed / 10;
    double fuelConsumption = s * s / 4 - 4.5 * s + 30;
    std::cout << std::endl;
    std::cout << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km" << std::endl;
    std::cout << std::endl;
    std::cout << "Destination result" << std::endl;
    double distanceTraveled = fuel / fuelConsumption * 100;
    distanceTraveled = std::min(360.0, distanceTraveled);
    std::cout << "Distance traveled: " << distanceTraveled << " km" << std::endl;
    double timeSpent = distanceTraveled / speed * 3600;
    std::cout << "Time spent: " << int(timeSpent) << " sec" << std::endl;
    double fuelConsumed = distanceTraveled * fuelConsumption / 100;
    std::cout << "Fuel consumed: " << fuelConsumed << " litres" << std::endl;
    std::cout << "Fuel remained: " << fuel - fuelConsumed << " litres" << std::endl;
    std::cout << "----------------------------------------" << std::endl;
    if (distanceTraveled >= 360)
        std::cout << "Congratulations! You have reached destination point!";
    else
        std::cout << "You haven't reached destination point. " << 360 - distanceTraveled << " km left.";
    return 0;
}