#include <iostream>

using namespace std;

int main() {
	int temperature = 63;

	cout << "������ ���� : ";
	cout.setf(ios_base::showpos);
	cout << temperature << endl;

	cout << "���α׷��ӵ鿡�� �� ����\n";
	cout << hex << temperature << endl;
	cout.setf(ios_base::uppercase);
	cout.setf(ios_base::showbase);
	cout << "�Ǵ�\n";
	cout << temperature << endl;
	cout << true << "!�� ���� ";
	cout.setf(ios_base::boolalpha);
	cout << true << "�̴�.\n";
	return 0;
}