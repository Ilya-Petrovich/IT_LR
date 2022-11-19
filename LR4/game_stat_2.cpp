#include<iostream>
//using namespace std; int main() { float fuel, fuel2 = 0, speed, s, fuelConsuption, time_hour, time_min, time_sec, fuel_add, a1, b1, c1, optimal_speed, optimal_fuel, optimal_fuel_consumption; bool flag = 1; char answer, answer2; const char yes = 'y', no = 'n', a = 'a', b = 'b', c = 'c', d = 'd'; cout << "How much fuel do you at start? "; cin >> fuel;	cout << endl; if ((fuel < 0) or (fuel > 50)) { cout << "Invalid data."; return 0; } cout << "Car stats" << "\nFuel: " << fuel << "\nFuel capacity: 50" << "\nFuel consumption: 0" << "\nSpeed: 0" << "\nMaximum speed: 110" << "\n\nRoute info" << "\nDistance: 360 km" << "\n----------------------------------------" << "\nYou have to drive a route 360 km long." << "\nBut first you need to check if you have enough fuel." << "\n\nDo you need a refill? "; cin >> answer; if (answer == yes) { cout << "\nChoose an option." << "\na. 10 literes" << "\nb. 20 literes" << "\nc. 30 literes" << "\nd. custom amount" << "\n\nYour choice: "; cin >> answer2; switch (answer2) { case a: cout << endl; fuel += 10; break; case b: cout << endl; fuel += 20; break; case c: cout << endl; fuel += 30; break; case d: cout << endl; cout << "How many fuel do you need? "; cin >> fuel_add; fuel += fuel_add; break; default: cout << endl; cout << "Invalid data"; return 0; } cout << "Your fuel before start: " << fuel << endl << endl; if (fuel > 50) { cout << "Game over. Too much gas!"; return 0; } } else if (answer == no) { cout << "Your fuel before start: " << fuel << endl; } else { cout << "Invalid data"; return 0; } cout << "What speed will you choose? ";cin >> speed; if (speed < 0) { cout << "Invalid data."; return 0; } if (speed > 110) speed = 110; cout << "Your speed before start: " << speed << " km/h" << "\n\nType in equation parameters." << endl; cout << "a = "; cin >> a1; cout << "b = "; cin >> b1; cout << "c = "; cin >> c1; if (speed == 0) fuelConsuption = 0, s = 0, time_hour = 0, time_min = 0, time_sec = 0, fuel2 = fuel, fuel = 0; else { fuelConsuption = a1 * (speed / 10) * (speed / 10) + b1 * (speed / 10) + c1; s = 100 * fuel / fuelConsuption; time_hour = int(s / speed); time_min = int(s / speed * 60) % 60; time_sec = int(s / speed * 3600) % 60; } cout << "\nFuel consumption with chosen speed: " << fuelConsuption << " liters per 100 km\n\n" << "Destination result" << endl; if (s >= 360) { cout << "Distance traveled: " << 360 << "km" << endl; cout << "Time spend: " << int(360 / speed) << " h " << int(360 / speed * 60) % 60 << " min " << int(360 / speed * 3600) % 60 << " sec." << endl; cout << "Fuel consumed: " << 3.6 * fuelConsuption << " liters" << endl; cout << "Fuel remained: " << fuel - 3.6 * fuelConsuption << " liters" << endl; cout << "----------------------------------------" << endl; cout << "Congratulation! You have reached destination point!" << endl; } else { cout << "Distance traveled: " << s << "km" << endl; cout << "Time spend: " << time_hour << " h " << time_min << " min " << time_sec << " sec." << endl; cout << "Fuel consumed: " << fuel << " liters" << endl; cout << "Fuel remained: " << fuel2 << " liters" << endl; cout << "----------------------------------------" << endl; cout << "You haven't reached destination point. " << 360 - s << " km left."; } cout << endl; optimal_speed = 10 * (-b1 / (2 * a1)); optimal_fuel_consumption = a1 * (optimal_speed / 10) * (optimal_speed / 10) + b1 * (optimal_speed / 10) + c1; optimal_fuel = (a1 * (optimal_speed / 10) * (optimal_speed / 10) + b1 * (optimal_speed / 10) + c1) * 3.6; cout << "The optimal speed for that car is " << optimal_speed << " km/h." << "\nWith that speed:" << "\n   Fuel consumption would be " << optimal_fuel_consumption << " l per 100 km" << "\n   You'd need " << (a1 * (optimal_speed / 10) * (optimal_speed / 10) + b1 * (optimal_speed / 10) + c1) * 3.6 << " l of fuel to reach your destination." << endl; if (fuel < optimal_fuel) { cout << "   You wouldn't reach your destiation anyway, but you could drive " << fuel * 100 / optimal_fuel_consumption - s << " kms more." << endl; return 0; } cout << "   You could save " << 3.6 * fuelConsuption - optimal_fuel << " l of fuel." << endl; cout << "   It would take " << int(360 / optimal_speed) << " h " << int(360 / optimal_speed * 60) % 60 << " min " << int(360 / optimal_speed * 3600) % 60 << " sec." << endl; }