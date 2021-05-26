#pragma once
#include <iostream>

class Time
{
private:
	int hours;
	int minutes;
public:
	Time();
	Time(int h, int m);
	void AddMin(int m);
	void AddHr(int h);
	void Reset(int h = 0, int m = 0);
	Time Sum(const Time & t) const;
	void show() const;

	// 연산자 오버로딩
	Time operator+(const Time & t) const;
	Time operator-(const Time & t) const;
	Time operator*(double mul) const;

	// friend
	friend Time operator*(double m, const Time& t) {
		return t * m;
	}

	friend std::ostream & operator<<(std::ostream& os, const Time & t);
	~Time();
};

