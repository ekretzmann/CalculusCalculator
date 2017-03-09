#pragma once
#include<cmath>
#include<iostream>

using namespace std;

class QuadFormula
{
public:
	QuadFormula();
	QuadFormula(double a, double b, double c);
	void QuadFormula::setVars(double a, double b, double c);
	void QuadFormula::printVars();
	void QuadFormula::calculate();
	void QuadFormula::printAll();
	~QuadFormula();
private:
	double a;
	double b;
	double c;
	double xPlus;
	double xMinus;
};

