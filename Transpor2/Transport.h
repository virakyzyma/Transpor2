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
	void Set(double weight, double MaxSpeed, double AverageSpeed, double price);
	virtual void Comfort() = 0;
};

