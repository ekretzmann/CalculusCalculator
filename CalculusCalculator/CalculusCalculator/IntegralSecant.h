/*
Created by Ernie Kretzmann on 3/8/17
*/

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
	Basic basic1;
	void IntegralSecant::calculate(int m);
};

