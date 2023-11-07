#pragma once
#include "Transport.h"
#include<iostream>
using namespace std;
class Bus : public Transport
{
protected:
	int numberPassengers;
	double maxBaggage;
public:
	Bus() = default;
	Bus(double weight, double MaxSpeed, double AverageSpeed, double price, int numberPassengers, double maxBaggage);
	
	void setNumberPassengers(int numberPassengers);
	void setMaxBaggage(double maxBaggage);

	double getMaxBaggage();
	int getNumberPassengers();
	void Show();
	void Comfort();
};

