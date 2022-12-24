#include <iostream>
#include <cmath>
using namespace std;
int telo(int kolvo)
{
	int h, m, t, sp;
	double dist, lose, s, fuelConsumption, fl1, fl2, a, b, c, newdist;
	cout << "Your fuel before start: " << kolvo;
	cout << "\n\nWhat speed will you choose? ";
	cin >> sp;
	if (sp < 0)
	{
		cout << "\nInvalid data." << endl;
		return 0;
	}
	cout << "Your speed before start: " << sp << " km/h" << endl;
	if (sp > 110)
	{
		sp = 110;
	}
	if (sp == 0)
	{
		cout << "Fuel consumption with chosen speed: 0 litres per 100 km" << endl;
		cout << "\nDestination result" << endl;
		cout << "Distance traveled: 0" << " km" << endl;
		cout << "Time spent: 0 sec" << endl;
		cout << "Fuel consumed: 0 litres" << endl;
		cout << "Fuel remained: 0 litres" << endl;
		printf("----------------------------------------\n");
		cout << "You haven't reached destination point. 360 km left." << endl;
		return 0;
	}
	cout << "\nType in equation parameters." << endl;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	s = double(sp) / 10;
	fuelConsumption = a * s * s + b * s + c;
	cout << "\nFuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km" << endl;
	cout << "\nDestination result" << endl;
	if (kolvo / fuelConsumption >= 3.6)
	{
		cout << "Distance traveled: 360 km" << endl;
		dist = 360;
	}
	else
	{
		dist = kolvo / fuelConsumption * 100;
		cout << "Distance traveled: " << dist << " km" << endl;
	}
	t = dist / sp * 3600;
	h = t / 3600;
	m = t / 60 - h * 60;
	t = t - h * 3600 - m * 60;
	cout << "Time spent: " << h << " h " << m << " min " << t << " sec." << endl;
	fl1 = dist / 100 * fuelConsumption;
	cout << "Fuel consumed: " << fl1 << " litres" << endl;
	fl2 = kolvo - fl1;
	cout << "Fuel remained: " << fl2 << " litres" << endl;
	printf("----------------------------------------\n");


	sp = -b / (2 * a) * 10;
	s = double(sp) / 10;
	fuelConsumption = a * s * s + b * s + c;
	t = dist / sp * 3600;
	h = t / 3600;
	m = t / 60 - h * 60;
	t = t - h * 3600 - m * 60;

	if (dist == 360)
	{
		cout << "Congratulations! You have reached destination point!" << endl;
		cout << "\nThe optimal speed for that car is " << sp << " km/h." << endl;
		cout << "With that speed:" << endl;
		cout << "   Fuel consumption would be " << fuelConsumption << " l per 100 km." << endl;
		cout << "   You'd need " << 3.6 * fuelConsumption << " l of fuel to reach your destination." << endl;
		cout << "   You could save " << round((fl1 - 3.6 * fuelConsumption) * 100) / 100 << " l of fuel." << endl;
		cout << "   It would take " << h << " h " << m << " min " << t << " sec." << endl;
	}
	else
	{
		lose = 360 - dist;
		lose = round(lose * 100) / 100;
		cout << "You haven't reached destination point. " << lose << " km left." << endl;
		cout << "\nThe optimal speed for that car is 90 km/h." << endl;
		cout << "With that speed:" << endl;
		cout << "   Fuel consumption would be " << fuelConsumption << " l per 100 km." << endl;
		cout << "   You'd need " << 3.6 * fuelConsumption << " l of fuel to reach your destination." << endl;
		newdist = (double)kolvo / (double)fuelConsumption * 100;
		cout.precision(7);
		newdist = (double)newdist - (double)dist;
		newdist = double(newdist) * 10000.0;
		newdist = (int)newdist;
		newdist = (double)newdist / 10000.0;
		cout << "   You wouldn't reach your destination anyway, but you could drive " << newdist << " kms more." << endl;
	}
}

int main() {
	int kolvo, ra;
	char otv, opros;
	cout << "How much fuel do you have at start? ";
	cin >> kolvo;
	if (kolvo < 0 || kolvo > 50)
	{
		cout << "\nInvalid data." << endl;
		return 0;
	}
	else
	{
		cout << "\nCar stats" << endl;
		cout << "Fuel: " << kolvo << endl;
		cout << "Fuel capacity: 50" << endl;
		cout << "Fuel consumption: 0" << endl;
		cout << "Speed: 0" << endl;
		cout << "Maximum speed: 110" << endl;
		cout << "\nRoute info" << endl;
		cout << "Distance: 360 km" << endl;
		printf("----------------------------------------\n");
		printf("You have to drive a route 360 km long.");
		cout << "\nBut first you need to check if you have enough fuel." << endl;
		cout << "\nDo you have a refill? ";
		cin >> otv;
		if (otv == 'n')
		{
			telo(kolvo);
		}
		else
		{
			cout << "\nChoose an option." << endl;
			cout << "a. 10 litres" << endl;
			cout << "b. 20 litres" << endl;
			cout << "c. 30 litres" << endl;
			cout << "d. custom amount" << endl;
			cout << "\nYour choice: ";
			cin >> opros;
			if (opros == 'a')
			{
				if ((kolvo + 10) > 50)
				{
					cout << "\nYour fuel before start: " << kolvo + 10 << endl;
					cout << "\nGame over. Too much gas!" << endl;
					return 0;
				}
				else {
					telo(kolvo + 10);
				}
			}
			if (opros == 'b')
			{
				if ((kolvo + 20) > 50)
				{
					cout << "\nYour fuel before start: " << kolvo + 20 << endl;
					cout << "\nGame over. Too much gas!" << endl;
					return 0;
				}
				else {
					telo(kolvo + 20);
				}
			}
			if (opros == 'c')
			{
				if ((kolvo + 30) > 50)
				{
					cout << "\nYour fuel before start: " << kolvo + 30 << endl;
					cout << "\nGame over. Too much gas!" << endl;
					return 0;
				}
				else {
					telo(kolvo + 30);
				}
			}
			if (opros == 'd')
			{
				cout << "\nHow much fuel do you need? ";
				cin >> ra;
				if ((kolvo + ra) > 50)
				{
					cout << "Your fuel before start: " << kolvo + ra << endl;
					cout << "\nGame over. Too much gas!" << endl;
					return 0;
				}
				else {
					telo(kolvo + ra);
				}
			}
		}
	}
	return 0;
}

