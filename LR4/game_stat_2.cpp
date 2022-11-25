#include <iostream>
#include <string>

using namespace std;

int main()
{
	double f=0, sp=0, s=0, d = 360, dt=0, dt2=0, fuelRemained=0, fuelConsumed=0, fuelConsumed2=0, fuelConsumption1=0, fuelConsumption=0, plus=0, a=0, b=0, c=0, fuelConsumptionTest=0, sp2=0, fuelConsumption2=0, fuelRemained2=0;
	int t=0, h=0, m=0, sec = 0;
	cout << "How much fuel do you have at start? "; cin >> f;
	if (f < 0 or f>50) {
		cout << "\nInvalid data.";
		system ("pause");
		return 0;
	}
	cout << "\nCar stats\nFuel: " << f << "\nFuel capacity: 50\nFuel consumption: 0\nSpeed: 0\nMaximum speed: 110\n";
	cout << "\nRoute info\nDistance: 360 km\n";
	cout << "----------------------------------------\nYou have to drive a route 360 km long.\nBut first you need to chek if you have enough fuel.\n";
	char Answer;
	cout << "\nDo you need a refill? "; cin >> Answer;
	if (Answer == 'y') {
		cout << "\nChoose an option.\na. 10 litres\nb. 20 litres\nc. 30 litres\nd. custom amount\n" << endl;
		cout << "Your choise: "; cin >> Answer;
		switch (Answer) {
		case 'a': f += 10; break;
		case 'b': f += 20; break;
		case 'c': f += 30; break;
		case 'd': cout << "\nHow much fuel do you need? "; cin >> plus; f += plus; break;
		}
	}
	cout << "\nYour fuel before start: " << f << endl;
	if (f > 50) {
		cout << "\nGame over. Too much gas!"; return 0;
	}
	cout << "\nWhat speed will you choose? "; cin >> sp;
	if (sp > 110) sp = 110;
	if (sp < 0) {
		cout << "Invalid data.";
		system ("pause");
		return 0;
	}
	cout << "Your speed before start: " << sp << " km/h\n";
	cout << "\nType in equation parameters.\na = "; cin >> a;
	cout << "\nb = "; cin >> b;
	cout << "\nc = "; cin >> c;
	s = sp / 10;
	fuelConsumption = a * s * s + b * s + c;
	fuelConsumption1 = fuelConsumption;
	if (s == 0) fuelConsumption = 0;
	cout << "\nFuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km\n";
	dt = f / fuelConsumption * 100;
	if (dt > 360) dt = 360;
	t = dt / s * 360;
	fuelConsumed = fuelConsumption * dt / 100;
	fuelRemained = f - fuelConsumed;
	if (s == 0) {
		t = 0; dt = 0;
	}
	h = t / 3600;
	m = (t - h*3600) / 60;
	sec = t - h * 3600 - m * 60;
	cout << "\nDestination result\nDistance traveled: " << dt << " km\nTime spent: " <<h<< " h "<<m<< " min "<<sec<<" sec.\nFuel consumed: " << fuelConsumed << " litres\nFuel remained " << fuelRemained << " litres\n----------------------------------------\n";
	if (dt == 360) cout << "Congratulations! You have reached destination point!\n";
	else cout << "You haven't reached destination point. " << 360 - dt << " km left.\n";
	for (int i = 1; i <= 110; i++)
	{
		s = i / 10;
		fuelConsumptionTest = a * s * s + b * s + c;
		if (fuelConsumptionTest < fuelConsumption) {
		    fuelConsumption = fuelConsumptionTest;
			sp2 = i;
		}
	}
	dt2 = f / fuelConsumption * 100;
	if (dt2 > 360) dt2 = 360;
	if (fuelConsumption1==fuelConsumption) {
	    cout<<"You were driving at the optimum speed!";
	    system ("pause");
	    return 0;
	}
	else {
	cout << "\nThe optimal speed for that car is " << sp2 << " km/h.";
	fuelConsumed2 = fuelConsumption * dt2 / 100;
	cout << "\nWith that speed:\n   Fuel consumption would be "<<fuelConsumption<<" l per 100 km.\n   You'd need "<<fuelConsumed2<<" l of fuel to reach your destination.";
	fuelRemained2 = f - fuelConsumed2;
	if (dt2 == 360) {
	    s = sp2 / 10;
	    t = dt2 / s * 360;
	    h = t / 3600;
	    m = (t - h*3600) / 60;
	    sec = t - h * 3600 - m * 60;
	    cout<<"\n   You could save "<<fuelConsumed-fuelConsumed2<<" of fuel.\n   It would take " <<h<< " h "<<m<< " min "<<sec<<" sec.";
	}
	else cout<<"\n   You wouldn't reach your destination anyway, but you could drive "<<dt2-dt<<" kms more.";
	}
	system ("pause");
    return 0;
}