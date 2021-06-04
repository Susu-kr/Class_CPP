#include <iostream>
#include "Worker0.h"
using namespace std;

const int LIM = 4;
int main() {
	Waiter bob("ȫ�浿", 314L, 5);
	Singer bev("������", 522L, 3);

	Waiter w_temp;
	Singer s_temp;

	Worker0 *pw[LIM] = { &bob, &bev, &w_temp, &s_temp };
	int i;
	for (i = 2; i < LIM; i++)
		pw[i]->Set();
	for (i = 0; i < LIM; i++) {
		pw[i]->Show();
		cout << endl;
	}

	return 0;
}