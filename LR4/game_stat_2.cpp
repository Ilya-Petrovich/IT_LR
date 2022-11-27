#include <iostream>

int main()
{
	double distance, fuel, fuelConsum, s, consumed, remained;
	int speed, time, kolvo, a, b, c;
	sring answer, choise;

	std::cout << "How much fuel do you have at start? ";
	std::cin >> fuel;

	if (fuel >= 0 & fuel <= 50)
	{
		std::cout << "Car stats " << std::endl;
		std::cout << "Fuel: " << fuel << std::endl;
		std::cout << "Fuel capacity: 50" << std::endl;
		std::cout << "Fuel consumption: 0" << std::endl;
		std::cout << "Speed: 0" << std::endl;
		std::cout << "Maximum speed: 110" << std::endl;
		std::cout << "\nRoute info " << std::endl;
		std::cout << "Distance: 360 km" << std::endl;
		std::cout << "------------------------------" << std::endl;
		std::cout << "You have to drive a raute 360 km long." << std::endl;
		std::cout << "But first you need to check if you have enough fuel." << std::endl;
		std::cout << "\nDo you need a refill?(yes or no) " << std::endl;
		std::cin >> answer;
		if (answer == "yes")
		{
			std::cout << "\nChoose an option. " << std::endl;
			std::cout << "a. 10 litres " << std::endl;
			std::cout << "b. 20 litres " << std::endl;
			std::cout << "c. 30 litres " << std::endl;
			std::cout << "d. custom amount " << std::endl;
			std::cout << "\nYour choise: " << std::endl;
			std::cin >> choise;
		}
		if (choise == "a")
		{
			fuel += 10;
		}
		else if (choise == "b")
		{
			fuel += 20;
		}
		else if (choise == "c")
		{
			fuel += 30;
		else
		{
			std::cout << "\nHow much fuel do you need? " << std::endl;
			std::cin >> kolvo;
			fuel += kolvo;
		}
		std::cout << "Your fuel before start: " << fuel << std::endl;
		if (fuel > 50)
		{
			std::cout << "\nGame over. Too much gas! " << std::endl;
			return 0;
		}
		std::cout << "\What speed will you choose? ";
		std::cin >> speed;
		if (speed > 110)
		{
			speed = 110;
		}
		std::cout << "Your speed before start: " << speed << " km/h " << std::endl;
		s = speed / 10;
		std::cout << "\nType in equation parameters. " << std::endl;
		std::cout << "a = "; std::cin >> a >> endl;
		std::cout << "b = "; std::cin >> b >> endl;
		std::cout << "c = "; std::cin >> c >> endl;
		fuelConsum = a * s * s + b * s + c;
		std::cout << "\nFuel consumption with chosen speed: " << fuelConsum << " litres per 100 km " << std::endl;
		std::cout << "\nDestination result " << std::endl;
		distance = fuel / fuelConsum * 100;
		if (distance > 360)
		{
		    distance = 360;
		}
		tim = distance / speed * 3600;
		consumed = fuelConsum * (distance * 0.01);
		remained = fuel - consumed;
		std::cout << "Distance traveled: " << distance << " km " << std::endl;
		std::cout << "Time spent: " << tim << " sec " << std::endl;
		std::cout << "Fuel consumed: " << consumed << " litres " << std::endl;
		std::cout << "fuel remained: " << remained << " litres " << std::endl;
		std::cout << "------------------------------ " << std::endl;
		if (distance == 360)
		{
		    std::cout << "Congratulations! You have reached destination point! " << std::endl;
		}
		else
		{
		    ostatok = 360. - distance;
		    std::cout << "You haven't reached destination point. " << ostatok << " km left. " << std::endl;
		}
	}
	else
	{
		std::cout << "Invalid data" << std::endl;
	}
	return 0;
}