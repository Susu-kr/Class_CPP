#include <iostream>
using namespace std;

int main() {
	double* p3 = new double[3];
	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;

	for (int i = 0; i < 3; i++) {
		cout << "p3[" << i << "]�� �ּ� : " << &p3[i] << endl;
		cout << "p3[" << i << "]�� �� : " << p3[i] << endl;
	}

	cout << "p3[1]�� " << p3[1] << "�Դϴ�." << endl;
	p3 = p3 + 1;
	cout << "������ p3[0]�� " << p3[0] << "�̰�, p3[1]�� " << p3[1] << "�Դϴ�." << endl;
	p3 = p3 - 1;
	delete[] p3;
	return 0;
}