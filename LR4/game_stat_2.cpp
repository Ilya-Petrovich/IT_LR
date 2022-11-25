#include <iostream>
#include <cmath>
#include <iomanip>

main() {
    char answer;
    double Fuel, Speed, fuelConsumption, s, passed, passed_if_360, t, fuelConsumed, fuelRemained;
    int h, min, sec;
    std::cout << "How much fuel do you have at start? ";
    std::cin >> Fuel;
    if (Fuel < 0 or Fuel > 50) {
        std::cout << "\nInvalid data." << std::endl;
        return 0;
    }
    std::cout << "\nCar stats" << std::endl;
    std::cout << "Fuel: " << Fuel << std::endl;
    std::cout << "Fuel capacity: 50" << std::endl;
    std::cout << "Fuel consumption: 0" << std::endl;
    std::cout << "Speed: 0" << std::endl;
    std::cout << "Maximum speed: 110\n" << std::endl;
    std::cout << "Route info" << std::endl;
    std::cout << "Distance: 360 km" << std::endl;
    std::cout << "----------------------------------------" << std::endl;
    std::cout << "You have to drive a route 360 km long." << std::endl;
    std::cout << "But first you need to check if you have enough fuel.\n" << std::endl;
    std::cout << "Do you need a refill? " << std::endl;
    std::cin >> answer;
    if (answer == 'n') {
        std::cout << "Your fuel before start: \n" << Fuel << std::endl;
    }
    else {
        char answer2;
        std::cout << "Choose an option." << std::endl;
        std::cout << "a. 10 litres" << std::endl;
        std::cout << "b. 20 liters" << std::endl;
        std::cout << "c. 30 liters" << std::endl;
        std::cout << "d. custom amount\n" << std::endl;
        std::cout << "Your choice: \n" << std::endl;
        if (answer2 == 'a') {
            Fuel = Fuel + 10;
            if (Fuel > 50) {
                std::cout << "Game over. Too much gas!" << std::endl;
                return 0;
            }
            else {
                std::cout << "Your fuel before start: " << Fuel << std::endl;
                std::cout << "" << std::endl;
            }
        }
        else if (answer2 == 'b') {
            Fuel += 20;
            if (Fuel > 50) {
                std::cout << "Game over. Too much gas!" << std::endl;
                return 0;
            }
            else {
                std::cout << "Your fuel before start: " << Fuel << std::endl;
                std::cout << "" << std::endl;
            }
        }
        else if (answer2 == 'c') {
            Fuel += 30;
            if (Fuel > 50) {
                std::cout << "Game over. Too much gas!" << std::endl;
                return 0;
            }
            else {
                std::cout << "Your fuel before start: " << Fuel << std::endl;
                std::cout << "" << std::endl;
            }
        }
        else if (answer2 == 'd') {
            int answer3;
            std::cout << "How much fuel do you need? " << std::endl;
            std::cin >> answer3;
            Fuel += answer3;
            if (Fuel > 50) {
                std::cout << "Game over. Too much gas!" << std::endl;
                return 0;
            }
            else {
                std::cout << "Your fuel before start: " << Fuel << std::endl;
                std::cout << "" << std::endl;
            }
        }
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
    std::cout << "" << std::endl;
    std::cout << "Type in equation parameters." << std::endl;
    std::cout << "" << std::endl;
    double kef_a, kef_b, kef_c;
    std::cout << "a = " << std::endl;
    std::cin >> kef_a;
    std::cout << "b = " << std::endl;
    std::cin >> kef_b;
    std::cout << "c = " << std::endl;
    std::cin >> kef_c;
    fuelConsumption = kef_a * s * s + kef_b * s + kef_c;
    if (Speed == 0) {
        fuelConsumption = 0;
    }
    std::cout << "Fuel consumption with chosen speed: " << fuelConsumption << " liters per 100 km" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Distance result" << std::endl;
    fuelConsumption = fuelConsumption / 100;
    passed = Fuel / fuelConsumption;
    if (Speed == 0) {
        passed = 0;
    }
    if (passed >= 360) {
        passed_if_360 = 360;
        t = passed_if_360 / Speed * 3600;
        int(floor(t));
        h = t / 3600;
        min = (t - h * 3600) / 60;
        sec = h - min * 60;
        fuelRemained = (passed - passed_if_360) * fuelConsumption;
        fuelConsumed = Fuel - fuelRemained;
        std::cout << "Distance traveled: " << passed_if_360 << " km" << std::endl;
        std::cout << "Time spent: " << h << " h" << min << " min" << sec << " sec." << std::endl;
        std::cout << "Fuel consumed: " << fuelConsumed << " liters" << std::endl;
        std::cout << "Fuel remained: " << fuelRemained << " liters" << std::endl;
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
        std::cout << "Time spent: " << " sec" << std::endl;
        std::cout << "Fuel consumed: " << fuelConsumed << " liters" << std::endl;
        std::cout << "Fuel remained: " << fuelRemained << " liters" << std::endl;
    }
    std::cout << "----------------------------------------" << std::endl;
    double SpeedX, tX, sX, fuelConsumedX, fuelRemainedX, hX, minX, secX, passedX;
    SpeedX = 90;
    sX = Speed / 10;
    fuelConsumption = kef_a * sX * sX + kef_b * sX + kef_c;
    fuelConsumption = fuelConsumption / 100;
    passedX = Fuel / fuelConsumption;
    passed_if_360 = 360;
    tX = passed_if_360 / SpeedX * 3600;
    int(floor(tX));
    hX = tX / 3600;
    minX = (tX - hX * 3600) / 60;
    secX = hX - minX * 60;
    fuelRemainedX = (passedX - passed_if_360) * fuelConsumption;
    fuelConsumedX = Fuel - fuelRemainedX;
    if (passed > 360) {
        std::cout << "Congratulations! You have reached destination point!" << std::endl;
        std::cout << "" << std::endl;
        std::cout << "The optimal speed for that car is " << SpeedX << " km/h." << std::endl;
        std::cout << "With that speed:" << std::endl;
        std::cout << std::setw(5) << "Fuel consumption would be " << fuelConsumption << " l per 100 km." << std::endl;
        std::cout << std::setw(5) << "You'd need " << fuelConsumedX << " l of fuel to reach your destination." << std::endl;
        std::cout << std::setw(5) << "You could save " << fuelRemainedX << " l of fuel." << std::endl;
        std::cout << std::setw(5) << "It would take " << hX << " h" << minX << " min" << secX << " sec." << std::endl;
    }
    else {
        std::cout << "You haven't reached destination pont. " << round((360 - passed) * 100) / 100 << " km left." << std::endl;
        std::cout << "" << std::endl;
        std::cout << "The optimal speed for that car is " << SpeedX << " km/h." << std::endl;
        std::cout << "With that speed:" << std::endl;
        std::cout << std::setw(5) << "Fuel consumption would be " << fuelConsumption << " l per 100 km." << std::endl;
        std::cout << std::setw(5) << "You'd need " << fuelConsumedX << " l of fuel to reach your destination." << std::endl;
        std::cout << std::setw(5) << "You wouldn't reach your destination anyway, but you could drive " << 360 - passedX << " kms more.";
    }
}
}