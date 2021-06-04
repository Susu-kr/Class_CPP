#include "GeometricObject.h"
#include <cmath>
#define PI 3.14159265358979323846
GeometricObject::GeometricObject(double _x, double _y)
{
	x = _x;
	y = _y;
}

GeometricObject::GeometricObject(const GeometricObject & g)
{
	x = g.x;
	y = g.y;
}

double GeometricObject::getX_pos() const
{
	return x;
}

void GeometricObject::setX_pos(double p_x)
{
	x = p_x;
}

double GeometricObject::getY_pos() const
{
	return y;
}

void GeometricObject::setY_pos(double p_y)
{
	y = p_y;
}

double GeometricObject::getArea() const
{
	return 0.0;
}

double GeometricObject::getPerimeter() const
{
	return 0.0;
}


Circle2D::Circle2D(double x, double y, double r) : GeometricObject(x, y)
{
	radius = r;
}

Circle2D::Circle2D(const GeometricObject & g, double r) : GeometricObject(g)
{
	radius = r;
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
	if (sqrt(pow(p_x - getX_pos(), 2) + pow(p_y -getY_pos(), 2)) < radius)
		return true;
	else
		return false;
}

bool Circle2D::contains(const Circle2D & C)
{
	double dis = sqrt(pow(getX_pos() - C.getX_pos(), 2) + pow(getY_pos() - C.getY_pos(), 2));
	if (abs(radius - C.getRadius()) > dis)
		return true;
	else return false;
}

bool Circle2D::overlaps(const Circle2D & C)
{
	double dis = sqrt(pow(getX_pos() - C.getX_pos(), 2) + pow(getY_pos() - C.getY_pos(), 2));
	if ((double)abs(radius - C.getRadius()) < dis && (double)abs(radius + C.getRadius()) > dis)
		return true;
	else return false;
}

Rectangle2D::Rectangle2D(double p_x, double p_y, double w, double h) : GeometricObject(p_x, p_y)
{
	width = w;
	height = h;
}
Rectangle2D::Rectangle2D(const GeometricObject & g, double w, double h) : GeometricObject(g)
{
	width = w;
	height = h;
}

double Rectangle2D::getWidth() const
{
	return width;
}

void Rectangle2D::setWidth(double w)
{
	width = w;
}

double Rectangle2D::getHeight() const
{
	return height;
}

void Rectangle2D::setHeight(double h)
{
	height = h;
}

double Rectangle2D::getArea()
{
	return width * height;
}

double Rectangle2D::getPerimeter()
{
	return (2 * width) + (2 * height);
}

bool Rectangle2D::contains(double p_x, double p_y)
{
	double Left_X = getX_pos() - width / 2;
	double Down_Y = getY_pos() - height / 2;
	double Right_X = getX_pos() + width / 2;
	double Up_Y = getY_pos() + height / 2;
	if (Left_X <= p_x && Right_X >= p_x && Down_Y <= p_y && Up_Y >= p_y)
		return true;
	return false;
}

bool Rectangle2D::contains(const Rectangle2D & R)
{
	double Left_X = getX_pos() - width / 2;
	double Down_Y = getY_pos() - height / 2;
	double Right_X = getX_pos() + width / 2;
	double Up_Y = getY_pos() + height / 2;

	double R_Left_X = R.getX_pos() - R.getWidth() / 2;
	double R_Down_Y = R.getY_pos() - R.getHeight() / 2;
	double R_Right_X = R.getX_pos() + R.getWidth() / 2;
	double R_Up_Y = R.getY_pos() + R.getHeight() / 2;

	if (Left_X <= R_Left_X && Right_X >= R_Right_X && Down_Y <= R_Down_Y && Up_Y >= R_Up_Y)
		return true;
	else return false;
}

bool Rectangle2D::overlaps(const Rectangle2D & R)
{
	double Left_X = getX_pos() - width / 2;
	double Down_Y = getY_pos() - height / 2;
	double Right_X = getX_pos() + width / 2;
	double Up_Y = getY_pos() + height / 2;

	double R_Left_X = R.getX_pos() - R.getWidth() / 2;
	double R_Down_Y = R.getY_pos() - R.getHeight() / 2;
	double R_Right_X = R.getX_pos() + R.getWidth() / 2;
	double R_Up_Y = R.getY_pos() + R.getHeight() / 2;

	if (Left_X > R_Right_X || Down_Y > R_Up_Y || Right_X < R_Left_X || Up_Y < R_Down_Y)
		return false;
	else return true;
}

MyPoint::MyPoint(double p_x, double p_y) : GeometricObject(p_x, p_y) {}

MyPoint::MyPoint(const GeometricObject & g) : GeometricObject(g) {}


double MyPoint::distance(const MyPoint & p)
{
	return sqrt(pow(this->getX_pos() - p.getX_pos(), 2) + pow(this->getY_pos() - p.getY_pos(), 2));
}

bool MyPoint::isIn(Circle2D & C)
{
	return C.contains(this->getX_pos(), this->getY_pos());
}

bool MyPoint::isIn(Rectangle2D & R)
{
	return R.contains(this->getX_pos(), this->getY_pos());
}


