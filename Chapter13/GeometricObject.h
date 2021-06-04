#pragma once
#ifndef GEOMETRICOBJECT_H_
#define GEOMETRICOBJECT_H_
#include <iostream>
using namespace std;
class GeometricObject
{
private:
	double x;
	double y;

public:
	GeometricObject(double _x = 0.0, double _y = 0.0);
	GeometricObject(const GeometricObject & g);
	double getX_pos() const;
	void setX_pos(double p_x);
	double getY_pos() const;
	void setY_pos(double p_y);
	virtual double getArea() const;
	virtual double getPerimeter() const;


};

class Circle2D : public GeometricObject
{
private:
	double radius;
public:
	Circle2D(double x = 0.0, double y = 0.0, double radius = 0.0);
	Circle2D(const GeometricObject & g, double radius = 0.0);
	double getRadius() const;
	virtual double getArea(); // 원의 면적 : 넓이 = 반지름 x 반지름 x 3.14
	virtual double getPerimeter(); // 원주 : 지름 x 3.14
	bool contains(double p_x, double p_y);
	bool contains(const Circle2D & c);
	bool overlaps(const Circle2D & c);
};

class Rectangle2D : public GeometricObject
{
private:
	double width;
	double height;
public:
	Rectangle2D(double p_x = 0.0, double p_y = 0.0, double w = 0.0, double h = 0.0);
	Rectangle2D(const GeometricObject & g, double w = 0.0, double h = 0.0);
	double getWidth() const;
	void setWidth(double w);
	double getHeight() const;
	void setHeight(double h);

	virtual double getArea();
	virtual double getPerimeter();

	bool contains(double x, double y);
	bool contains(const Rectangle2D & R);
	bool overlaps(const Rectangle2D & R);
};

class MyPoint : public GeometricObject
{
public:
	MyPoint(double x, double y);
	MyPoint(const GeometricObject & g);
	double distance(const MyPoint & p);
	bool isIn(Circle2D & C);
	bool isIn(Rectangle2D & R);
};

#endif // !GEOMETRICOBJECT_H_


