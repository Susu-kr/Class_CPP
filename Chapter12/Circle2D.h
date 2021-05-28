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
	double getArea(); // ���� ���� : ���� = ������ x ������ x 3.14
	double getPerimeter(); // ���� : ���� x 3.14
	bool contains(double p_x, double p_y);
	bool contains(const Circle2D & c);
	bool overlaps(const Circle2D & c);
	~Circle2D();
};

