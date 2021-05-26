#include <iostream>
#include "Time.h"

using namespace std;

int main() {
	Time s(2, 40);
	Time t(5, 55);
	Time x(10, 23);
	Time total;
	Time op;
	Time op2;
	total = s.Sum(t); // total = s + t;
	total.show();
	op = s + t + x;
	op.show();
	op2 = s.operator+(t.operator+(x));
	op2.show();
	return 0;
}