#include "Basic.h"



Basic::Basic()
{
}


string Basic::toString(double num)
{
	ostringstream convert;   // stream used for the conversion

	convert << num;      // insert the textual representation of 'Number' in the characters in the stream

	return convert.str();
}


Basic::~Basic()
{
}
