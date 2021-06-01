#include "MyPoint.h"
#include <math.h>


MyPoint::MyPoint()
{
	x = 0;
	y = 0;
}

MyPoint::MyPoint(double x, double y)
{
	this->x = x;
	this->y = y;
}

double MyPoint::getX_pos()
{
	return x;
}

void MyPoint::setX_pos(double x)
{
	this->x = x;
}

double MyPoint::getY_pos()
{
	return y;
}

void MyPoint::setY_pos(double y)
{
	this->y = y;
}

double MyPoint::distance(const MyPoint & p)
{
	return sqrt(pow(x-p.x, 2) + pow(y- p.y,2));
}

bool MyPoint::isIn(Circle2D & C)
{
	return C.contains(x,y);
}

bool MyPoint::isIn(Rectangle2D & R)
{
	return R.contains(x,y);
}


MyPoint::~MyPoint()
{
}
