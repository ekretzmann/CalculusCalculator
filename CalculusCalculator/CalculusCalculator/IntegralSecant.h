#pragma once
#include<iostream>
#include<cmath>
#include<string>
#include"Basic.h"

using namespace std;

class IntegralSecant
{
public:
	IntegralSecant();
	IntegralSecant(int power);
	void IntegralSecant::print();
	~IntegralSecant();
private:
	int power;
	string integral;
	void IntegralSecant::calculate(int m);
	Basic basic1;
};

