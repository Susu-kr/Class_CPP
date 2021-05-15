#include <iostream>
using namespace std;

double gildong(int);
double moonsoo(int);
void estimate(int lines, double(*pf)(int));

int main() {
	int code;
	cout << "�ʿ��� �ڵ��� �� ���� �Է��Ͻʽÿ� : ";
	cin >> code;
	cout << "ȫ�浿�� �ð� ���� : " << endl;
	estimate(code, gildong);
	cout << "�ڹ����� �ð� ���� : " << endl;
	estimate(code, moonsoo);
	return 0;
}

double gildong(int lns) {
	return 0.05 * lns;
}
double moonsoo(int lns) {
	return 0.03 * lns + 0.0004 * lns * lns;
}
void estimate(int lines, double(*pf)(int)) {
	cout << lines << "���� �ۼ��ϴ� �� " << (*pf)(lines) << "�ð��� �ɸ��ϴ�." << endl;
}