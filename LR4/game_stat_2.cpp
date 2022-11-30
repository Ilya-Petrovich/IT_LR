#include<iostream>

int main()
{
	float fuel, fuel2 = 0, speed, s, fuelConsuption, time_hour, time_min, time_sec, fuel_add;
	bool f = 1;
	char input;
	const char yes = 'y', no = 'n';

	std::cout << "How much fuel do you at start? "; std::cin >> fuel;
	std::cout << std::endl;

	if ((fuel < 0) or (fuel > 50)) {
		std::cout << "Invalid data";
		return 0;
	}

	std::cout << "Car stats" << std::endl << "Fuel: " << fuel << std::endl;

	if (fuel < 25) { fuel += 25, f = false; }

	std::cout << "Fuel capacity: 50" << std::endl;
	std::cout << "Fuel consumption: 0" << std::endl;
	std::cout << "Speed: 0" << std::endl;
	std::cout << "Maximum speed: 110" << std::endl;

	std::cout << std::endl;
	std::cout << "Route info" << std::endl;
	std::cout << "Distance: 360 km" << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	std::cout << "You have to drive a route 360 km long." << std::endl;
	std::cout << "But first you need to check if you have enough fuel." << std::endl;
	std::cout << std::endl;

	std::cout << "Do you need a refill? "; std::cin >> input;

	if (input == yes)
	{
		std::cout << std::endl << "Choose an option." << std::endl;
		std::cout << "a. 10 literes" << std::endl;
		std::cout << "b. 20 literes" << std::endl;
		std::cout << "c. 30 literes" << std::endl;
		std::cout << "d. custom amount" << std::endl;

		std::cout << std::endl;

		char input2;
		const char a = 'a', b = 'b', c = 'c', d = 'd';
		std::cout << "Your choice: "; std::cin >> input2;

		switch (input2)
		{
		case a:
			std::cout << std::endl;

			fuel += 10;
			break;
		case b:
			std::cout << std::endl;

			fuel += 20;
			break;
		case c:
			std::cout << std::endl;

			fuel += 30;
			break;
		case d:
			std::cout << std::endl;

			std::cout << "How many fuel do you need? "; std::cin >> fuel_add;
			fuel += fuel_add;
			break;
		default:
			std::cout << std::endl << "Invalid data";
			return 0;

		}
		std::cout << "Your fuel before start: " << fuel << std::endl;

		std::cout << std::endl;

		if (fuel > 50)
		{
			std::cout << "Game over. Too much gas!";
			return 0;
		}
	}
	else if (input == no)
	{
		std::cout << "Your fuel before start: " << fuel << std::endl;
	}
	else
	{
		std::cout << "Invalid data";
		return 0;
	}

	std::cout << "What speed will you choose? "; std::cin >> speed;

	if (speed < 0)
	{
		std::cout << "Invalid data.";
		return 0;
	}

	if (speed > 110) speed = 110;

	std::cout << "Your speed before start: " << speed << " km/h" << std::endl;

	std::cout << std::endl;

	std::cout << "Type in equation parameters." << std::endl;

	float a1, b1, c1;

	std::cout << "a = "; std::cin >> a1;
	std::cout << "b = "; std::cin >> b1;
	std::cout << "c = "; std::cin >> c1;

	if (speed == 0) { fuelConsuption = 0, s = 0, time_hour = 0, time_min = 0, time_sec = 0, fuel2 = fuel, fuel = 0; }

	else
	{
		fuelConsuption = a1 * (speed / 10) * (speed / 10) + b1 * (speed / 10) + c1;
		s = 100 * fuel / fuelConsuption;
		time_hour = int(s / speed);
		time_min = int(s / speed * 60) % 60;
		time_sec = int(s / speed * 3600) % 60;
	}

	std::cout << std::endl;

	std::cout << "Fuel consumption with chosen speed: " << fuelConsuption << " liters per 100 km" << std::endl;
	std::cout << std::endl;
	std::cout << "Destination result" << std::endl;

	if (s >= 360)
	{
		std::cout << "Distance traveled: " << 360 << "km" << std::endl;
		std::cout << "Time spend: " << int(360 / speed) << " h " << int(360 / speed * 60) % 60 << " min " << int(360 / speed * 3600) % 60 << " sec." << std::endl;
		std::cout << "Fuel consumed: " << 3.6 * fuelConsuption << " liters" << std::endl;
		std::cout << "Fuel remained: " << fuel - 3.6 * fuelConsuption << " liters" << std::endl;
		std::cout << "----------------------------------------" << std::endl;
		std::cout << "Congratulation! You have reached destination point!" << std::endl;

	}
	else
	{
		std::cout << "Distance traveled: " << s << "km" << std::endl;
		std::cout << "Time spend: " << time_hour << " h " << time_min << " min " << time_sec << " sec." << std::endl;
		std::cout << "Fuel consumed: " << fuel << " liters" << std::endl;
		std::cout << "Fuel remained: " << fuel2 << " liters" << std::endl;//made by programmerfromrussia
		std::cout << "----------------------------------------" << std::endl;
		std::cout << "You haven't reached destination point. " << 360 - s << " km left.";
	}

	std::cout << std::endl;

	float optimal_speed, optimal_fuel, optimal_fuel_consumption;
	optimal_speed = 10 * (-b1 / (2 * a1));
	optimal_fuel_consumption = a1 * (optimal_speed / 10) * (optimal_speed / 10) + b1 * (optimal_speed / 10) + c1;
	optimal_fuel = (a1 * (optimal_speed / 10) * (optimal_speed / 10) + b1 * (optimal_speed / 10) + c1) * 3.6;

	if ((optimal_speed > 110) or (optimal_speed < 0))
	{
		std::cout << "Bad news, we don't have optimal speed ='(";
		return 0;
	}
	//made by programmerfromrussia
	std::cout << "The optimal speed for that car is " << optimal_speed << " km/h." << std::endl;
	std::cout << "With that speed:" << std::endl;
	std::cout << "   Fuel consumption would be " << optimal_fuel_consumption << " l per 100 km" << std::endl;
	std::cout << "   You'd need " << (a1 * (optimal_speed / 10) * (optimal_speed / 10) + b1 * (optimal_speed / 10) + c1) * 3.6 << " l of fuel to reach your destination." << std::endl;

	if (fuel < optimal_fuel)
	{
		std::cout << "You wouldn't reach your destiation anyway, but you could drive " << fuel * 100 / optimal_fuel_consumption - s << " kms more." << std::endl;
		return 0;
	}

	std::cout << "   You could save " << 3.6 * fuelConsuption - optimal_fuel << " l of fuel." << std::endl;
	std::cout << "   It would take " << int(360 / optimal_speed) << " h " << int(360 / optimal_speed * 60) % 60 << " min " << int(360 / optimal_speed * 3600) % 60 << " sec." << std::endl;
}
