#include "account.h"
#include <iostream>

account::account()
{
	name = "";
	acctnum = "";
	balance = 0.0;
}

account::account(const std::string & client, const std::string & num, double bal)
{
	name = client;
	acctnum = num;
	balance = bal;
}

void account::show(void) const
{
	using std::cout;
	cout << "예금주 : " << name << std::endl;
	cout << "계좌 번호 : " << acctnum << std::endl;
	cout << "잔액 : $" << balance << std::endl;
}

void account::deposit(double cash)
{
	if (cash < 0) {
		std::cout << "금액이 음수가 될 수 없습니다.\n";
	}
	else {
		balance += cash;
	}
}

void account::withdraw(double cash)
{
	if (balance < cash) {
		std::cout << "잔액이 부족합니다.\n";
	}
	else if (cash < 0) {
		std::cout << "금액이 음수가 될 수 없습니다.\n";
	}
	else {
		balance -= cash;
	}
}

account::~account()
{
	name = "";
	acctnum = "";
	balance = 0.0;
}
