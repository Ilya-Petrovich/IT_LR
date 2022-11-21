#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	int fuel,speed, timefin; 
	float dis = 360, time, s, fc, fcon, frem,disne, disno;
	cout << "How much fuel do you have at start? "; cin >> fuel;
	if (fuel > 50 || fuel < 0) {
		cout << "Invalid data." << endl;
	}
	else {
		cout << "Car stats" << endl;
		cout << "Fuel: " << fuel << endl;
		cout << "Fuel capacity: " << 50 << endl;
		cout << "Fuel consumption: " << 0 << endl;
		cout << "Speed: " << 0 << endl;
		cout << "Maximum speed: " << 110 << endl;
		cout << endl;
		cout << "Route info" << endl;
		cout << "Distance: " << 360 << " km" << endl;
		cout << "---------------------------------" << endl;
		cout << "You have to drive a route 360 km long." << endl;
		cout << "But first you need to check if you have enough fuel." << endl;
		if (fuel < 25) {
			fuel = fuel + 25;
			cout << "Your fuel befort start: " << fuel << endl;
		}
		else fuel = fuel;
		cout << "What speed will you choose? "; cin >> speed;
		if (speed > 110) speed = 110;
		else speed = speed;
		cout << "Your speed befort start: " << speed << " km/h" << endl;
		s = (float)speed / 10;
		fc = ((s * s)/4 - (4.5 * s)) + 30;
		cout << "Fuel consumption with chosen speed: " << fc << " litres per 100 km" << endl;
		cout << "Destination result" << endl;
		if (fuel - fc * 3.6 > 0) {
			cout << "Distance traveled: " << dis << " km" << endl;
			time = dis / speed;
			timefin = time * 3600;
			cout << "Time spent: " << timefin << " sec" << endl;
			fcon = fc * 3.6;
			frem = fuel - fcon;
			cout << "Fuel consumed: " << fcon << " litres" << endl;
			cout << "Fuel remained: " << frem << " litres" << endl;
			cout << "--------------------------------------" << endl;
			cout << "Congratulations! You have reached destrination point!" << endl;
		}
		else {
			disne = ((fc * 3.6 - fuel) * 360) / (fuel + (fc * 3.6 - fuel));
			disno = 360 - disne;
			cout << "Distance traveled: " << disno << " km" << endl;
			time = disno / speed;
			timefin = time * 3600;
			cout << "Time spent: " << timefin << " sec" << endl;
			cout << "Fuel consumed: " << fuel << " litres" << endl;
			cout << "Fuel remained: " << 0 << " litres" << endl;
			cout << "--------------------------------------" << endl;
			cout << "You haven't reached destination point. " << disne << " km left.";
		}
	}
		return 0;
}