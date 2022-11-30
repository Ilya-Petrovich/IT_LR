#include <iostream>
int main()
{	
	double t,mt=50,fuelConsumption,dm,rt,ot,s,d=360;
	int ms=110,speed,time;
	std::cout<<"How much fuel do you have at start? ";
	std::cin>>t;
	if( t>=0 && t<=50)
	{
		std::cout<<"Car stats"<<std::endl;
		std::cout<<"Fuel: "<<t<<std::endl;
		std::cout<<"Fuel capacity: "<<mt<<std::endl;
		std::cout<<"Fuel consumption: 0"<<std::endl;
		std::cout<<"Speed: 0"<<std::endl;
		std::cout<<"Maximum speed: "<<ms<<std::endl;
		std::cout<<"Route info"<<std::endl;
		std::cout<<"Distance: 360 km"<<std::endl;
		std::cout<<"You have to drive a route 360 km long."<<std::endl;
		std::cout<<"But first you need to check if you have enough fuel."<<std::endl;
		std::cout<<"What speed will you choose? ";
		std::cin>>speed;
		if(t<mt/2)
		{
			t=t+mt/2;
			std::cout<<"Your fuel before start: "<<t<<std::endl;
		}
		if(speed<0)
		{
			std::cout<<"Invalid data"<<std::endl;
			return 0;
		}
		if(speed>110)
		{
			speed=110;
		}
		std::cout<<"Your speed before start: "<<speed<<" km/h"<<std::endl;
		if(speed==0)
		{
			fuelConsumption=0;
			std::cout<<"Fuel consumption with chosen speed: "<<fuelConsumption<<" litres per 100 km"<<std::endl;
			std::cout<<"Destination result"<<std::endl;
			d=0;
			std::cout<<"Distance traveled: "<<d<<" km"<<std::endl;
			time=0;
			std::cout<<"Time spent: "<<time<<" sec"<<std::endl;
		}
		else
		{
			s=(double)speed/10;
			fuelConsumption = s * s / 4 -4.5 * s + 30;
			std::cout<<"Fuel consumption with chosen speed: "<<fuelConsumption<<" litres per 100 km"<<std::endl;
			dm=t/fuelConsumption*100;
			if(dm<d)
			{
				d=dm;
			}
			time=d/speed*3600;
		
			std::cout<<"Destination result"<<std::endl;
			std::cout<<"Distance traveled: "<<d<<" km"<<std::endl;
			std::cout<<"Time spend: "<<time<<" sec "<<std::endl;
		}
		rt=fuelConsumption/100*d;
		ot=t-rt;
		std::cout<<"Fuel consumed: "<<rt<<" litres"<<std::endl;
		std::cout<<"Fuel remained: "<<ot<<" litres"<<std::endl;
		if( d==360)
		{
			std::cout<<"Congratulations! You have reached destination point!"<<std::endl;
		}
		else
		{
			std::cout<<"You haven't reached destination point. "<< 360-d<<" km left."<<std::endl;
		}
	}
	else
	{
		std::cout<<"Invalid data";
	}
	return 0;
}
