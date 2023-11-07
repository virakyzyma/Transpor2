#include "Train.h"
#include<iostream>
using namespace std;
Train::Train(double weight, double MaxSpeed, double AverageSpeed, double price, int numberCarriage) : Transport(weight, MaxSpeed, AverageSpeed, price)
{
	this->numberCarriage = numberCarriage;
};
void Train::setNumberCarriage(int numberCarriage)
{
	this->numberCarriage = numberCarriage;
};
int Train::getNumberCarriage()
{
	return numberCarriage;
};
void Train::Show()
{
	cout << "Train\n";
	cout << "Weight (kilograms): " << weight;
	cout << "\nMaximum speed:" << MaxSpeed;
	cout << "\nAverage speed: " << AverageSpeed;
	cout << "\nPrice: " << price;
	cout << "\nNumber of carriage: " << numberCarriage;
};
void Train::Comfort() {
	cout << "Comfort level is average";
};