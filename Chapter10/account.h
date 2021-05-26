#pragma once
#include <string>
class account
{
private:
	std::string name;
	std::string acctnum;
	double balance;
public:
	account();
	account(const std::string & client, const std::string & num, double bal = 0.0);
	void show(void) const;
	void deposit(double cash);
	void withdraw(double cash);
	~account();
};

