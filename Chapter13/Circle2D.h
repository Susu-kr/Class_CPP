#pragma once
class Circle2D
{
private:
	double x;
	double y;
	double radius;
public:
	Circle2D();
	Circle2D(double x, double y, double radius);
	double getX_pos() const;
	double getY_pos() const;
	double getRadius() const;
	double getArea(); // 원의 면적 : 넓이 = 반지름 x 반지름 x 3.14
	double getPerimeter(); // 원주 : 지름 x 3.14
	bool contains(double p_x, double p_y);
	bool contains(const Circle2D & c);
	bool overlaps(const Circle2D & c);
	~Circle2D();
};

