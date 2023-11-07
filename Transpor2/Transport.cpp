#include "Transport.h"
#include<iostream>
using namespace std;

Transport::Transport(double weight, double MaxSpeed, double AverageSpeed, double price)
{
	this->weight = weight;
	this->MaxSpeed = MaxSpeed;
	this->AverageSpeed = AverageSpeed;
	this->price = price;
};
void Transport::setWeight(double weight)
{
	this->weight = weight;
};
void Transport::setMaxSpeed(double MaxSpeed)
{
	this->MaxSpeed = MaxSpeed;
};
void Transport::setAverageSpeed(double AverageSpeed)
{
	this->AverageSpeed = AverageSpeed;
};
void Transport::setPrice(double price)
{
	this->price = price;
};
double Transport::getWeight()
{
	return weight;
};
double Transport::getMaxSpeed()
{
	return MaxSpeed;
};
double Transport::getAverageSpeed()
{
	return AverageSpeed;
};
double Transport::getPrice()
{
	return price;
};