#include <iostream>

using namespace std;

int main() {
	long long World, Local;
	cout << "���� �α����� �Է��Ͻÿ� : "; cin >> World;
	cout << "���� �α����� �Է��Ͻÿ� : "; cin >> Local;
	cout.setf(ios_base::fixed);
	cout.precision(5);
	double result = (double)Local / (double)World * 100;
	cout << "���� �α������� �̱��� �����ϴ� ������ " << result << "%" << endl;
	return 0;
}