#include "stdafx.h"
#include "Circle.h"

Circle::Circle(double r)
{
	setRadius(r);
}

Circle::~Circle()
{

}

void Circle::setRadius(double r)
{
	if (r < 0)
		r = 0.0;

	radius = r;
}
