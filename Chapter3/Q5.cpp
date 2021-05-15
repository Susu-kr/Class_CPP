#include <iostream>

using namespace std;

int main() {
	long long World, Local;
	cout << "세계 인구수를 입력하시오 : "; cin >> World;
	cout << "지역 인구수를 입력하시오 : "; cin >> Local;
	cout.setf(ios_base::fixed);
	cout.precision(5);
	double result = (double)Local / (double)World * 100;
	cout << "세계 인구수에서 미국이 차지하는 비중은 " << result << "%" << endl;
	return 0;
}