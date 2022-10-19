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



int main() {
    float fuel, fuel_capacity, fuel_consumption, speed, s, max_speed, needed_distance, distance, distance_left, time, fuel_spending, fuel_remained;
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
                        if (fuel < (fuel_capacity / 2)) { 
                            fuel += fuel_capacity / 2;
                            cout << endl << "Your fuel before start: " << fuel << endl << endl;
                        }
                        cout << "What speed will you choose? "; cin >> speed; cout << endl;
                        if (speed >= 0) { //проверка ввода скорости
                            if (speed > max_speed) { 
                                speed = max_speed;
                            }
                            cout << "Your speed before start: " << speed << " km/h" << endl;
                            s = speed/10;
                            if (speed == 0) { 
                                fuel_consumption = 0;
                                distance = 0;
                                time = 0;
                            } else {
                                fuel_consumption = s * s / 4 - 4.5 * s + 30; //вычисление переменных:
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
                            cout << "Time spent: " << trunc(time) << " sec" << endl;
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
                                cout << "You haven't reached destination point. " << (trunc(distance_left * 100)) / 100.0 << " km left.";
                            } else {
                                cout << "Congratulations! You have reached destination point!";
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
}//ОШИБКА ПРИ SPEED = 0, inf time