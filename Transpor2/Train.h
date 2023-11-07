#pragma once
#include "Transport.h"
#include<iostream>
using namespace std;
class Train : public Transport
{
protected:
	int numberCarriage;
public:
	Train() = default;
	Train(double weight, double MaxSpeed, double AverageSpeed, double price, int numberCarriage);
	void setNumberCarriage(int numberCarriage);
	int getNumberCarriage();
	void Show();
	void Comfort();
};

