#include <iostream>
using namespace std;

unsigned int c_in_str(const char* str, char ch);

int main() {
	char mmm[15] = "minimum";
	const char* wail = "ululate";
	unsigned int ms = c_in_str(mmm, 'm');
	unsigned int us = c_in_str(wail, 'u');
	cout << mmm << "���� m�� " << ms << "�� ����ִ�." << endl;
	cout << wail << "���� u�� " << us << "�� ����ִ�." << endl;
	return 0;
}

unsigned int c_in_str(const char* str, char ch) {
	int cnt = 0;
	while (*str) {
		if (*str == ch)
			cnt++;
		str++;
	}
	return cnt;
}