#pragma once
class Rectangle2D
{
private :
	double x;
	double y;
	double width;
	double height;
public:
	Rectangle2D();
	Rectangle2D(double p_x, double p_y, double w, double h);
	double getX_pos() const;
	void setX_pos(double p_x);
	double getY_pos() const;
	void setY_pos(double p_y);
	double getWidth() const;
	void setWidth(double w);
	double getHeight() const;
	void setHeight(double h);

	double getArea();
	double getPerimeter();

	bool contains(double x, double y);
	bool contains(const Rectangle2D & R);
	bool overlaps(const Rectangle2D & R);


	~Rectangle2D();
};

