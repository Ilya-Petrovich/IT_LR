#include <iostream>
#include <cmath>

using namespace std;

int main(){
    setlocale(LC_ALL,"RU_ru");
    
    double 
        fuelQuantity,
        fuelConsumed,
        fuelConsumption = 0,
        fuelRemained,
        speed = 0,
        distance = 360,
        distanceTravelled;

    int 
        timeSpent;

    cout << "How much fuel do you have at start? ";
    cin >> fuelQuantity;

    if(fuelQuantity< 0 || fuelQuantity > 50){
        cout << "\nInvalid data." << endl;;
        return -1;
    }
   
   

    cout << "\nCar stats";
    cout << "\nFuel: " << fuelQuantity;
    cout << "\nFuel capacity: 50";
    cout << "\nFuel consumption: " << fuelConsumption;
    cout << "\nSpeed: " << speed;
    cout << "\nMaximum speed: 110" << endl;

    cout << "\nRoute info";
    cout << "\nDistance: "<< distance << " km";
    cout << "\n---------------------------------------";
    cout << "\nYou have to drive a route "<< distance << " km long.";
    cout << "\nBut first you need to check if you have enough fuel." << endl;
    
    if(fuelQuantity < 25){
        fuelQuantity +=25;
        cout << "\nYour fuel before start: "<< fuelQuantity << endl;
    }

    cout << "\nWhat speed will you choose? ";
    cin >> speed;
    if(speed <0){
        cout << "\nInvalid data." << endl;
        return -1;
    }
    if(speed > 110){
        speed = 110;
    }

    cout << "Your speed before start: "<< speed << "km/h";
    if(speed == 0){
        fuelConsumption = 0;
    }else{
        fuelConsumption = speed/10 * speed/10 / 4 - 4.5 * speed/10 + 30;
    }
    cout << "\nFuel consumtion with chosen speed: " << fuelConsumption << " liters per 100km" << endl;

    distanceTravelled = fuelQuantity / (fuelConsumption/100);
    if(distanceTravelled >= distance){
        distanceTravelled   = distance;
    }

    if(fuelConsumption == 0){
        distanceTravelled = 0;
    }

    if(speed == 0 ){
        timeSpent = 0;
    }else{
        timeSpent = distanceTravelled / (speed / 60 / 60);
    }

    fuelConsumed = fuelConsumption * distanceTravelled / 100;
    
    if(fuelConsumed <= fuelQuantity){
        fuelRemained = fuelQuantity - fuelConsumed;
    }else{
        fuelRemained = 0;
    }

    cout << "\nDestination result";
    cout << "\nDistance travelled: " << distanceTravelled << " km";
    cout << "\nTime spent: " << timeSpent << " sec";
    cout << "\nFuel consumed: " << fuelConsumed << " litres";
    cout << "\nFuel remained: " << fuelRemained << " litres";
    cout << "\n---------------------------------------"<< endl;
    
    if(distanceTravelled >= distance){
        cout << "Congratulations! You have reached destination point!" << endl;
    }else{
        cout << "You haven't reached destination point " << round((distance - distanceTravelled)*100)/100 <<" km left." << endl;
    }

}