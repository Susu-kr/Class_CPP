#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void change(string I);

int main() {
	string I;
	cout << "실수 : ";
	cin >> I;
	change(I);
	return 0;
}

void change(string I) {
	string R, F;
	int dot = 0;
	for (unsigned int i = 0; i < I.size(); i++) {
		if (I[i] == '.') {
			dot = i;
			break;
		}
		R += I[i];
	}
	for (unsigned int i = dot + 1; i < I.size(); i++) {
		F += I[i];
	}
	int num = 0, fn = 0, den = 0;
	for (unsigned int i = 0; i < R.size(); i++) {
		num += int(R[i] - '0') * pow(10, R.size() - i - 1);
	}
	for (unsigned int i = 0; i < F.size(); i++) {
		fn += int(F[i] - '0') * pow(10, F.size() - i - 1);
	}
	den = pow(10, F.size());
	while (fn % 2 == 0) {
		fn /= 2;
		den /= 2;
	}
	while (fn % 5 == 0) {
		fn /= 5;
		den /= 5;
	}
	cout << "분수 : " << fn + num * den << " / " << den << endl;
}