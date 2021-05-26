#pragma once
#include <iostream>
class complex0
{
private:
	double real;
	double fake;
public:
	complex0();
	complex0(double r,  double f);
	// 연산자 오버로딩
	complex0 operator+(const complex0 & C) const;
	complex0 operator-(const complex0 & C) const;
	complex0 operator*(const complex0 & C) const;
	complex0 operator~();
	complex0 operator*(double mul) const;

	// friend
	friend complex0 operator*(double m, const complex0 & t) {
		return t * m;
	}
	friend std::ostream & operator<<(std::ostream& os, const complex0 & t);
	friend std::istream & operator>>(std::istream& os, complex0 & t);

	~complex0();
};

