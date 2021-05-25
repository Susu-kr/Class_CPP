#include "Stock.h"
#include <iostream>

// :: ��� ���� ���� ������ , Ŭ���� �޼���� Ŭ������ private �κп��� �����Ҽ��ִ�.

void Stock::SetCompanyName(std::string com) 
{
	company = com;
}

Stock::Stock()
{
	company = "No Name";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}

Stock::Stock(const std::string & co, long n, double pr)
{
	company = co;
	shares = n;
	share_val = pr;
	set_tot();
}

Stock::~Stock()
{
	company = "";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
	//delete....
}

void Stock::SetName(std::string name)
{
	SetCompanyName(name);
}

void Stock::acquire(const std::string & co, long n, double pr)
{
	company = co;
	if (n < 0) {
		std::cout << "�ֽ� ���� ������ �� �� �����Ƿ�, " << company << " shares�� 0���� �����մϴ�.\n";
		shares = 0;
	}
	else {
		shares = n;
		share_val = pr;
		set_tot();
	}
}

void Stock::buy(long num, double price)
{
	if (num < 0) {
		std::cout << "���� �ֽ� ���� ������ �� �� �����Ƿ�, �ŷ��� ��ҵǾ����ϴ�.\n";
	}
	else {
		shares += num;
		share_val = price;
		set_tot();
	}
}
void Stock::sell(long num, double price)
{
	using std::cout;
	if (num < 0) {
		cout << "�ŵ� �ֽ� ���� ������ �� �� �����Ƿ�, �ŷ��� ��ҵǾ����ϴ�.\n";
	}
	else if(num > shares) {
		cout << "���� �ֽĺ��� ���� �ֽ��� �ŵ��� �� �����Ƿ�, �ŷ��� ��ҵǾ����ϴ�.\n";
	}
	else {
		shares -= num;
		share_val = price;
		set_tot();
	}
}
void Stock::update(double price)
{
	share_val = price;
	set_tot();
}
void Stock::Show() const
{
	using std::cout;
	using std::ios_base;
	ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = cout.precision(3);

	cout << "ȸ��� : " << company << std::endl;
	cout << "�ֽ� �� : " << shares << std::endl;
	cout << "�ְ� : $" << share_val << std::endl;
	cout.precision(2);
	cout << "�ֽ� �� ��ġ : $" << total_val << std::endl;

	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
}
