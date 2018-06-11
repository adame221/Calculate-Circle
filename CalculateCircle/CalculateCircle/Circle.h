#pragma once
class Circle
{
private:
	double radius;
	const double PI = 3.14159;



public:

	Circle() { 
		radius = 0.0; }
	Circle(double r);

	virtual ~Circle();

	double getRadius() const { return radius; }
	void setRadius(double r);

	double getArea() const { return PI * radius*radius; }
	double getDiameter() const { return radius * 2; }
	double getCircumference() const { return 2 * PI*radius; }
};

