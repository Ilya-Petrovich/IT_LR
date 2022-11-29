#include<iostream>
using namespace std;

int main()
{
	int  S = 360, maxV = 110, T, V = 0;
	double fuelConsumption, V1, K, D, Fuelconsumed, Fuelremained, Fuelcapacity = 50;
	cout << " How much fuel do you have at start? "; cin >> K;
	cout << "\n";

	if (K > 25 && K < 50) {
		cout << " Car stats " << endl;
		cout << " Fuel: " << K << endl;
	}
	else if (K>0 && K< 25){
		cout << " Car stats " << endl;
		K = K + Fuelcapacity / 2;
		cout << " Fuel: " << K << endl;
	}
	else {
		cout << " Invalid data " << endl;
		return 0;
	}

	cout << " Fuel capacity: " << Fuelcapacity << endl;
	cout << " Fuel consumption: " << 0 << endl;
	cout << " Speed: " << V << endl;
	cout << " Maximum speed: " << maxV << endl;
	cout << "\n";
	cout << " Route info " << endl;
	cout << " Distance: " << S << " km " << endl;
	cout << "---------------------------------------" << endl;
	cout << " You have to drive a route 360 km long. " << endl;
	cout << " But first you need to check if you have enough fuel. " << endl;
	cout << "\n";
	cout << " What speed will you choose? "; cin >> V;
	
	if (V > maxV) {
		V = maxV;
		cout << " Your speed before start: " << V << " km/h " << endl;
	}
	else if (V < 0) {
		cout << " Invalid data " << endl;
		return 0;
	}
	else {
		cout << " Your speed before start: " << V << " km/h " << endl;
	}

	if (V == 0) {
		fuelConsumption = 0;
		cout << " Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km " << endl;
	}
	else {
		V1 = (double)V / 10;
		fuelConsumption = V1 * V1 / 4 - 4.5 * V1 + 30;
		cout << " Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km " << endl;
	}
	cout << "\n";
	cout << " Destination result " << endl;
	
	if (fuelConsumption == 0) {
		D = 0;
		T = 0;
		Fuelconsumed = 0;
		Fuelremained = 0;
	}
	else {
		D = (K / fuelConsumption) * 100;
		if (D > 360)
			D = 360;
		Fuelconsumed = D / 100 * fuelConsumption;
		Fuelremained = K - Fuelconsumed;
		T = (D / V) * 3600;
	}
	cout << " Distance traveled: " << D << " km " << endl; 
	cout << " Time spent: " << T << " sec " << endl; 
	cout << " Fuel consumed: " << Fuelconsumed << " litres " << endl;
	cout << " Fuel remained: " << Fuelremained << " litres " << endl;
	cout << "---------------------------------------" << endl;
	
	if (D == 360) {
		cout << " Congratulations! You have reached destination point! " << endl;
	}
	else if (D == 0) {
		cout << " You haven't reached destination point. 360 km left. " << endl;
	}
	else {
		cout << " You haven't reached destination point. " << (double)S - D << " km left. " << endl;
	}
	return 0;
}



