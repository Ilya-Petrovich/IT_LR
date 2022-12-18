#include <iostream>

using namespace std;
int main(){
	char answer, choice;
	int speed, time, custom_amount;
	double fuel, s, distance = 0, fuelConsumed = 0, fuelConsumption, fuelRemained, a, b, c;
	cout << " How much fuel do you have at start? " << endl;
	cin >> fuel;
	if ((fuel < 0) || (fuel > 50)) {
		cout << " Invalid data " << endl;
		return 0;
	}
	// начальная информация об автомобиле и маршруте
	cout << " Car starts " << endl;
	cout << " Fuel: " << fuel << endl;
	cout << " Fuel capacity: 50 " << endl;
	cout << " Fuel consumption: 0 " << endl;
	cout << " Speed: 0 " << endl;
	cout << " Maximum speed: 110 " << endl;
	cout << " Route info " << endl;
	cout << " Distance: 360 km " << endl;
	cout << " You have to drive a route 360 km long. " << endl;
	cout << " But first you need to check if you have enough fuel. " << endl;
	cout << " Do you need a refill " << endl;
	cin >> answer;
	if (answer == 'y') {
		cout << " Choose an option. " << endl;
		cout << " a. 10 litres " << endl;
		cout << " b. 20 litres " << endl;
		cout << " c. 30 litres " << endl;
		cout << " d. custom amount" << endl;
		cout << " Your choice: " << endl;
		cin >> choice;
		if (choice == 'a') {
			fuel = fuel + 10;
		}
		if (choice == 'b') {
			fuel = fuel + 20;
		}
		if (choice == 'c') {
			fuel = fuel + 30;
		}
		if (choice == 'd') {
			cout << " How muh do you need? " << endl;
			cin >> custom_amount;
			fuel = fuel + custom_amount;
		}
	}
	cout << " Yor fuel before start: " << fuel << endl;
	if (fuel > 50) {
		cout << " Game over. Too much gas! " << endl;
		return 0;
	}
	cout << " What speed will you choose? " << endl;
	cin >> speed;
	if (speed > 110) {
		speed = 110;
	}
	// проверка корректности вводимых значений
	if (speed < 0) {
		cout << "Invalid data" << endl;
		return 0;
	}
	else if (speed == 0) {
		fuelConsumption = 0;
		distance = 0;
		time = 0;
	}
	cout << " Your speed before start: " << speed << " km/h " << endl;
    if (speed > 0){
        cout << "Type in equation parameters."<< endl;
        cout << "a = " << endl;
        cin >> a;
        cout << "b = " << endl;
        cin >> b;
        cout << "c = " << endl;
        cin >> c;
        // вычиление результатов
		s = double(speed) / 10;
		fuelConsumption = a * s * s + b * s + c;
		distance = fuel * 100 / fuelConsumption;
		if (distance > 360) {
			distance = 360;
		}
        time = distance / speed * 3600;
    }
	cout << " Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km " << endl;
	fuelConsumed = distance * fuelConsumption / 100;
	fuelRemained = fuel - fuelConsumed;
	// результаты
	cout << " Destination result " << endl;
	cout << " Distance travelled: " << distance << " km " << endl;
	cout << " Time spent: " << time / 3600 << " hour " << (time - time / 3600) / 60 << "min" << time - ((time - time / 3600) / 60) << "sec" << endl;
	cout << " Fuel consumed: " << fuelConsumed << " litres " << endl;
	cout << " Fuel remained: " << fuelRemained << " litres " << endl;
	if (distance == 360) {
		cout << " Congratulations! You have reached destination point! " << endl;
	}
	else {
		cout << " You haven't reached destination point. " << 360 - distance << " km left " << endl;
	}
	return 0;
}