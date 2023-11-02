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
	Bus();
	void Comfort();
};

