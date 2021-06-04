#include "AcctABC.h"
#include <iostream>
using namespace std;

AcctABC::Formatting AcctABC::SetFormat() const
{
	Formatting f;
	f.flag = cout.setf(ios_base::fixed, ios_base::floatfield);
	f.pr = cout.precision(2);
	return f;
}

void AcctABC::Restore(Formatting & f) const
{
	cout.setf(f.flag, ios_base::floatfield);
	cout.precision(f.pr);
}

AcctABC::AcctABC(const std::string & s, long an, double bal)
{
	fullName = s;
	acctNum = an;
	balance = bal;
}

void AcctABC::Deposit(double amt)
{
	if (amt < 0) cout << "���̳ʽ� �Ա��� ������ �ʽ��ϴ�.\n�Ա��� ��ҵǾ����ϴ�.\n";
	else balance += amt;
}

void AcctABC::Withdraw(double amt)
{
	balance -= amt;
}


void Brass::Withdraw(double amt)
{
	if (amt < 0) cout << "���̳ʽ� ������ ������ �ʽ��ϴ�.\n������ ��ҵǾ����ϴ�.\n";
	else if (amt <= Balance()) AcctABC::Withdraw(amt);
	else cout << "������ �䱸�� �ݾ� $" << amt << "�� ���� �ܾ��� �ʰ��մϴ�.\n������ ��ҵǾ����ϴ�.\n";
}


void Brass::ViewAcct() const
{
	// ###.## �������� �����Ѵ�.
	Formatting f = SetFormat();
	cout << "Brass ���� �̸� : " << Fullname() << endl;
	cout << "���� ��ȣ : " << AcctNum() << endl;
	cout << "���� �ܾ� : $" << Balance() << endl;
	Restore(f);
}

BrassPlus::BrassPlus(const std::string & s, long an, double bal, double ml, double r) : AcctABC(s, an, bal)
{
	maxLoan = ml;
	owesBank = 0.0;
	rate = r;
}

BrassPlus::BrassPlus(const Brass & ba, double ml, double r) : AcctABC(ba) // �Ͻ��� ���� �����ڸ� ���
{
	maxLoan = ml;
	owesBank = 0.0;
	rate = r;
}
// ViewAcct()�� ������ ������
void BrassPlus::ViewAcct() const
{
	// ###.## �������� �����Ѵ�.
	Formatting f = SetFormat();
	cout << "Brass ���� �̸� : " << Fullname() << endl;
	cout << "���� ��ȣ : " << AcctNum() << endl;
	cout << "���� �ܾ� : $" << Balance() << endl;
	cout << "���� ��� �ѵ��� : $" << maxLoan << endl;
	cout << "��ȯ�� ������ : $" << owesBank << endl;
	cout.precision(3); //###.## ����
	cout << "���� ��� ������ : " << 100 * rate << "%\n";
	Restore(f);
}
// Withdraw ������
void BrassPlus::Withdraw(double amt)
{
	// ###.## �������� �����Ѵ�.
	Formatting f = SetFormat();

	double bal = Balance();
	if (amt <= bal) AcctABC::Withdraw(amt);
	else if (amt <= bal + maxLoan - owesBank) {
		double advance = amt - bal;
		owesBank += advance * (1.0 + rate);
		cout << "���� ��� �ݾ� : $" << advance << endl;
		cout << "���� ��� ���� : $" << advance * rate << endl;
		Deposit(advance);
		AcctABC::Withdraw(amt);
	}
	else cout << "���� ��� �ѵ��� �ʰ��Ǿ� �ŷ��� ��ҵǾ����ϴ�.\n";
	Restore(f);
}