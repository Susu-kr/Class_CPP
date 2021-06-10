#include "exc_mean.h"
#include <iostream>
#include <cmath>

using namespace std;

double hmean(double a, double b) throw(bad_hmean);
double gmean(double a, double b) throw(bad_gmean);


int main() {
	double x, y, z;
	cout << "�� ���� �Է��Ͻÿ� : ";
	while (cin >> x >> y) {
		try {
			z = hmean(x, y);
			cout << x << ", " << y << "�� ��ȭ����� " << z << "�Դϴ�.\n";
			cout << x << ", " << y << "�� ��������� " << gmean(x, y) << "�Դϴ�.\n";
			cout << "�ٸ� �� ���� �Է��Ͻʽÿ�. (�������� q) : ";
		}
		catch (bad_hmean & bg) {
			bg.mesg();
			cout << "�ٽ� �Ͻʽÿ�.\n";
			continue;
		}
		catch (bad_gmean & hg) {
			cout << hg.mesg();
			cout << "Values used : " << hg.v1 << ", " << hg.v2 << endl;
			cout << "�˼��մϴ�. �� �̻� ������ �� �����ϴ�.\n";
			break;
		}
	}
	cout << "���α׷��� �����մϴ�.";
	return 0;
}

double hmean(double a, double b) {
	if (a == -b)
		throw bad_hmean(a, b);
	return 2.0 * a * b / (a + b);
}


double gmean(double a, double b) {
	if (a < 0 || b < 0)
		throw bad_gmean(a, b);
	return std::sqrt(a * b);
}