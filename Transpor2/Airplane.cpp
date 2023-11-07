#include "Airplane.h"
#include<iostream>
using namespace std;

Airplane::Airplane(double weight, double MaxSpeed, double AverageSpeed, double price) :Transport(weight, MaxSpeed, AverageSpeed, price)
{};

void Airplane::Show()
{
	cout << "\nAirplane\n";
	cout << "Weight (kilograms): " << weight;
	cout << "\nMaximum speed:" << MaxSpeed;
	cout << "\nAverage speed: " << AverageSpeed;
	cout << "\nPrice" << price;
};
void Airplane::Comfort()
{
	cout << "Comfort level is high";
};