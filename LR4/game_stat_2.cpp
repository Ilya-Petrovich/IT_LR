#include<bits/stdc++.h>

const int distance = 360, max_fuel = 50, min_fuel = 0, max_speed = 110;

std::vector<float> check_optimal_speed(float a, float b, float c, float not_optimal_need_fuel, float not_optimal_fuel_consumption)
{
	std::vector<float> optimal_data(5);
	int optimal_speed = 0;
	float min_fuel_consumption = 1e9, fuel_consumption, s, min_need_fuel, save_fuel;
	
	/*for (int i = 1; i <= max_speed; ++i) {
		s = i / 10.;
		fuel_consumption = a * s * s + b * s + c;
		if (fuel_consumption < min_fuel_consumption) {
			min_need_fuel = fuel_consumption * 3.6;
			min_fuel_consumption = fuel_consumption;
			optimal_speed = i;
		}
	}*/
	float optimal_s = -b * 1. / (2*a);
	fuel_consumption = a * optimal_s * optimal_s + b * optimal_s + c;
	min_need_fuel = fuel_consumption * 3.6;
	min_fuel_consumption = fuel_consumption;
	optimal_speed = optimal_s * 10;
	
	int h, m, sec, time_spent;
	float distance_traveled = min_need_fuel / min_fuel_consumption * 100;
	time_spent = distance_traveled * 1. / optimal_speed * 3600;
	
	h = time_spent / 3600;
	m = (time_spent - h * 3600) / 60;
	sec = time_spent - h*3600 - m*60;
	
	//std::cout << time_spent << " ";
	
	//std::cout << "optimal_speed = " << optimal_speed << "\n";
	//std::cout << "min_fuel_consumption = " << min_fuel_consumption << "\n";
	//std::cout << "save_fuel = " << save_fuel << "\n";
	//std::cout << "h = " << h << " min = " << m << " sec = " << sec << "\n";
	
	optimal_data[0] = optimal_speed, optimal_data[1] = min_fuel_consumption, optimal_data[2] = h,
	optimal_data[3] = m, optimal_data[4] = sec;
	
	return optimal_data;
}

int main()
{
	int fuel, speed = 0; std::cout << "How much fuel do you have at start? "; std::cin >> fuel; std::cout << "\n";
	
	if (fuel > 50 || fuel < 0) {
		std::cout << "Invalid data";
		return 0;
	}
	
	std::cout << "Car stats\nFuel: " << fuel << "\n";
	std::cout << "Fuel campacity: " << max_fuel << "\nFuel consumption: " << min_fuel << "\n";
	std::cout << "Speed: " << speed << "\nMaximum speed: " << max_speed << "\n\n";
	std::cout << "Route info\nDistance: " << distance << " km\n";
	std::cout << "--------------------------------\n";
	std::cout << "You have to drive a route " << distance << " km long.\n";
	std::cout << "But first you need to check if you have enough fuel.\n\n";
	
	std::string need_refill; std::cout << "Do you need refill? "; std::cin >> need_refill; std::cout << "\n";
	if (need_refill == "y") {
		std::cout << "Choose an option.\n";
		std::cout << "a. 10 liters\n";
		std::cout << "b. 20 liters\n";
		std::cout << "c. 30 liters\n";
		std::cout << "d. custom amount\n\n";
		std::cout << "Your choise: "; std::cin >> need_refill; std::cout << "\n";
		int int_need_refill;
		if (need_refill == "a") int_need_refill = 1;
		if (need_refill == "b") int_need_refill = 2;
		if (need_refill == "c") int_need_refill = 3;
		if (need_refill == "d") int_need_refill = 4;
		switch (int_need_refill)
		{
			case 1:
				fuel += 10;
				break;
			case 2:
				fuel += 20;
				break;
			case 3:
				fuel += 30;
				break;
			case 4:
				int need_fuel;
				std::cout << "How much fuel do you need? "; std::cin >> need_fuel;;
				fuel += need_fuel;
				break;
			default:
				std::cout << "Invalid input.";
				return 0;
		}
	}
	else if(need_refill != "n") {
		std::cout << "Invalid input.";
		return 0;
	}
	
	std::cout << "Your fuel before start: " << fuel << "\n\n";
	if (fuel > max_fuel) {
		std::cout << "\nGame over. Too much gas!";
		return 0; 
	}
	//////////////////////////////////////////////////////////////////////////////////////////////
	std::cout << "What speed you choise? "; std::cin >> speed;
	std::cout << "Your speed before start: " << speed << " km/h\n\n";
	
	std::cout << "Type in equation parameters.\n";
	float a, b, c, fuel_consumption, s = speed / 10.;
	std::cout << "a = "; std::cin >> a;
	std::cout << "b = "; std::cin >> b;
	std::cout << "c = "; std::cin >> c;
	
	fuel_consumption = a * s * s + b * s + c;
	std::cout << "Fuel consumption with choosen speed: " << fuel_consumption << " liters per 100 km\n\n";
	
	float distance_traveled = fuel / fuel_consumption * 100;
	if (distance_traveled > distance) distance_traveled = distance;
	if (speed == 0) distance_traveled = 0;
	int h, m, sec, time_spent;
	if (speed != 0) time_spent = distance_traveled * 1. / speed * 3600;
	else time_spent = 0;
	h = time_spent / 3600;
	m = (time_spent - h * 3600) / 60;
	sec = time_spent - h*3600 - m*60;
	
	std::cout << "Destantion result\n";
	std::cout << "Distance traveled: " << distance_traveled << " km\n";
	std::cout << "Time spent: " << h << " h " << m << " min " << sec << " sec.\n";
	
	float fuel_consumed = distance_traveled * fuel_consumption / 100, fuel_remined = fuel - fuel_consumed;
	bool flag;
	(fuel_remined > 0 && speed != 0) ? flag = true : flag = false;
	if (!flag) fuel_remined = 0;
	
	std::cout << "Fuel consumed: " << fuel_consumed << "\n";
	std::cout << "Fuel remined: " << fuel_remined << "\n";
	std::cout << "--------------------------------\n";
	if (flag) std::cout << "Congratulation! You have reached destantion point!\n\n";
	else std::cout << "You haven't reached destination point. " << std::fixed << std::setprecision(2) << distance - distance_traveled << " km left.\n\n";
	
	std::vector<float> help = check_optimal_speed(a, b, c, fuel_consumed, fuel_consumption);
	int optimal_speed = (int) help[0], new_h = help[2], new_m = help[3], new_sec = help[4];
	float new_fuel_consumption = help[1], new_fuel_need = new_fuel_consumption * 3.6, save_fuel = fuel_consumed - new_fuel_need;
	
	std::cout << "The optimal speed for that car is " << optimal_speed << " km/h\n";
	std::cout << "With that speed:\n";
	std::cout << "	Fuel consumption would be " << new_fuel_consumption << " l per 100 km.\n";
	std::cout << "	You'd need " << new_fuel_need << " l of fuel to reach your distantion.\n";
	std::cout << "	You could save " << std::fixed << std::setprecision(1) << fuel_consumed - new_fuel_need << " l of fuel.\n";
	std::cout << "	It would take " << new_h << " h " << new_m << " min " << new_sec << " sec.";	
	return 0;
}
