#include <iostream>

using namespace std;

int main() {
	const double one_degree = 1.0;
	const double one_min_degree = one_degree / 60;
	const double one_sec_degree = one_min_degree / 60;

	int deg, min, sec;
	cout << "������ ��, ��, �� ������ �Է��Ͻÿ�:" << endl;
	cout << "����, ������ �Է��Ͻÿ� : "; cin >> deg;
	cout << "������, �а��� �Է��Ͻÿ� : "; cin >> min;
	cout << "������, �ʰ��� �Է��Ͻÿ� : "; cin >> sec;
	cout << deg << "��, " << min << "��, " << sec << "�� = ";
	cout << deg * one_degree + min * one_min_degree + sec * one_sec_degree << "��" << endl;

	return 0;
}