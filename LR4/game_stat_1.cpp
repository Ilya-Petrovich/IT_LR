#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int kolvo, sp, t;
	double fuelConsumption, dist, fl1, fl2, lose, s;
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
		if (kolvo < 25) 
		{
			kolvo = kolvo + 25;
		}
		cout << "Fuel: " << kolvo << endl;
		cout << "Fuel capacity: 50"<<endl;
		cout << "Fuel consumption: 0" << endl;
		cout << "Speed: 0" << endl;
		cout << "Maximum speed: 110" << endl;
		cout << "\nRoute info" << endl;
		cout << "Distance: 360 km" << endl;
		printf("-----------------------------------------------\n");
		printf("You have to drive a route 360 km long.");
		cout << "\nBut first you need to check if you have enough fuel." << endl;
		cout << "\nWhat speed will you choose? ";
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
		    cout << "Distance traveled: 0" << endl;
		    cout << "Time spent: 0 sec" << endl;
		    cout << "Fuel consumed: 0 litres" << endl;
		    cout << "Fuel remained: 0 litres" << endl;
            printf("-----------------------------------------------\n");
            cout << "You haven't reached destination point. 360 km left." << endl; 
            return 0;
		}
		s = double(sp) / 10;
		fuelConsumption = s * s / 4 - 4.5 * s + 30;
		cout << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km" << endl;
		cout << "\nDestination result" << endl;
		if (kolvo / fuelConsumption >= 3.6)
		{
		    cout << "Distance traveled: 360" << endl;
		    dist = 360;
		}
		else
		{
		    dist = kolvo / fuelConsumption * 100;
		    cout << "Distance traveled: " << dist << endl;
		}
		t = dist / sp * 3600;
		cout << "Time spent: " << t << " sec" << endl;
		fl1 = dist / 100 * fuelConsumption;
		cout << "Fuel consumed: " << fl1 << " litres" << endl;
		fl2 = kolvo - fl1;
		cout << "Fuel remained: " << fl2 << " litres" << endl;
        printf("-----------------------------------------------\n");
        if (dist == 360)
        {
            cout << "Congratulations! You have reached destination point!" << endl;
        }
        else
        {
            lose = 360 - dist;
            cout << "You haven't reached destination point. " << lose << " km left." << endl; 
        }
        
	}
	
	return 0;
}
