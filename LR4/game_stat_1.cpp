#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    float fuel, speed, max_speed = 110, s, fuel_consumption, distance_traveled, fuel_consumed, time_spent;
    
    cout<<"How much fuel do yo have at start? "; cin>>fuel;
    
    cout<<"What speed will you choose? "; cin>>speed;
    
    
    if ((fuel >= 0) and (fuel <= 50) and (speed >= 0)) {
        
        if (speed == 0) {
            cout<<"Fuel before start: "<<fuel<<endl;
            cout<<"Speed before start: 0"<<endl;
            cout<<"Fuel consumption: 0"<<endl;
            cout<<"Distance traveled: 0"<<endl;
            cout<<"Time spent: 0"<<endl;
            cout<<"Fuel consumed: 0"<<endl;
            cout<<"You haven't reached destination point. 360 km left."<<endl;

        } else {
            if (fuel <= 25) {
                fuel += 25;
            } else {
                fuel = fuel;
            }
            
            cout<<"Fuel before start: "<<fuel<<endl;
        
            if (speed > max_speed) {
            speed = max_speed;
            }
        
            s = speed/10;
        
            cout<<"Speed before start: "<<speed<<endl;
        
            fuel_consumption = s * s / 4 - 4.5 * s + 30;
            cout<<"Fuel consumption: "<<fuel_consumption<<endl;
    
            distance_traveled = fuel / (fuel_consumption / 100 * speed) * speed;
            if (distance_traveled >= 360) {
                distance_traveled = 360;
               cout<<"Distance traveled: "<<distance_traveled<<endl;    
            } else {
                cout<<"Distance traveled: "<<distance_traveled<<endl;
            }
    
            time_spent = int((distance_traveled/speed)*3600);
            cout<<"Time spent: "<<time_spent<<endl;
    
            fuel_consumed = (float(distance_traveled)*fuel_consumption)/float(100);
            cout<<"Fuel consumed: "<<fuel_consumed<<endl;
    
            
            if (distance_traveled == 360) {
                cout<<"Congratulations! You have reached destination point!"<<endl;
            } else {
                cout<<fixed<<setprecision(2)<<"You haven't reached destination point. "<<360 - distance_traveled<<" km left."<<endl;
            }
        }
    } else {
        cout<<"Invalid data.";
    }
}