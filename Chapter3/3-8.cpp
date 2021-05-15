#include <iostream>
using namespace std;

int main() {
	cout.setf(ios_base::fixed, ios_base::floatfield); // 고정 소수점 형식으로 출력

	float tub = 10.0 / 3.0;
	double mint = 10.0 / 3.0;
	const float million = 1.0e6;

	cout << "tub = " << tub << endl;
	cout << "a million tubs = " << million * tub << endl;
	cout << "ten million tubs = " << 10 * million * tub << endl;

	cout << "mint = " << mint << endl;
	cout << "a million mints = " << million * mint << endl;

	return 0;
}