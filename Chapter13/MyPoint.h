#pragma once
#include "Circle2D.h"
#include "Rectangle2D.h"
class MyPoint
{
private:
	double x;
	double y;
public:
	MyPoint();
	MyPoint(double x, double y);
	double getX_pos();
	void setX_pos(double x);
	double getY_pos();
	void setY_pos(double y);
	double distance(const MyPoint & p);
	bool isIn(Circle2D & C);
	bool isIn(Rectangle2D & R);
	~MyPoint();
};

