// ИТ(4.2).cpp 

#include <iostream>
using namespace std;

int main()
{
	float a, b;
	cout << "How mach fuel do you have at start ?  ";
	cin >> a;	
	if (a <= 50)
	{
		cout << "\nCar stats \n";
		cout << "Fuel : " << a << "\n";
		cout << "Fuel capacity : 50 \n";
		cout << "Fuel consumpition: 0 \n";
		cout << "Speed: 0 \n";
		cout << "Maximum speed: 110 \n";
		cout << "Route info \n";
		cout << "Distance: 360 km \n";
		cout << "------------------------------------------------ \n";
		cout << "You have to drive a route 360 km long. \n";
		cout << "But first you need to check if you have enough fuel. \n";


		if (a < 50 && a > 25)
		{
			cout << "\nWhat speed will you choose? ";
			cin >> b;
			if (b < 110)
			{
				cout << "Your speed before start: " << b << " km/h\n";
			}

			if (b > 110)

			{
				cout << "Your speed before start: 110 km/h\n";
			}

			float s = b / 10; // формула в лаб
			float k = s * s / 4 - 4.5 * s + 30; //расчет затраты на 100 км
			cout << "Fuel consumption with chosen speed " << k << " litres per 100 km \n";
			cout << "\nDistance result\n";
			
			float t = int((360 / b) * 3600); // расчет времени 
			float s1 = ((360 * a) / k * 3.6);
			cout << "Distance traveled:" << s1 << " km\n"; // расчет пути
			cout << "Time spent: " << int((s1 / b) * 3600) << " sec\n"; // расчет времени 
			cout << "Fuel consume " << (s1 * k) / 100 << " liters\n"; // расчет топлива нужного 

			
			float p = (360 * k) / 100;
			cout << "Fuel remained : " << a - p <<" litres\n"; 

		}
		if (a < 25)

		{
			a += 25;
			cout << "\nYour fuel  start: " << a << "\n";

			cout << "\nWhat speed will you choose? ";
			cin >> b;

			if (b < 110)

			{
				cout << "Your speed before start: " << b << " km/h\n";
			}

			if (b > 110)

			{
				cout << "Your speed before start: 110 km/h\n";
			}

			float s = b / 10;
			float k = s * s / 4 - 4.5 * s + 30;// затраты на 100 km
			cout << "Fuel consumption with chosen speed " << k << " litres per 100 km \n";
			cout << "\nDistance result\n";
			
			float s1 = (360 * a / k ); // расчет пути пройденного 
			cout << "Distance traveled: "<< s1 <<" km\n";
			cout << "Time spent: " << int((s1 / b) * 3600) << " sec\n";
			cout << "Fuel consume " << (s1 * k)/100 <<" liters\n";
			
			float p = (s1 * k) / 100;
			cout << "Fuel remained : " << a - p << " litres\n";

		}


	}
		
	else
	{
		cout << "\nInvalid data\n" << endl;
	}
	return 0;
}

