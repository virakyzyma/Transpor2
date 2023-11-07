#pragma once
#include "Transport.h"
#include<iostream>
using namespace std;
class Metro : public Transport
{
public:
	Metro() = default;
	Metro(double weight, double MaxSpeed, double AverageSpeed, double price);
	void Show();
	void Comfort();
};

