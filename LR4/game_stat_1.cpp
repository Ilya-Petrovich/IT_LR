#include <iostream>
using namespace std;
int main() {
	int t = 0;
	float f, s, fct, d, fc = 0, fr = 0, nd;
	cout << "How much fuel do you have at start? "; cin >> f;
	if (f >= 0 && f <= 50) {
		cout << "\nCar stats" << "\nFuel: " << f << "\nFuel capacity: 50" << "\nFuel consumption: 0" << "\nSpeed: 0"
			<< "\nMaximum speed: 110" << "\n\nRoute info" << "\nDistance: 360 km" << "\n----------------------------------------"
			<< "\nYou have to drive a route 360 km long." << "\nBut first you need to check if you have enough fuel.";
		if (f <= 25) {
			f = f + 25;
			cout << "\n\nYour speed before start: " << f;
		}
		cout << "\n\nWhat speed will you choose? "; cin >> s;
		cout << "Your speed before start: ";
		if (s >= 0 && s <= 110) {
			cout << s;
		}
		else if (s > 110) {
			s = 110;
			cout << s;
		}
		else {
			cout << "\nInvalid Data" << endl << endl;
			system("pause");
			return 0;
		}
		cout << " km/h";
		if (s == 0) {
			fct = 0;
			d = 0;
			t = 0;
		}
		else {
			fct = s / 10 * s / 10 / 4 - 4.5 * s / 10 + 30;
			d = f / fct * 100;
			if (d > 360) {
				d = 360;
			}
			t = d / s * 3600;
		}
		fc = d / 100 * fct;
		fr = f - fc;
		nd = 360 - d;
		cout << "\n\nFuel consumption with chosen speed: " << fct << " litres per 100 km" << "\n\nDestination result"
			<< "\nDistance traveled: " << d << " km" << "\nTime spent: " << t << " sec" << "\nFuel consumed: "
			<< fc << " litres" << "\nFuel remained: " << fr << " litres" << "\n----------------------------------------";
		if (d == 360) {
			cout << "\nCongratulations! You have reached destination point!" << endl << endl;
		}
		else {
			cout << "\nYou haven't reached destination point. " << nd << " km left." << endl << endl;
		}
	}
	else {
		cout << "\nInvalid Data" << endl << endl;
	}
	system("pause");
	return 0;
}