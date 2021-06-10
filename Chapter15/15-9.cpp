#include <iostream>

using namespace std;

double hmean(double a, double b);

int main() {
	double x, y, z;
	cout << "두 수를 입력하시오 : ";
	while (cin >> x >> y) {
		try {
			z = hmean(x, y);
		}
		catch (const char * s) {
			cout << s << endl;
			cout << "두 수를 새로 입력하세요 : ";
			continue;
		}
		cout << x << ", " << y << "의 조화평균은 " << z << "입니다.\n";
		cout << "다른 두 수를 입력하십시오. (끝내려면 q) : ";
	}
	cout << "프로그램을 종료합니다.";
	return 0;
}

double hmean(double a, double b) {
	if (a == -b)
		throw "잘못된 hmean() 매개변수 : a = -b는 허용되지 않습니다.";
	return 2.0 * a * b / (a + b);
}