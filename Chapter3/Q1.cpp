#include <iostream>

using namespace std;

int main() {

	int height;
	cout << "Ű�� �Է��ϼ��� : ___\b\b\b";
	cin >> height;
	const double change_meter = double(height) * 0.01;
	cout << "Ű : " << height << "cm, " << change_meter << "m" << endl;

	return 0;
}