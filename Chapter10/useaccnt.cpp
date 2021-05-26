#include <iostream>
#include "account.h"

using namespace std;

int main() {
	account A("ÀÌ¼öÇö", "012-1234-4567-02", 1000.49);
	A.show();
	A.withdraw(500.4);
	A.show();
	A.withdraw(-500.4);
	A.show();
	A.deposit(1000.49);
	A.show();
	A.deposit(-100.49);
	A.show();
	A.withdraw(10000.4);
	A.show();
	return 0;
}