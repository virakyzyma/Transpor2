#include "Car.h"
#include<iostream>
using namespace std;
Car::Car(double weight, double MaxSpeed, double AverageSpeed, double price, double maxBaggage) : Transport(weight, MaxSpeed, AverageSpeed, price)
{
	this->maxBaggage = maxBaggage;
};
void Car::setClass(string Class)
{
	this->Class = Class;
};
void Car::setMaxBaggage(double maxBaggage)
{
	this->maxBaggage = maxBaggage;
};
void Car::setBodyType(string bodyType)
{
	this->bodyType = bodyType;
};
string Car::getClass()
{
	return Class;
};
double Car::getMaxBaggage()
{
	return maxBaggage;
};
string Car::getBodyType()
{
	return bodyType;
};
void Car::Show()
{
	cout << "Car\n";
	cout << "Weight (kilograms): " << weight;
	cout << "\nMaximum speed: " << MaxSpeed;
	cout << "\nAverage speed: " << AverageSpeed;
	cout << "\nPrice: " << price;
	cout << "\nClass: " << Class;
	cout << "\nMax baggage: " << maxBaggage;
	cout << "\nBody type: " << bodyType;
};
void Car::Comfort()
{
	cout << "Comfort level is high";
};