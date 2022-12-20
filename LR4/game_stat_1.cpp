#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int fu, f, speed{}, road = 360;
	float s, rashod, proiden, time, ostatok, zatrachen;
	cout << "how much fuel do you have a start? "; cin >> f;
	if (f >= 0 and f <= 50) {
		cout << "Car stats\nFuel: " << f << '\n' << "Fuel consumption: 0\nSpeed: 0 \nMaximum speed: 110\n\n";
		cout << "Route info\nDistance: " << road << " km" << '\n';
		cout << "----------------------------------------" << '\n';
		cout << "You have to drive a route 360 km long\nBut first you need to check if you have enough fuel.\n\n";
		if (f < 26) {
			fu = f + 25;
		}
		else {
			fu = f + 0;
		}
		cout << "Your fuel before start: " << fu << '\n' << '\n';
		cout << "What speed will you choose? "; cin >> speed; '\n';
		cout << "Your speed before start: " << speed << " km/h\n";
		if (speed < 0) {
			cout << "invalid data";
		}
		else {
			if (speed > 110) {
				speed = 110;
			}
			s = (float)speed / 10;
			if (speed == 0) {
				rashod = 0;
			}
			else {
				rashod = s * s / 4 - 4.5 * s + 30;
			}
			cout << "Fuel consumption with chosen speed: " << rashod << " litres per 100 km\n\n";

			if (rashod == 0) {
				proiden = 0;
			}
			else {
				proiden = fu / rashod * 100;
			}
			if (proiden >= 360) {
				proiden = 360;
				cout << "Distance traveled: 360 km\n";
			}
			else {
				cout << "Distance traveled: " << proiden << " km" << '\n';
			}
			if (speed == 0) {
				time = 0;
			}
			else {
				time = proiden / speed * 3600;
			}
			cout << "Time spent: " << int(time) << " sec" << '\n';
			if (rashod == 0) {
				zatrachen = 0;
			}
			else {
				zatrachen = proiden * rashod / 100;
			}
			cout << "Fuel consumed: " << zatrachen << " litres" << '\n';
			ostatok = fu - zatrachen;
			cout << "Fuel remained: " << round(ostatok * 1000) / 1000 + 0 << " litres" << '\n';
			cout << "----------------------------------------" << '\n';
			if (proiden >= 360) {
				cout << "Congratulations ! You have reached destination point!";
			}
			else {
				cout << "You haven't reached destination point. " << 360 - proiden << " km left.";
			}
		}
	}
	else {
		cout << "invalid data";
	}
}