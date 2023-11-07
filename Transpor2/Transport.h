#pragma once
#include<iostream>
using namespace std;
class Transport
{
protected:
	double weight;
	double MaxSpeed;
	double AverageSpeed;
	double price;
public:
	Transport() = default;
	Transport(double weight, double MaxSpeed, double AverageSpeed, double price);
	
	void setWeight(double weight);
	void setMaxSpeed(double MaxSpeed);
	void setAverageSpeed(double AverageSpeed);
	void setPrice(double price);
	
	double getWeight();
	double getMaxSpeed();
	double getAverageSpeed();
	double getPrice();

	virtual void Show() = 0;
	virtual void Comfort() = 0;
};

