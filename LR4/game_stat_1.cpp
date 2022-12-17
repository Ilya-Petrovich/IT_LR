#include<iostream>

using namespace std;

int main() {
	int speed, time;
	float fuel, s, distance = 0, fuelConsumed = 0, fuelConsumption, fuelRemained;
	cout << " How much fuel do you have at start? ";
	cin >> fuel;
	if ((fuel < 0) || (fuel > 50)) {
		cout << " Invalid data ";
		return 0;
	} 
	// начальная информация об автомобиле и маршруте
	cout << " \n Car starts " << endl;
	cout << " Fuel: " << fuel << endl;
	cout << " Fuel capacity: 50 " << endl;
	cout << " Fuel consumption: 0 " << endl;
	cout << " Speed: 0 " << endl;
	cout << " Maximum speed: 110 " << endl;
	cout << " \n Route info " << endl;
	cout << " Distance: 360 km " << endl;
	cout << " \n You have to drive a route 360 km long. " << endl;
	cout << " But first you need to check if you have enough fuel. " << endl;
	if (fuel < 25) {
		fuel = fuel + 25;
		cout << "\n You didn't have enough fuel. Fuel after adding: " << fuel << endl; // наполнение бака
	}
	cout << " \n What speed will you choose? ";
	cin >> speed;
	if (speed > 110) {
		speed = 110;
	}
	// проверка корректности вводимых значений
	if (speed < 0) {
		cout << "Invalid data" << endl;
		return 0;
	} else if (speed == 0) {
		fuelConsumption = 0;
		distance = 0;
		time = 0;
	} else {
		// вычиление результатов
		s = float(speed) / 10;
		fuelConsumption = s * s / 4 - 4.5 * s + 30;
		distance = fuel * 100 / fuelConsumption;
		if (distance > 360) {
			distance = 360;
		}
		time = distance / speed * 3600;
	}
	cout << " Your speed before start: " << speed << " km/h " << endl;
	cout << " \n Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km " << endl;
	fuelConsumed = distance * fuelConsumption / 100;
	if (fuelConsumed == fuel){
		fuelRemained = 0;
	} else {
		fuelRemained = fuel - fuelConsumed;
	} 
	// результаты
	cout << " \n Destination result " << endl;
	cout << " Distance travelled: " << distance << " km " << endl;
	cout << " Time spent: " << time << " sec " << endl;
	cout << " Fuel consumed: " << fuelConsumed << " litres " << endl;
	cout << " Fuel remained: " << fuelRemained << " litres " << endl;
	if (distance == 360) {
		cout << " \n Congratulations! You have reached destination point! " << endl;
	}
	else {
		cout << " \n You haven't reached destination point. "<< 360 - distance << " km left " << endl;
	}
	return 0;
}