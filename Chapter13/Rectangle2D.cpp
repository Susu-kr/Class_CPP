#include "Rectangle2D.h"



Rectangle2D::Rectangle2D() : x(0), y(0), width(1), height(1)
{
}

Rectangle2D::Rectangle2D(double p_x, double p_y, double w, double h)
{
	setX_pos(p_x);
	setY_pos(p_y);
	setWidth(w);
	setHeight(h);
}

double Rectangle2D::getX_pos() const
{
	return x;
}

void Rectangle2D::setX_pos(double p_x)
{
	this->x = p_x;
}

double Rectangle2D::getY_pos() const
{
	return y;
}

void Rectangle2D::setY_pos(double p_y)
{
	this->y = p_y;
}

double Rectangle2D::getWidth() const
{
	return width;
}

void Rectangle2D::setWidth(double w)
{
	this->width = w;
}

double Rectangle2D::getHeight() const
{
	return height;
}

void Rectangle2D::setHeight(double h)
{
	this->height = h;
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
	double Left_X = x - width / 2;
	double Down_Y = y - height / 2;
	double Right_X = x + width / 2;
	double Up_Y = y + height / 2;
	if (Left_X <= p_x && Right_X >= p_x && Down_Y <= p_y && Up_Y >= p_y)
		return true;
	return false;
}

bool Rectangle2D::contains(const Rectangle2D & R)
{
	double Left_X = x - width / 2;
	double Down_Y = y - height / 2;
	double Right_X = x + width / 2;
	double Up_Y = y + height / 2;

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
	double Left_X = x - width / 2;
	double Down_Y = y - height / 2;
	double Right_X = x + width / 2;
	double Up_Y = y + height / 2;

	double R_Left_X = R.getX_pos() - R.getWidth() / 2;
	double R_Down_Y = R.getY_pos() - R.getHeight() / 2;
	double R_Right_X = R.getX_pos() + R.getWidth() / 2;
	double R_Up_Y = R.getY_pos() + R.getHeight() / 2;

	if (Left_X > R_Right_X || Down_Y > R_Up_Y || Right_X < R_Left_X || Up_Y < R_Down_Y)
		return false;
	else return true;
}


Rectangle2D::~Rectangle2D()
{
	x = 0;
	y = 0;
	width = 0;
	height = 0;
}
