#pragma once
#include "Transport.h"
class Airplane : public Transport
{
public:
	Airplane() = default;
	Airplane(double weight, double MaxSpeed, double AverageSpeed, double price);
	void Show();
	void Comfort();
};

