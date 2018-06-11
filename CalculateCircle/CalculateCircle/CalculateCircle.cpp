// CalculateCircle.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Circle.h"

using namespace std;

int main()
{
	double r;

	cout << "Enter the radius of the circle: ";
	cin >> r;
	cout << endl << endl;

	Circle object(r);

	cout << "The area of the cirle is: " << object.getArea() << endl;
	cout << "The diameter of the circle is: " << object.getDiameter() << endl;
	cout << "The circumference of the circle is: " << object.getCircumference() << endl;

	return 0;
}

