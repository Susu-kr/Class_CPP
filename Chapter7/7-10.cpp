#include <iostream>
using namespace std;

char* buildstr(char c, int n);

int main() {
	int times;
	char ch;

	cout << "문자 하나를 입력하시오 : ";
	cin >> ch;
	cout << "정수 하나를 입력하시오 : ";
	cin >> times;
	char *ps = buildstr(ch, times);
	cout << ps << endl;
	delete[] ps;
	ps = buildstr('+', 20);
	cout << ps << "-DOWN-" << ps << endl;
	delete[] ps;
	return 0;
}

char* buildstr(char c, int n) {
	char* pstr = new char[n + 1];
	pstr[n] = '\0';
	while (n-- > 0)
		pstr[n] = c;
	return pstr;
}