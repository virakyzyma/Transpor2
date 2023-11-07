#include "Bus.h"
#include<iostream>
using namespace std;
Bus::Bus(double weight, double MaxSpeed, double AverageSpeed, double price, int numberPassengers, double maxBaggage) : Transport(weight, MaxSpeed, AverageSpeed, price)
{
	this->numberPassengers = numberPassengers;
	this->maxBaggage = maxBaggage;
};
void Bus::setNumberPassengers(int numberPassengers)
{
	this->numberPassengers = numberPassengers;
};
void Bus::setMaxBaggage(double maxBaggage)
{
	this->maxBaggage = maxBaggage;
}; 
double Bus::getMaxBaggage()
{
	return numberPassengers;
};
int Bus::getNumberPassengers()
{
	return maxBaggage;
};
void Bus::Show()
{
	cout << "Bus\n";
	cout << "Weight (kilograms): " << weight;
	cout << "\nMaximum speed:" << MaxSpeed;
	cout << "\nAverage speed: " << AverageSpeed;
	cout << "\nPrice: " << price;
	cout << "\nNumber of passengers: " << numberPassengers;
	cout << "\nMax baggage: " << maxBaggage;
};
void Bus::Comfort()
{
	cout << "Comfort level is average";
};