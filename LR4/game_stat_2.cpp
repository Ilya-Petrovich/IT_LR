#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
 int custom, fuel, fuel_capacity = 50, fuel_consumption = 0, speed = 0, max_speed = 110, distance = 360, time_spent;
 float a, b, c, distance_traveled, fuelConsumption;
 string refill, option;
 cout << "How much fuel do you have at start? \n"; cin >> fuel;
 if (fuel < 0 or fuel > 50)
 {
  cout << "Invalid data.";
  exit (0);
 }
 cout << endl;
 cout << "Car stats" << endl;
 cout << "Fuel: " << fuel << endl;
 cout << "Fuel capacity: " << fuel_capacity << endl;
 cout << "Fuel consumption: " << fuel_consumption << endl;
 cout << "Speed: " << speed << endl;
 cout << "Maximum speed: " << max_speed << endl << endl;
 cout << "Route info" << endl;
 cout << "Distance: " << distance << " km" << endl;
 cout << "----------------------------------------" << endl;
 cout << "You have to drive a route " << distance << " km long." << endl;
 cout << "But first you need to check if you have enough fuel." << endl << endl;
 cout << "Do you need a refill? (y/n) "; cin >> refill;
 if (refill == "y")
 {
  cout << "\nChoose an option.\n";
  cout << "a. 10 litres\n";
  cout << "b. 20 litres\n";
  cout << "c. 30 litres\n";
  cout << "d. custom amount\n\n";
  cout << "Your choice: "; cin >> option;
  if (option == "a")
   fuel += 10;
  if (option == "b")
   fuel += 20;
  if (option == "c")
   fuel += 30;
  if (option == "d")
   {
    cout << "How much fuel do you need? "; cin >> custom; fuel += custom;
   }
 }
 else{
 if (refill != "n")
 {
  cout << "Invalid data.";
  exit (0);
 }
 }
 cout << "Your fuel before start: " << fuel << endl << endl;
 if (fuel > 50)
 {
  cout << "Game over. Too much gas!";
  exit (0);
 }
 cout << "What speed will you choose? "; cin >> speed;
 if (speed < 0)
 {
  cout << "Invalid data.";
  exit (0);
 }
 if (speed > max_speed)
  speed = max_speed;
 cout << "Your speed before start: " << speed << " km/h" << endl << endl;
 float s = float(speed) / 10;
 cout << "Type in equation parameters.\n";
 cout << "a = "; cin >> a;
 cout << "b = "; cin >> b;
 cout << "c = "; cin >> c;
 cout << endl;
 fuelConsumption = a * s * s + b * s + c;
 speed > 0 ? fuelConsumption = a * s * s + b * s + c : fuelConsumption = 0;
 cout << "Fuel consumption with chosen speed: " << fuelConsumption << " litres per 100 km" << endl << endl;
 cout << "Destination result" << endl;
 if (fuelConsumption > 0){
 if ((float(fuel) / (fuelConsumption / 100)) > 360)
  {distance_traveled = 360;
  time_spent = distance_traveled / speed * 3600;}
 else
  {distance_traveled = (float(fuel) / (fuelConsumption / 100));
  time_spent = distance_traveled / speed * 3600;}
 }
 else{
  distance_traveled = 0;
  time_spent = 0;
 }
 float FuelConsumed = (fuelConsumption / 100) * distance_traveled;
 cout << "Distance traveled: " << distance_traveled << " km" << endl;
 cout << "Time spent: " << int(time_spent / 3600) << " h " << int((time_spent - (int(time_spent / 3600) * 3600)) / 60) << " min " << int(time_spent - int(time_spent / 3600) * 3600 - int((time_spent - (int(time_spent / 3600) * 3600)) / 60) * 60) << " sec. "<< endl;
 cout << "Fuel consumed: " << FuelConsumed << " litres" << endl;
 cout << "Fuel remained: " << fuel - ((fuelConsumption / 100) * distance_traveled) << " litres" << endl;
 cout << "----------------------------------------" << endl;
 if (distance_traveled == 360)
  cout << "Congratulations! You have reached destination point!";
 else
  cout << "You haven't reached destination point. " << 360.0 - distance_traveled << " km left.";
  
 int optimalspeed = ((-b)/(2*a))*10;
 int optimaltimespent = (distance_traveled / optimalspeed * 3600);
 cout << "\n" << "The optimal speed for that car is " << optimalspeed << " km/h." << "\n";
 cout << "With that speed: 90 km/h."<<endl;
 float optimalConsumption = a * (optimalspeed/10) * (optimalspeed/10) + b * (optimalspeed/10) + c;
 float optimalFuelConsumed = (optimalConsumption / 100) * distance_traveled;
 cout << "Fuel consumption would be " << optimalConsumption;

    return 0;
}