#include <iostream>

using namespace std;

void simon(int);

int main() {

	simon(3);
	cout << "������ �ϳ� ���ÿ�: ";
	int count;
	cin >> count;
	simon(count);
	cout << "��!" << endl;

	return 0;
}

void simon(int n) {
	cout << "Simon ��, �߰����� " << n << "�� �ε����." << endl;
}