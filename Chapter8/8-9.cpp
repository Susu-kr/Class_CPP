#include <iostream>
using namespace std;

const int ArrSize = 80;
char* left(const char* str, int n = 1);

int main() {
	char sample[ArrSize];
	cout << "���ڿ��� �Է��Ͻʽÿ� : " << endl;
	cin.get(sample, ArrSize);
	char* ps = left(sample, 4);
	cout << ps << endl;
	delete[] ps;
	ps = left(sample);
	cout << ps << endl;
	delete[] ps;
	return 0;
}
unsigned long left(unsigned long num, unsigned ct)
{
	return 0;
}
char* left(const char* str, int n) {
	if (n < 0) n = 0;
	
	char* p = new char[n + 1];
	int i;
	for (i = 0; i < n && str[i]; i++) {
		p[i] = str[i];
	}
	while (i <= n) {
		p[i++] = '\0';
	}
	return p;
}


