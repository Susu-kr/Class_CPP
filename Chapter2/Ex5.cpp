#include <iostream>

using namespace std;

float Transform(int d);

int main() {

	int degree;
	cout << "���� �µ��� �Է��ϰ� Enter Ű�� �����ʽÿ� : ";
	cin >> degree;
	cout << "���� " << degree << "���� ȭ���� " << Transform(degree) << "���Դϴ�." << endl;
	return 0;
	
}

float Transform(int d) {
	return (1.8 * d) + 32.0;
}