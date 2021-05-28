#include "Circle2D.h"
#include <cmath>
#define PI 3.14159265358979323846

Circle2D::Circle2D() : x(0), y(0), radius(1)
{
}

Circle2D::Circle2D(double x, double y, double radius) : x(x), y(y), radius(radius)
{
}

double Circle2D::getX_pos() const
{
	return x;
}

double Circle2D::getY_pos() const
{
	return y;
}

double Circle2D::getRadius() const
{
	return radius;
}

double Circle2D::getArea()
{
	return pow(radius, 2) * PI;
}

double Circle2D::getPerimeter()
{
	return (radius * 2) * PI;
}

bool Circle2D::contains(double p_x, double p_y)
{
	if (sqrt(pow(p_x - x, 2) + pow(p_y - y, 2)) < radius)
		return true;
	else
		return false;
}

bool Circle2D::contains(const Circle2D & C)
{
	double dis = sqrt(pow(x - C.getX_pos(), 2) + pow(y - C.getY_pos(), 2));
	if (abs(radius - C.getRadius()) > dis)
		return true;
	else return false;
}

bool Circle2D::overlaps(const Circle2D & C)
{
	double dis = sqrt(pow(x - C.getX_pos(), 2) + pow(y - C.getY_pos(), 2));
	if ((double)abs(radius - C.getRadius()) < dis && (double)abs(radius + C.getRadius()) > dis)
		return true;
	else return false;
}


Circle2D::~Circle2D() 
{
	x = 0;
	y = 0;
	radius = 0;
}
