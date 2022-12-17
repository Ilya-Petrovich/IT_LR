#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int topl, speed;
	float fuelConsumption, s, distancetraveled, timespent, fuelconsumed, fuelremained, nexvatka;
	cout << "How much fuel do you have at start? "; cin >> topl;
	cout << "" << '\n';
	if (topl >= 0 and topl <= 50) {
		cout << "Car stats" << '\n';
		cout << "Fuel: " << topl << '\n';
		cout << "Fuel capacity: " << 50 << '\n';
		cout << "Fuel consumption: " << 0 << '\n';
		cout << "Speed: " << 0 << '\n';
		cout << "Maximum speed: " << 110 << '\n';
		cout << "" << '\n';



		cout << "Route info" << '\n';
		cout << "Distance: " << 360 << " km" << '\n';
		cout << "----------------------------------------" << '\n';
		cout << "You have to drive a route " << 360 << " km long." << '\n';
		cout << "But first you need to check if you have enough fuel." << '\n';
		cout << "" << '\n';

		char zapr;
		int zpr;
		cout << "Do you need a refill? "; cin >> zapr;
		if (zapr == 'y') {
			cout << "" << '\n';
			cout << "Choose an option." << '\n';
			cout << "a. 10 litres" << '\n';
			cout << "b. 20 litres" << '\n';
			cout << "c. 30 litres" << '\n';
			cout << "d. custom amount" << '\n';
			cout << "" << '\n';
			cout << "Your choice: "; cin >> zapr;
			cout << "" << '\n';
			if (zapr == 'a') {
				topl += 10;
			}
			else if (zapr == 'b') {
				topl += 20;
			}
			else if (zapr == 'c') {
				topl += 30;
			}
			else if (zapr == 'd') {
				cout << "How much fuel do you need? "; cin >> zpr;
				topl += zpr;
			}
		}

		if (topl > 50 or topl < 0) {
			cout << "Game over. Too much gas!" << '\n';
			exit(1);
		}

		cout << "Your fuel before start: " << topl << '\n' << '\n';

		cout << "What speed will you choose? "; cin >> speed;

		if (speed >= 0) {
			if (speed > 110) {
				speed = 110;
			}

			cout << "Your speed before start: " << speed << " km/h" << '\n';
			cout << "" << '\n';

			s = speed / 10.0;

			float a, b, c;

			cout << "Type in equation parameters." << '\n';
			cout << "a = "; cin >> a;
			cout << "b = "; cin >> b;
			cout << "c = "; cin >> c;

			if (speed > 0) {
				fuelConsumption = s * s * a + b * s + c;
			}
			else {
				fuelConsumption = 0;
			}

			cout << "" << '\n';
			cout << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km" << '\n';
			cout << "" << '\n';

			cout << "Destination result" << '\n';
			distancetraveled = topl / fuelConsumption * 100;
			if (distancetraveled > 360 and speed > 0) {
				cout << "Distance traveled: " << 360 << " km" << '\n';
				timespent = 360.0 / speed * 3600;
				distancetraveled = 360;
			}
			else if (speed > 0) {
				cout << "Distance traveled: " << distancetraveled << " km" << '\n';
				timespent = distancetraveled * 3600 / speed;
			}
			else {
				cout << "Distance traveled: " << 0 << " km" << '\n';
				distancetraveled = 0;
				timespent = 0;
			}

			int hour, min, sec;
			timespent = (int)timespent;
			hour = timespent / 3600;
			timespent -= hour * 3600;
			min = timespent / 60;
			timespent -= min * 60;
			sec = timespent;
			cout << "Time spent: " << hour << " h " << min << " min " << sec << " sec." << '\n';


			fuelconsumed = distancetraveled / 100 * fuelConsumption;
			fuelremained = topl - fuelconsumed;;

			if (fuelconsumed > topl and speed > 0) {
				cout << "Fuel consumed: " << topl << " litres" << '\n';
				cout << "Fuel remained: " << 0 << " litres" << '\n';
			}
			else if (speed > 0) {
				cout << "Fuel consumed: " << fuelconsumed << " litres" << '\n';
				cout << "Fuel remained: " << fuelremained << " litres" << '\n';
			}
			else {
				cout << "Fuel consumed: " << 0 << " litres" << '\n';
				cout << "Fuel remained: " << topl << " litres" << '\n';
			}
			cout << "----------------------------------------" << '\n';

			if (distancetraveled >= 360) {
				cout << "Congratulations! You have reached destination point!" << '\n';
			}
			else {
				if (speed > 0) {
					nexvatka = round((360 - distancetraveled) * 10000) / 10000.0;
				}
				else {
					nexvatka = 360;
				}
				cout << "You haven't reached destination point. " << nexvatka << " km left." << '\n';
			}


			cout << "" << '\n';
			float opts, fcs2, fc2, save, ts2, ds2;
			opts = 10 * (-b / (2 * a));
			s = opts / 10;
			fcs2 = s * s * a + b * s + c;
			cout << "The optimal speed for that car is " << opts << " km/h." << '\n';
			cout << "With that speed:" << '\n';
			cout << "   Fuel consumption would be " << fcs2 << " l per 100 km." << '\n';
			fc2 = 360.0 / 100 * fcs2;
			save = fuelconsumed - fc2;
			save = ceil(save * 10) / 10.0;
			cout << "   You'd need " << fc2 << " l of fuel to reach your destination." << '\n';
			ds2 = topl / fcs2 * 100;
			if (ds2 < 360) {
				cout << "   You wouldn't reach any destination anyway, but you could drive " << ds2 - distancetraveled << " kms more." << '\n';
				exit(1);
			}
			cout << "   You could save " << save << " l of fuel." << '\n';
			ts2 = 360 * 3600 / opts;
			ts2 = (int)ts2;
			hour = ts2 / 3600;
			ts2 -= hour * 3600;
			min = ts2 / 60;
			ts2 -= min * 60;
			sec = ts2;
			cout << "   Time spent: " << hour << " h " << min << " min " << sec << " sec." << '\n';
		}
		else {
			cout << "" << '\n';
			cout << "Invalid data." << '\n';
		}
	}
	else {
		cout << "Invalid data." << '\n';
	}
	return 0;
}