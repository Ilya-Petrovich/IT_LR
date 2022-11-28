#include <iostream>
using namespace std;

int _fuelCapacity = 50;
int _speed = 0;
int _maximumSpeed = 110;
float _fuel = 0;
float _fuelConsumption = 0;
int _distance = 360;

bool FuelInitialization() 
{
    cout << "How much fuel do you have at start? ";
    cin >> _fuel;
    if (_fuel > 50) return false;
    if (_fuel < 0) return false;
    return true;
}
void OutputCarStats() 
{
    cout << "\n Car Stats: " << endl;
    cout << "Fuel: "<< _fuel << endl;
    cout << "Fuel capacity: "<< _fuelCapacity << endl;
    cout << "Fuel consuption: "<< _fuelCapacity << endl;
    cout << "Speed: "<< _speed << endl;
    cout << "Maximum speed: "<< _maximumSpeed << endl;
    cout << "\nRoute Info: " << endl;
    cout << "Distance: " << _distance << endl;
    cout << "\n-----------------------------------------" << endl;
}
void FuelCheck() 
{
    cout << "Check if there is enough fuel" << endl;
    if (_fuel > _fuelCapacity / 2) return;
    _fuel += _fuelCapacity / 2;
    cout << "Your fuel before start: " << _fuel << endl;
}
bool SpeedInitialization() 
{
    cout << "What speed will you choose? ";
    cin >> _speed;
    if (_speed < 0) return false;
    if (_speed > _maximumSpeed) _speed = _maximumSpeed;
    cout << "Your speed at start: " << _speed << endl;
    return true;
}
void CalculateConsuption() 
{
    if (_speed == 0) _fuelConsumption = 0;
    else 
    {
        float s = _speed / 10.0;
        _fuelConsumption = s * s / 4 - 4.5 * s + 30;
    }
    cout << "Fuel consumption with chosen speed: " << _fuelConsumption << " litres per 100 km" << endl;
}
bool Initialization()
{
    if (!FuelInitialization())
    {
        cout << "Invalid Data";
        return false;
    }
    OutputCarStats();
    FuelCheck();
    if (!SpeedInitialization())
    {
        cout << "Invalid Data";
        return false;
    }
    CalculateConsuption();
    return true;
}
float TraveledDistance() 
{
    if (_speed == 0) return 0;
    if ((_fuel * 100 / _fuelConsumption) > _distance) return _distance;
    else return (_fuel * 100 / _fuelConsumption);

}
void ReachedDestination() 
{
    cout << "Destination traveled: " << _distance<<endl;
    cout << "Time spent: " << ((float)_distance / _speed) * 60 * 60 << " sec" << endl;
    float consumedFuel = (_distance / 100.0) * _fuelConsumption;
    cout << "Fuel consumed: " << consumedFuel << " litres" << endl;
    cout << "Fuel remained: " << _fuel - consumedFuel << " litres" << endl;   
    cout << "\n-----------------------------------------" << endl;
    cout << "you have reached destination point" <<endl;
}
void NotReachedDestination() 
{
    float traveledDistance = 0;
    int time = 0;
    if (_speed > 0) {
        traveledDistance = 100 * _fuel / _fuelConsumption;
        time = (traveledDistance / _speed) * 60 * 60;
      
    }
    cout << "Destination traveled: " << traveledDistance << endl;
    cout << "Time spent: " << time << " sec" << endl;
    float consumedFuel = (traveledDistance / 100.0) * _fuelConsumption;
    cout << "Fuel consumed: " << consumedFuel << " litres" << endl;
    cout << "Fuel remained: " << _fuel - consumedFuel << " litres" << endl;
    cout << "\n-----------------------------------------" << endl;
    cout << "you haven't reached destination point. " << _distance - traveledDistance << " km left" << endl;

}
void CalculatingData()
{
    cout << "\nDestination Result: " << endl;
    if (TraveledDistance() >= _distance) ReachedDestination();
    else NotReachedDestination();
}
int main()
{
    if (!Initialization()) return false;
    CalculatingData();

}

int VseItSoobhestvoNahuy()   
{
    return 0;
}
int NahuyZraviuSmisolBlyat() {
    return 0;
}