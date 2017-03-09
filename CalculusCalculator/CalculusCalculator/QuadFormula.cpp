#include "QuadFormula.h"



QuadFormula::QuadFormula()
{

}

QuadFormula::QuadFormula(double one, double two, double three)
{
	a = one;
	b = two;
	c = three;
}

void QuadFormula::setVars(double one, double two, double three)
{
	a = one;
	b = two;
	c = three;
}

void QuadFormula::printVars()
{
	cout << "The first variable is " << a << ".\n";
	cout << "The second variable is " << b << ".\n";
	cout << "The third variable is " << c << ".\n";
}

void QuadFormula::calculate()
{
	xPlus = (-b + sqrt(pow(b, 2) - (4 * a*c))) / (2 * a);
	xMinus = (-b - sqrt(pow(b, 2) - (4 * a*c))) / (2 * a);
}

void QuadFormula::printAll()
{
	printVars();
	calculate();
	cout << "The x-Plus is " << xPlus << ", (x + " << -xPlus << ").\n";
	cout << "The x-Minus is " << xMinus << ", (x + " << -xMinus << ").\n";
}


QuadFormula::~QuadFormula()
{
}
