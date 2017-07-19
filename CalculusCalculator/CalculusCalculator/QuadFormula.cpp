/*
Created 3/8/17 by Ernie Kretzmann
*/

#include "QuadFormula.h"


/*
default constructor
*/
QuadFormula::QuadFormula()
{

}

/*
overloaded constructor
@param one first constant, two second constant, three third constant
*/
QuadFormula::QuadFormula(double one, double two, double three)
{
	a = one;
	b = two;
	c = three;
	calculate();
}

/*
allows the constants to be changed
@param one first constant, two second constant, three third constant
*/
void QuadFormula::setVars(double one, double two, double three)
{
	a = one;
	b = two;
	c = three;
}

/*
prints out the constants in a list
*/
void QuadFormula::printVars()
{
	cout << "The first variable is " << a << ".\n";
	cout << "The second variable is " << b << ".\n";
	cout << "The third variable is " << c << ".\n";
}

/*
calculates the quadratic formula and sets the varibles xPlus and xMinus to the result
*/
void QuadFormula::calculate()
{
	xPlus = (-b + sqrt(pow(b, 2) - (4 * a*c))) / (2 * a);
	xMinus = (-b - sqrt(pow(b, 2) - (4 * a*c))) / (2 * a);
}

/*
prints the constants and the results of the formula.
*/
void QuadFormula::printAll()
{
	printVars();
	cout << "The x-Plus is " << xPlus << ", (x + " << -xPlus << ").\n";
	cout << "The x-Minus is " << xMinus << ", (x + " << -xMinus << ").\n";
}

/*
destructor
*/
QuadFormula::~QuadFormula()
{
}
