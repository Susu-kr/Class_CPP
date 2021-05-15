#include <iostream>

using namespace std;

float Transform(int d);

int main() {

	int degree;
	cout << "섭씨 온도를 입력하고 Enter 키를 누르십시오 : ";
	cin >> degree;
	cout << "섭씨 " << degree << "도는 화씨로 " << Transform(degree) << "도입니다." << endl;
	return 0;
	
}

float Transform(int d) {
	return (1.8 * d) + 32.0;
}