#include "Metro.h"
#include<iostream>
using namespace std;

Metro::Metro(double weight, double MaxSpeed, double AverageSpeed, double price) :Transport(weight, MaxSpeed, AverageSpeed, price)
{};

void Metro::Show()
{
	cout << "Metro\n";
	cout << "Weight (kilograms): " << weight;
	cout << "\nMaximum speed:" << MaxSpeed;
	cout << "\nAverage speed: " << AverageSpeed;
	cout << "\nPrice" << price;
};
void Metro::Comfort()
{
	cout << "Comfort level is low";
};