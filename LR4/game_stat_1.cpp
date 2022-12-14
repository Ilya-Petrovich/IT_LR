#include <iostream>
int main(){
    int fuel, Time;
    float speed, s, FuelConsumption, distance;
    std::cout<<"How much fuel do you have at start? ";
    std::cin>>fuel;
    if (fuel>50 || fuel<0){
        std::cout<<"\nInvalid data.\n";
        exit(0);
    }
    std::cout<<"\nCar stats\nFuel: "<<fuel;
    std::cout<<"\nFuel capacity: 50\nFuel consumption: 0\nSpeed: 0\nMaximum speed: 110\n\n";
    std::cout<<"Route info\nDistance: 360 km\n----------------------------------------\nYou have to drive a route 360 km long.\nBut first you need to check if you have enough fuel.";
    if(fuel<25){
        fuel+=25;
        std::cout<<"\n\nYour fuel before start: "<<fuel;
    }
    std::cout<<"\n\nWhat speed will you choose? ";
    std::cin>>speed;
    if (speed>110)speed=110;
        else if(speed<0){
            std::cout<<"\nInvalid data.\n";
            exit(0);
        }
    std::cout<<"Your speed before start: "<<speed<<" km/h\n";
    s=float(speed)/10;
    if (speed==0){
        FuelConsumption=0;
    } else{
        FuelConsumption=s*s/4-4.5*s+30;
    }
    std::cout<<"\nFuel consumption with chosen speed: "<<FuelConsumption<<" litres per 100 km\n";
    distance=fuel*100/FuelConsumption;
    if(distance>360)distance=360;
    Time=distance/speed*3600;
    if (speed==0)distance=0,Time=0;
    std::cout<<"\nDestination result\nDistance traveled: "<<distance<<" km\nTime spent: "<<Time<<" sec\nFuel consumed: "<<FuelConsumption/100*distance<<" litres\nFuel remained: "<<fuel-FuelConsumption/100*distance<<" litres\n----------------------------------------";
    if (distance<360){
        std::cout<<"\nYou haven't reached destination point. "<<360-distance<<" km left.\n";
    } else { std::cout<<"\nCongratulations! You have reached destination point!\n";
    }
    return 0;
}

