#include <iostream>
#include <cmath>
using namespace std;
int main()
{
double f, sp, s, d = 360, dt, fuelRemained, fuelConsumed, fuelConsumption;
int t;
cout << "How much fuel do you have at start? "; cin >> f;
if (f < 0 or f>50) {
cout << "\nInvalid data."; return 0;
}
cout << "\nCar stats\nFuel: "<<f<<"\nFuel capacity: 50\nFuel consumption: 0\nSpeed: 0\nMaximum speed: 110\n";
cout << "\nRoute info\nDistance: 360 km\n";
cout << "----------------------------------------\nYou have to drive a route 360 km long.\nBut first you need to chek if you have enough fuel.\n";
if (f < 26) { f += 25; cout << "\nYour fuel before start: " << f << endl;
}
cout << "\nWhat speed will you choose? "; cin >> sp;
if (sp > 110) sp = 110;
if (sp < 0) {
cout << "Invalid data."; return 0;
}
cout << "Your speed before start: " << sp << " km/h\n";
s = sp / 10;
fuelConsumption = s * s / 4 - 4.5 * s + 30;
if (sp == 0) fuelConsumption = 0;
cout << "Fuel consumption with chosen speed: " <<fuelConsumption << " litres per 100 km\n";
dt = f / fuelConsumption * 100;
if (dt > 360) dt = 360;
t = dt / sp * 3600;
fuelConsumed = fuelConsumption * dt / 100;
fuelRemained = f - fuelConsumed;
if (sp == 0) {
t = 0; dt = 0;
}
cout << "\nDestination result\nDistance traveled: " << dt <<" km\nTime spent: " << t << " sec\nFuel consumed: " << fuelConsumed << " litres\nFuel remained " << fuelRemained << " litres\n----------------------------------------\n";
if (dt == 360) cout << "Congratulations! You have reached destination point!";
else cout << "You haven't reached destination point. " << 360 - dt << " km left.";
}