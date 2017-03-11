//cpp for basic fuctions
//Created 3/8/17 by Ernie Kretzmann

#include "Basic.h"



Basic::Basic()
{
}

//converts the double input num to a string
string Basic::toString(double num)
{
	ostringstream convert;   // stream used for the conversion

	convert << num;      // insert the textual representation of 'num' in the characters in the stream

	return convert.str();
}


Basic::~Basic()
{
}
