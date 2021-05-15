#include <iostream>
#include <Windows.h>
using namespace std;

void countdown(int n);

int main() {
	countdown(4);
	return 0;
}

void countdown(int n) {
	cout << "카운트 다운 ... " << n << endl;
	Sleep(1000);
	if (n > 0) {
		countdown(n - 1);
	}
	cout << n << ": Kaboom!" << endl;
}