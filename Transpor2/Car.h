#pragma once
#include "Transport.h"
#include<iostream>
using namespace std;
class Car : public Transport
{
protected:
	string Class = "B";
	double maxBaggage;
	string bodyType;
public:
	Car() = default;
	Car(double weight, double MaxSpeed, double AverageSpeed, double price, double maxBaggage);
	void setClass(string Class);
	void setMaxBaggage(double maxBaggage);
	void setBodyType(string bodyType);

	string getClass();
	double getMaxBaggage();
	string getBodyType();

	void Show();
	void Comfort();
};

