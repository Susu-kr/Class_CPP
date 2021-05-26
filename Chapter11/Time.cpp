#include "Time.h"
#include <iostream>
Time::Time() : hours(0), minutes(0) // �̰� �ӵ��� ������
{
}
Time::Time(int h, int m) : hours(h), minutes(m)
{
}

void Time::AddMin(int m)
{
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}

void Time::AddHr(int h)
{
	hours += h;
}

void Time::Reset(int h, int m)
{
	hours = h;
	minutes = m;
}

Time Time::Sum(const Time & t) const
{
	Time sum;
	sum.minutes = this->minutes + t.minutes;
	sum.hours = this->hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}

Time Time::operator+(const Time & t) const
{
	Time sum;
	sum.minutes = this->minutes + t.minutes;
	sum.hours = this->hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}

Time Time::operator-(const Time & t) const
{
	Time diff;
	int totalminutes = (t.hours * 60 + t.minutes) - (this->hours * 60 + this->minutes) ;
	diff.hours = totalminutes / 60;
	diff.minutes = totalminutes % 60;
	return diff;
}

Time Time::operator*(double mul) const
{
	Time result;
	long totalminutes = this->hours * mul * 60 + this->minutes * mul;
	result.hours = totalminutes / 60;
	result.hours = totalminutes % 60;
	return result;
}

void Time::show() const
{
	std::cout << hours << "�ð�, " << minutes << "��" <<std::endl;
}

Time::~Time()
{
}

std::ostream & operator<<(std::ostream & os, const Time & t)
{
	// TODO: ���⿡ ��ȯ ������ �����մϴ�.
	os << t.hours << "�ð�, " << t.minutes << "��";
	return os;
}
