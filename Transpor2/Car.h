#pragma once
#include "Transport.h"
#include<iostream>
using namespace std;
class Car : public Transport
{
protected:
	string Class;
	double maxBaggage;
	string bodyType;
public:
	Car();
	void Comfort();
};

