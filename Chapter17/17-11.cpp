#include <iostream>

using namespace std;

int main() {
	cout << "���� �Է��Ͻʽÿ� : ";
	int sum = 0;
	int num;
	while (cin >> num) {
		sum += num;
	}
	cout << "���������� �Է��� �� = " << num << endl;
	cout << "�հ� = " << sum << endl;
	return 0;
}