#include <iostream>
#include <cmath>

using namespace std;

bool fuel_possible_values(float x) {
    if ((x > 0) && (x < 50)) {
        return true;
    } else {
        return false;
    }
}

bool fuel_consumption_possible_values(float fuel_consumption, float fuel) {
    if ((fuel_consumption >= 0) && (fuel_consumption <= fuel)) {
        return true;
    } else {
        return false;
    }
}

float optimal_speed(float a, float b, float c) {
        return 10 * (-b) / (2*a);

}

float function_fuel_consumption(float speed, float a, float b, float c) {
    float s = speed/10;
    return a * s * s + b * s + c;
}

int main() {
    float fuel, fuel_capacity, fuel_consumption, speed, s, max_speed, needed_distance, distance, distance_left, time, fuel_spending, fuel_remained, refill, a, b, c;
    char choice;
    string answer;
    cout << "How much fuel do you have at start? "; cin >> fuel; cout << endl << endl;
    if (fuel_possible_values(fuel)) { //проверка ввода топлива
        cout << "Car stats" << endl;
        cout << "Fuel: " << fuel << endl;
        cout << "Fuel capacity: "; cin >> fuel_capacity; cout << endl;
        if (fuel_capacity >= fuel) {  //проверка ввода объёма бака
            cout << "Fuel consumption: "; cin >> fuel_consumption; cout << endl;
            if (fuel_consumption_possible_values(fuel_consumption, fuel)) { //проверка ввода расхода
                cout << "Speed: "; cin >> speed; cout << endl;
                if (speed >= 0) {
                    cout << "Maximum speed: "; cin >> max_speed; cout << endl << endl;
                    cout << "Route info " << endl;
                    cout << "Distance: "; cin >> needed_distance; cout << endl;
                    if (needed_distance >= 0) { //проверка ввода расстояния
                        cout << "----------------------------------------" << endl;
                        cout << "You have to drive a route " << needed_distance << " km long." << endl;
                        cout << "But first you need to check if you have enough  fuel." << endl << endl;
                        cout << "Do you need a refil? "; cin >> answer;
                        //const char answer1 = answer;
                        if (answer == "y") {
                            cout << endl << "Choose an option." << endl;
                            cout << "a. 10 litres\nb. 20 litres\nc. 30 litres\nd. custom amount\n\n";
                            cout << "Your choice: "; cin >> choice; cout << endl << endl;
                            //const char choice1 = choice;
                            switch ( choice ) {
                                case 'a':
                                    fuel += 10;
                                    break;
                                case 'b':
                                    fuel += 20;
                                    break;
                                case 'c':
                                    fuel += 30;
                                    break;
                                case 'd':
                                    cout << "How much fuel do you need?"; cin >> refill; cout << endl;
                                    fuel += refill;
                                    
                                default:
                                    cout << "Incorrect choice!";
                            }
                        }
                        cout << "You fuel before start: " << fuel << endl << endl;
                        if (fuel_possible_values(fuel)) {
                            cout << "What speed will you choose? "; cin >> speed; cout << endl;
                            if (speed >= 0) { //проверка ввода скорости
                                if (speed > max_speed) { 
                                    speed = max_speed;
                                }
                                cout << "Your speed before start: " << speed << " km/h" << endl << endl;
                                cout << "Type in equation parameters." << endl;
                                cout << "a = "; cin >> a; cout << endl;
                                cout << "b = "; cin >> b; cout << endl;
                                cout << "c = "; cin >> c; cout << endl << endl;
                                if (a > 0) {
                                    s = speed/10;
                                    if (speed == 0) { 
                                        fuel_consumption = 0;
                                        distance = 0;
                                        time = 0;
                                    } else {
                                        fuel_consumption = function_fuel_consumption(speed, a, b, c); //вычисление переменных:
                                        distance = fuel / fuel_consumption * 100;
                                        time = (distance / speed) * 3600;
                                    }
                                    cout << "Fuel consumption with chosen speed: " << fuel_consumption << " litres per 100 km" << endl << endl;
                                    if (distance <= needed_distance) {
                                        cout << "Destination result\nDistance traveled: " << distance << " km" << endl;
                                        
                                    } else {
                                        cout << "Destination result\nDistance traveled: " << needed_distance << " km" << endl;
                                        time = (needed_distance / speed) * 3600;
                                    }
                                    cout << "Time spent: " << int(time) / 3600 << " h " << int(time - (3600 * (int(time)/3600))) / 60 << " min " << int(time) % 60 << " sec." << endl;
                                    if ((distance <= needed_distance) && (distance != 0 )) {
                                        fuel_spending = fuel;
                                        distance_left = needed_distance - distance;
                                        fuel_remained = 0;
                                    } else if (distance == 0) {
                                        fuel_spending = 0;
                                        distance_left = needed_distance;
                                        fuel_remained = fuel;
                                    } else {
                                        fuel_spending = (needed_distance/100) * (fuel_consumption);
                                        distance_left = needed_distance - distance;
                                        fuel_remained = fuel - fuel_spending;
                                    }
                                    
                                    
                                    cout << "Fuel consumed: " << fuel_spending << " litres" << endl;
                                    cout << "Fuel remained: " << fuel_remained << " litres" << endl;
                                    cout << "----------------------------------------" << endl;

                                    if (distance_left > 0) {
                                        cout << "You haven't reached destination point. " << (trunc(distance_left * 100)) / 100.0 << " km left." << endl << endl;
                                    } else {
                                        cout << "Congratulations! You have reached destination point!" << endl << endl;
                                    }
                                    
                                    float new_distance, new_fuel_consumption, new_time, new_fuel_spending, new_speed;
                                    new_speed = optimal_speed(a, b, c);
                                    cout << "The optimal speed for that car is " << new_speed << " km/h." << endl << "With that speed:" << endl;
                                    
                                    new_fuel_consumption = function_fuel_consumption(new_speed, a, b, c);
                                    if ((fuel / new_fuel_consumption * 100) < 360) {
                                        new_distance = fuel / new_fuel_consumption * 100;
                                    } else {
                                        new_distance = needed_distance;
                                    }
                                    cout << "\tFuel consumption would be " << new_fuel_consumption << " l per 100 km." << endl;
                                    new_time = (new_distance / new_speed) * 3600;
                                    new_fuel_spending = (needed_distance/100) * (new_fuel_consumption);
                                    cout << "\tYou'd need " << new_fuel_spending << " l of fuel to reach your destination." << endl;
                                    if (new_distance == needed_distance) {
                                        cout << "\tYou could save " << fuel_spending - new_fuel_spending << " l of fuel." << endl;
                                        cout << "\tIt would take " << int(new_time) / 3600 << " h " << int(new_time - (3600 * (int(new_time)/3600))) / 60 << " min " << int(new_time) % 60 << " sec." ;
                                    } else {
                                        cout << "\tYou wouldn't reach your destination anyway, but you could drive " << new_distance - distance << " kms more.";
                                    }

                                } else {
                                    cout << "Invalid data";
                                    return 0;
                                }
                            } else {
                                cout << "Invalid data";
                                return 0;
                            }
                        } else {
                            cout << "Gave over. Too much gas!" << endl;
                            return 0;
                        }
                    } else {
                        cout << "Invalid data";
                        return 0;
                    }
                
                } else {
                    cout << "Invalid data";
                    return 0;
                }

            } else {
                cout << "Invalid data";
                return 0;
            }
        } else {
            cout << "invalid data";
            return 0;
        }

    } else {
        cout << "Invalid data";
        return 0;
    }
}