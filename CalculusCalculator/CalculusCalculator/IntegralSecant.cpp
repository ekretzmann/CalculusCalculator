/*
Created by Ernie Kretzmann on 3/8/17
*/

#include "IntegralSecant.h"

/*
Default constructor
*/
IntegralSecant::IntegralSecant()
{
}

/*
Overloaded constructor, runs the calculation
@param m the power that sec(x) has been raised to
*/
IntegralSecant::IntegralSecant(int m)
{
	power = m;
	calculate(power);
}

/*
Calculates the integral of a secant to a power num
@param num the power that the calculation is currently being raised to.
*/
void IntegralSecant::calculate(int num)
{	
	//Caluclates the constant and converts them to strings
	string m = basic1.toString(num-2);
	string a = basic1.toString((1.0 / (num - 1)));
	string b = basic1.toString((num - 2.0) / (num - 1.0));

	//Concatnates the original string together
	integral = integral + a + "sec(x)^(" + m + ")*tan(x) + " + b + "(";

	num = num - 2;

	//Determines whether the formula needs to repeat for the the remaining portion of code
	if (num == 1)
	{
		//Adds on the integral of sec(x) and the approriate number of parenthesis to close the problem
		integral = integral + "ln|sec(x) + tan(x)|";
		for (int i = 0; i < (power / 2); i++)
		{
			integral = integral + ")";
		}
	}
	else if (num == 0)
	{
		//Adds on the integral of 1 and the approriate number of parenthesis to close the problem
		integral = integral + "x";
		for (int i = 0; i < (power / 2); i++)
		{
			integral = integral + ")";
		}
	}
	else
	{
		//Repeates the process with the remaining secant power
		calculate(num);
	}
}

/*
Prints out the integral
*/
void IntegralSecant::print()
{
	cout << integral << endl;
}

/*
Destructor
*/
IntegralSecant::~IntegralSecant()
{
}
