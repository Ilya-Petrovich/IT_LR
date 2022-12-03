#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int speed = 0, time = 0, hours, minutes, seconds, optHours, optMinutes, optSeconds, maxSpeed = 110, optimalSpeed, addFuel;
	bool pointReached = false, pointReached2 = false;
	char refillOpt1, refillOpt2;
	double speedMS, optimalSpeedMS, optFullDist, fullDistance, fuel, fuelCapacity = 50.0, s = 0, distance = 360, distanceTraveled2 = 0, distanceTraveled = 0;
	double fCons, optFuelConsumption, fuelConsumption = 0, optFuelConsumed, fuelConsumed = 0, a, b, c;
	cout << "How much fuel do you have at start? "; cin >> fuel;
	if (fuel >= 0 && fuel <= fuelCapacity)
	{
		cout << "\n\nCar stats" << endl;
		cout << "Fuel: " << fuel << endl;
		cout << "Fuel capacity: " << fuelCapacity << endl;
		cout << "Fuel consumption: " << fuelConsumption << endl;
		cout << "Speed: " << speed << endl;
		cout << "Maximum speed: " << maxSpeed << endl;

		cout << "\nRoute info" << endl;
		cout << "Distance: 360 km" << endl;
		cout << "----------------------------------------------" << endl;
		cout << "You have to drive a route 360 km long." << endl;
		cout << "But first you need to check if you have enough fuel." << endl;

		cout << "\nDo you need a refill? "; cin >> refillOpt1;
		switch (refillOpt1)
		{
		    case 'y':
		    cout << "\n\nChoose an option." << endl;
		    cout << "a. 10 litres" << endl;
		    cout << "b. 20 litres" << endl;
		    cout << "c. 30 litres" << endl;
		    cout << "d. custom amount" << endl;
		    cout << "\nYour choise: "; cin >> refillOpt2;
		    switch(refillOpt2)
		    {
		        case 'a': fuel += 10; break;
		        case 'b': fuel += 20; break;
		        case 'c': fuel += 30; break;
		        case 'd': cout << "\nHow much fuel do you need? "; cin >> addFuel; fuel += addFuel; break;
		    }break;
		}
		cout << "\nYour fuel before start: " << fuel << endl;
		
		if (fuel > fuelCapacity)
		{
		    cout << "\nGame over. Too much gas!";
		    return 0;
		}
		cout << "\nWhat speed will you choose? "; cin >> speed;

		if (speed < 0)
		{
			cout << "Invalid data" << endl;
			return 0;
		}
		else if (speed > maxSpeed)
		{
			speed = maxSpeed;
		}

		cout << "Your speed before start: " << speed << " km/h" << endl;
		s = (double)speed / 10;
		cout << "\nType in equation parameters." << endl;
		cout << "a = "; cin >> a;
		cout << "b = "; cin >> b;
		cout << "c = "; cin >> c;
		speed == 0 ? fuelConsumption = 0 : fuelConsumption = a * s * s + b * s + c;
		cout << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km" << endl;
		
		optFuelConsumption = 1e6;
		for (double s = 1; s <= maxSpeed; s++)
		{
		    fCons = a * (s / 10) * (s / 10) + b * (s / 10) + c;
		    if (fCons < optFuelConsumption)
		        optFuelConsumption = fCons;
		}
		for (double s = 1; s <= maxSpeed; s++)
		{
		    fCons = a * (s / 10) * (s / 10) + b * (s / 10) + c;
		    if (fCons == optFuelConsumption)
		        optimalSpeed = s;
		}

		fullDistance = fuel / fuelConsumption * 100;
		if (fullDistance < distance)
		{
			distanceTraveled = fullDistance;
			fuelConsumed = fuel;
			pointReached = false;
		}
		else
		{
			distanceTraveled = distance;
			fuelConsumed = distanceTraveled / 100 * fuelConsumption;
			pointReached = true;
		}
		
		optFullDist = fuel / optFuelConsumption * 100;
		if (optFullDist < distance)
		{
			distanceTraveled2 = optFullDist;
			optFuelConsumed = fuel;
			pointReached2 = false;
		}
		else
		{
			distanceTraveled2 = distance;
			optFuelConsumed = distanceTraveled2 / 100 * optFuelConsumption;
			pointReached2 = true;
		}

		speedMS = (double)speed / 3.6;
		optimalSpeedMS = (double)optimalSpeed / 3.6;
            speed == 0 ? time = 0 : time = distanceTraveled * 1000 / speedMS;
        hours = time / 3600; time -= hours * 3600;
        minutes = time / 60; time -= minutes * 60;
        seconds = time; time = distanceTraveled2 * 1000 / optimalSpeedMS;
        
        optHours = time / 3600; time -= optHours * 3600;
        optMinutes = time / 60; time -= optMinutes * 60;
        optSeconds = time;
				
		speed == 0 ? distanceTraveled = 0: distanceTraveled;
		cout << "\nDestination result" << endl;
		cout << "Distance traveled: " << distanceTraveled << " km" << endl;
		cout << "Time spent: " << hours << " h " << minutes << " min " << seconds << " sec." <<endl;
		cout << "Fuel consumed: " << fuelConsumed << " litres" << endl;
		cout << "Fuel remained: " << (int)fuel - fuelConsumed << " litres" << endl;
		cout << "----------------------------------------------" << endl;
		if (pointReached)
			cout << "Congratulations! You have reached destination point!" << endl;
		else
			cout << "You haven`t reached destination point. " << distance - distanceTraveled << " km left." << endl;
		
		cout << "\nThe optimal speed for that car is " << optimalSpeed << " km/h." << endl;
		cout << "With that speed:" << endl;
		cout << "\tFuel consumption would be " << optFuelConsumption << " l per 100 km." << endl;
		cout << "\tYou`d need " << optFuelConsumed << " l if fuel to reach your destination." << endl;
		if (pointReached2)
		{
			cout << "\tYou could save "; printf("%.1f", fuelConsumed - optFuelConsumed); cout  << " l of fuel." << optFuelConsumed << endl;
		    cout << "\tIt would take " << optHours << " h " << optMinutes << " min " << optSeconds << " sec.";
		}
		else
		{
		    cout << "\tYou wouldn`t reach your destination anyway, but you could drive " << distanceTraveled2 - distanceTraveled << " kms more.";
		}
		    
	}
	else
	{
		cout << "Invalid data" << endl;
		return 0;
	}
}