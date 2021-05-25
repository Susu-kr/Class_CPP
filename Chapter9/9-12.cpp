#include <iostream>
#include "namesp.h"

using namespace std;

namespace pers {
	void getPerson(Person & rp) {
		cout << "�̸��� �Է��Ͻʽÿ� : ";
		cin >> rp.fname;
		cout << "������ �Է��Ͻʽÿ� : ";
		cin >> rp.lname;
	}
	void showPerson(const Person& rp) {
		cout << rp.lname << ", " << rp.fname;
	}
}

namespace debts {
	void getDebt(Debt & rd) {
		getPerson(rd.name);
		cout << "��ä�� �Է��Ͻʽÿ� : ";
		cin >> rd.amount;
	}
	void showDebt(Debt & rd) {
		pers::showPerson(rd.name);
		cout << ": $" << rd.amount << endl;
	}
	double sumDebts(const Debt ar[], int n) {
		double total = 0;
		for (int i = 0; i < n; i++) {
			total += ar[i].amount;
		}
		return total;
	}
}