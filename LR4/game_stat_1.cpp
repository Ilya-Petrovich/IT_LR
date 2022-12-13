#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int Fuel_Capacity = 50, Maximum_Speed = 110, Distance = 360, Time_Spent, Speed = 0;
	float Fuel, Fuel_Consumption = 0, s, Fuel_Consumed, Fuel_Remained, Distance_Traveled;
	cout << "How much fuel do you have at start? "; cin >> Fuel; cout << endl;
	if (Fuel < 0 or Fuel > 50) { // Проверка на корректность ввода количества бензина
		cout << "Invalid data";
		return 0;
	}
	cout << "Car stats" << endl;
	cout << "Fuel: " << Fuel << endl;
	cout << "Fuel capacity: " << Fuel_Capacity << endl;
	cout << "Fuel consumption: " << Fuel_Consumption << endl;
	cout << "Speed: " << Speed << endl;
	cout << "Maximum speed: " << Maximum_Speed << endl << endl;
	cout << "Route info" << endl;
	cout << "Distance: " << Distance << " km" << endl;
	cout << "----------------------------------------" << endl;
	cout << "You have to drive a route " << Distance << " km long." << endl;
	cout << "But first you need to check if you have enough fuel." << endl << endl;
	if (Fuel < 25) { // Проверка на нужность дозаправки
		Fuel += 25;
		cout << "Your fuel before start: " << Fuel << endl << endl;
	}
	cout << "What speed will you choose? "; cin >> Speed;
	if (Speed >= 110) { // Проверка на превышение максимальной скорости
		Speed = 110;
	}
	if (Speed < 0) { // Проверка на существование данной скорости
		cout << "Invalid data";
		return 0;
	}
	cout << "Your speed before start: " << Speed << " km/h" << endl;
	s = (float)Speed / 10;
	Speed != 0 ? Fuel_Consumption = s * s / 4 - 4.5 * s + 30 : Fuel_Consumption = 0; // При скорости 0, значение расхода должно быть 0
	cout << "Fuel consumption with chosen speed: " << Fuel_Consumption << " litres per 100 km" << endl << endl;
	cout << "Destination result" << endl;
	if (Speed != 0) {  // При скорости 0, пройденная дистанция должна быть равна 0
		if (100 * Fuel / Fuel_Consumption < Distance) {
			Distance_Traveled = 100 * Fuel / Fuel_Consumption;
		}
		else {
			Distance_Traveled = Distance;
		}
	}
	else {
		Distance_Traveled = 0;
	}
	cout << "Distance traveled: " << Distance_Traveled << " km" << endl;
	Speed != 0 ? Time_Spent = Distance_Traveled * 1000 / (Speed * 1000 / 3600) : Time_Spent = 0;
	cout << "Time spent: " << Time_Spent << " sec" << endl;
	Fuel_Consumed = Distance_Traveled * Fuel_Consumption / 100;
	cout << "Fuel consumed: " << Fuel_Consumed << " litres" << endl;
	Fuel - Fuel_Consumed < 0 ? Fuel_Remained = 0 : Fuel_Remained = float(Fuel) - Fuel_Consumed;
	cout << "Fuel remained: " << Fuel_Remained << " litres" << endl;
	cout << "----------------------------------------" << endl;
	if (Distance_Traveled == Distance) { // Проверка на достижение заданной цели
		cout << "Congratulations! You have reached destination point!";
	}
	else {
		cout << "You haven't reached destination point. " << (float)Distance - Distance_Traveled << " km left.";
	}
	
}