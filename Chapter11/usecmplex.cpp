#include <iostream>
#include "complex0.h"
using namespace std;

int main() {
	complex0 a(3.0, 4.0);
	complex0 c;

	cout << "�ϳ��� ���Ҽ��� �Է��Ͻʽÿ� (�������� q) : \n";
	while (cin >> c) {
		cout << "c = " << c << endl;
		cout << "���׺��Ҽ� =  " << ~c << endl;
		cout << "a = " << a << endl;
		cout << "a + c = " << a + c << endl;
		cout << "a - c = " << a - c << endl;
		cout << "a * c = " << a * c << endl;
		cout << "2 * c = " << 2 * c << endl;
		cout << "�ϳ��� ���Ҽ��� �Է��Ͻʽÿ� (�������� q) : \n";
	}
	std::cout << "\r���α׷��� �����մϴ�.";
	return 0;
}