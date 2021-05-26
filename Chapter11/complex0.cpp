#include "complex0.h"



complex0::complex0() : real(0), fake(0)
{
}

complex0::complex0(double r, double f) : real(r), fake(f)
{
}

complex0 complex0::operator+(const complex0 & C) const
{
	complex0 temp;
	temp.real = this->real + C.real;
	temp.fake = this->fake + C.fake;
	return temp;
}

complex0 complex0::operator-(const complex0 & C) const
{
	complex0 temp;
	temp.real = this->real - C.real;
	temp.fake = this->fake - C.fake;
	return temp;
}

complex0 complex0::operator*(const complex0 & C) const
{
	complex0 temp;
	temp.real = this->real * C.real - this->fake * C.fake;
	temp.fake = this->real * C.fake + this->fake * C.real;
	return temp;
}

complex0 complex0::operator~()
{
	complex0 temp;

	temp.real = this->real;
	temp.fake = -1 * this->fake;
	return temp;
}

complex0 complex0::operator*(double mul) const
{
	complex0 temp;
	temp.real = this->real * mul;
	temp.fake = this->fake * mul;
	return temp;
}


complex0::~complex0()
{
	real = 0;
	fake = 0;
}

std::ostream & operator<<(std::ostream & os, const complex0 & t)
{
	// TODO: 여기에 반환 구문을 삽입합니다.
	os << "(" << t.real << ", " << t.fake << "i)";
	return os;
}

std::istream & operator>>(std::istream & is, complex0 & t)
{
	std::cout << "실수부 : ";
	is >> t.real;
	std::cout << "허수부 : ";
	is >> t.fake;
	return is;
}
