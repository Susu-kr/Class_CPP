#include <iostream>

using namespace std;

int main() {
	const double one_degree = 1.0;
	const double one_min_degree = one_degree / 60;
	const double one_sec_degree = one_min_degree / 60;

	int deg, min, sec;
	cout << "위도를 도, 분, 초 단위로 입력하시오:" << endl;
	cout << "먼저, 도각을 입력하시오 : "; cin >> deg;
	cout << "다음에, 분각을 입력하시오 : "; cin >> min;
	cout << "끝으로, 초각을 입력하시오 : "; cin >> sec;
	cout << deg << "도, " << min << "분, " << sec << "초 = ";
	cout << deg * one_degree + min * one_min_degree + sec * one_sec_degree << "도" << endl;

	return 0;
}