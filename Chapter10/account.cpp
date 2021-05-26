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
	cout << "������ : " << name << std::endl;
	cout << "���� ��ȣ : " << acctnum << std::endl;
	cout << "�ܾ� : $" << balance << std::endl;
}

void account::deposit(double cash)
{
	if (cash < 0) {
		std::cout << "�ݾ��� ������ �� �� �����ϴ�.\n";
	}
	else {
		balance += cash;
	}
}

void account::withdraw(double cash)
{
	if (balance < cash) {
		std::cout << "�ܾ��� �����մϴ�.\n";
	}
	else if (cash < 0) {
		std::cout << "�ݾ��� ������ �� �� �����ϴ�.\n";
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
