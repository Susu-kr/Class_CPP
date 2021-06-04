#pragma once
#ifndef WORKER0_H_
#define WORKER0_H_
#include <string>


class Worker0
{
private:
	std::string fullname;
	long id;
public:
	Worker0() : fullname("no name"), id(0L) {}
	Worker0(const std::string & s, long n) : fullname(s), id(n){}
	virtual ~Worker0() = 0;
	virtual void Set();
	virtual void Show() const;
};

class Waiter : public Worker0 {
private:
	int panache;
public:
	Waiter() : Worker0(), panache(0) {}
	Waiter(const std::string & s, long n, int p = 0)
		: Worker0(s, n), panache(p) { }
	Waiter(const Worker0 & wk, int p = 0)
		: Worker0(wk), panache(p) { }
	void Set();
	void Show() const;
};

class Singer : public Worker0
{
protected:
	enum{other, alto, contralto, soprano, bass, baritone, tenor};
	enum{Vtypes = 7};

private:
	const static char *pv[Vtypes];
	int voice;
public:
	Singer() : Worker0(), voice(other) {}
	Singer(const std::string & s, long n, int v = other)
		: Worker0(s, n), voice(v) {}
	Singer(const Worker0 & wk, int v = other)
		: Worker0(wk), voice(v) { }
	void Set();
	void Show() const;
};

#endif // !


