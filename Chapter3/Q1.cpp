#include <iostream>

using namespace std;

int main() {

	int height;
	cout << "키를 입력하세요 : ___\b\b\b";
	cin >> height;
	const double change_meter = double(height) * 0.01;
	cout << "키 : " << height << "cm, " << change_meter << "m" << endl;

	return 0;
}