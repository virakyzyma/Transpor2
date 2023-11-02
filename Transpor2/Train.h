#pragma once
#include "Transport.h"
#include<iostream>
using namespace std;
class Train : public Transport
{
protected:
	int numberCarriage;
public:
	Train();
	void Comfort();
};

