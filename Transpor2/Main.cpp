#include<iostream>
using namespace std;
#include "Transport.h"
#include "Train.h"
#include "Car.h"
#include "Bus.h"
#include "Metro.h"
#include "Airplane.h"

int main()
{
	Transport* obj[5] =
	{
		new Car(2000, 200, 85, 22, 4),
		new Bus(3100, 170, 80, 500, 20, 21),
		new Train(500000, 140, 120, 400, 6),
		new Metro(10000, 80, 65, 15),
		new Airplane(30000, 340, 100, 4000)
	};

	int sum, distance;
	cout << "Enter your sum of money: ";
	cin >> sum;
	cout << "Enter distance: ";
	cin >> distance;
	for (int i = 0; i < 4; i++)
	{
		if (sum >= (obj[i]->getPrice() * (distance / 100)))
		{
			cout << endl << i + 1 << "\n";
			obj[i]->Show();
			cout << endl;
			obj[i]->Comfort();
		}
	}
	bool addAirplane;
	cout << "\n\nDo you want to add an airplane to your transport list?\n0-no, 1-yes\nEnter-> ";
	cin >> addAirplane;
	if (addAirplane) {
		cout << "\n----------------------------------";
		for (size_t i = 0; i < 5; i++)
		{
			if (sum >= (obj[i]->getPrice() * (distance / 100))) {
				cout << "\n" << i + 1 << "\n\n";
				obj[i]->Show();
				cout << "\n";
				obj[i]->Comfort();
			}
		}
	}
	int menu;
	cout << "\nChoose transport: ";
	cin >> menu;
	cout << "Now you have: " << sum - obj[menu - 1]->getPrice() * (distance / 100) << endl;
	for (int i = 0; i < 5; i++)
	{
		delete obj[i];
	}

	return 0;
}