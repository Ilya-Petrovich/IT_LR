#include <iostream>

int main(){
	int Fuel,Speed;
	double Distance, FuelConsumption, FuelCons, dist=0;

	std::cout<<"How much fuel do you have at start? ";std::cin>>Fuel;

	if (Fuel<0||Fuel>50){
		std::cout<<"\nInvalid data.";
		return 0;
	}

	std::cout<<"\nCar stats\nFuel: "<<Fuel;
	std::cout<<"\nFuel copacity: 50\nFuel consumption: 0\nSpeed: 0\nMaximum speed: 110\n";
	std::cout<<"\nRoute info\nDistance: 360 km\n";
	std::cout<<"----------------------------------------\n";
	std::cout<<"You have to drive a route 360 km long.\nBut first you need to check if you have enough fuel.\n";

	if(Fuel<25){
		Fuel+=25;
		std::cout<<"\nYour fuel before start: "<<Fuel<<"\n";
	}

	std::cout<<"\nWhat speed will you choose? "; std::cin>>Speed;

	if(Speed<0){
		std::cout<<"\nInvalid data";
		return 0;
	}

	if(Speed>110) Speed=110;

	if (Speed == 0) {
		std::printf("Your spped before start: 0 km/h\n");
		std::cout << "\nFuel consumption with choosen speed: 0 litres per 100 km\n";
		std::cout << "\nDestination result\nDistance traveled: 0 km\n";
		std::cout << "Time spent: 0 sec\n";
		std::cout << "Fuel consumed: 0 litres\nFuel remained: " << Fuel << " litres\n";
		std::cout << "----------------------------------------\n";
		std::cout << "You haven't reached destination point. 360 km left.";
	}
	else {
		float s = float(Speed) / 10;
		FuelConsumption = s * s / 4 - 4.5 * s + 30;

		std::printf("Your spped before start: %d km/h\n", Speed);
		std::cout << "\nFuel consumption with choosen speed: " << FuelConsumption << " litres per 100 km\n";

		Distance = Fuel / FuelConsumption * 100;

		if (Distance > 360) Distance = 360;

		FuelCons = FuelConsumption * 3.6f;

		if (FuelCons > Fuel) FuelCons = Fuel;

		std::cout << "\nDestination result\nDistance traveled: " << Distance << " km\n";
		std::cout << "Time spent: " << int(Distance / Speed * 3600) << " sec\n";
		std::cout << "Fuel consumed: " << FuelCons << " litres\nFuel remained: " << Fuel - FuelCons << " litres\n";
		std::cout << "----------------------------------------\n";

		if (Distance == 360) {
			std::cout << "Congratulations! You have reached destination point!";
			return 0;
		}

		std::cout << "You haven't reached destination point. " << 360 - Distance << " km left.";
	}

}