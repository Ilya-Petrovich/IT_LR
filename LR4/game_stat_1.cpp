#include <iostream>
using namespace std;
int main(){
	int Fuel,Speed;
	double Distance, FuelConsumption, FuelCons, dist=0;

	cout<<"How much fuel do you have at start? ";cin>>Fuel;

	if (Fuel<0||Fuel>50){
		cout<<"\nInvalid data";
		return 0;
	}

	cout<<"\nCar stats\nFuel: "<<Fuel;
	cout<<"\nFuel copacity: 50\nFuel consumption: 0\nSpeed: 0\nMaximum speed: 110\n";
	cout<<"\nRoute info\nDistance: 360 km\n";
	cout<<"----------------------------------------\n";
	cout<<"You have to drive a route 360 km long.\nBut first you need to check if you have enough fuel.\n";

	if(Fuel<25){
		Fuel+=25;
		cout<<"\nYour fuel before start: "<<Fuel<<"\n";
	}

	cout<<"\nWhat speed will you choose? "; cin>>Speed;

	if(Speed<0){
		cout<<"\nInvalid data";
		return 0;
	}

	if(Speed>110) Speed=110;

	if (Speed == 0) {
		printf("Your spped before start: 0 km/h\n");
		cout << "\nFuel consumption with choosen speed: 0 litres per 100 km\n";
		cout << "\nDestination result\nDistance traveled: 0 km\n";
		cout << "Time spent: 0 sec\n";
		cout << "Fuel consumed: 0 litres\nFuel remained: " << Fuel << " litres\n";
		cout << "----------------------------------------\n";
		cout << "You haven't reached destination point. 360 km left.";
	}
	else {
		float s = float(Speed) / 10;
		FuelConsumption = s * s / 4 - 4.5 * s + 30;

		printf("Your spped before start: %d km/h\n", Speed);
		cout << "\nFuel consumption with choosen speed: " << FuelConsumption << " litres per 100 km\n";

		Distance = Fuel / FuelConsumption * 100;

		if (Distance > 360) Distance = 360;

		FuelCons = FuelConsumption * 3.6f;

		if (FuelCons > Fuel) FuelCons = Fuel;

		cout << "\nDestination result\nDistance traveled: " << Distance << " km\n";
		cout << "Time spent: " << int(Distance / Speed * 3600) << " sec\n";
		cout << "Fuel consumed: " << FuelCons << " litres\nFuel remained: " << Fuel - FuelCons << " litres\n";
		cout << "----------------------------------------\n";

		if (Distance == 360) {
			cout << "Congratulations! You have reached destination point!";
			return 0;
		}

		cout << "You haven't reached destination point. " << 360 - Distance << " km left.";
	}
}