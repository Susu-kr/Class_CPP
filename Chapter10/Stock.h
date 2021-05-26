#pragma once

#include <string>

class Stock {
private:
	std::string company;
	long shares;
	double share_val;
	double total_val;
	void SetCompanyName(std::string com);
	void set_tot() { total_val = shares * share_val; }
public:
	Stock();
	Stock(const std::string &co, long n = 0, double pr = 0.0);
	~Stock();
	void SetName(std::string name);
	void acquire(const std::string &co, long n, double pr);
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void Show() const;
	Stock& Copy(Stock & s1);
};