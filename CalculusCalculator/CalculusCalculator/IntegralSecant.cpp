#include "IntegralSecant.h"




IntegralSecant::IntegralSecant()
{
}

IntegralSecant::IntegralSecant(int m)
{
	power = m;
	calculate(power);
}

void IntegralSecant::calculate(int num)
{	
	string m = basic1.toString(num-2);
	string a = basic1.toString((1.0 / (num - 1)));
	string b = basic1.toString((num - 2.0) / (num - 1.0));

	integral = integral + a + "sec(x)^(" + m + ")*tan(x) + " + b + "(";

	num = num - 2;

	if (num == 1)
	{
		integral = integral + "ln|sec(x) + tan(x)|";
		for (int i = 0; i < (power / 2); i++)
		{
			integral = integral + ")";
		}
	}
	else if (num == 0)
	{
		integral = integral + "x";
		for (int i = 0; i < (power / 2); i++)
		{
			integral = integral + ")";
		}
	}
	else
	{
		calculate(num);
	}
}

void IntegralSecant::print()
{
	cout << integral << endl;
}

IntegralSecant::~IntegralSecant()
{
}
