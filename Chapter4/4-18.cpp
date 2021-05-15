#include <iostream>
using namespace std;

int main() {
	double* p3 = new double[3];
	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;

	for (int i = 0; i < 3; i++) {
		cout << "p3[" << i << "]의 주소 : " << &p3[i] << endl;
		cout << "p3[" << i << "]의 값 : " << p3[i] << endl;
	}

	cout << "p3[1]은 " << p3[1] << "입니다." << endl;
	p3 = p3 + 1;
	cout << "이제는 p3[0]이 " << p3[0] << "이고, p3[1]이 " << p3[1] << "입니다." << endl;
	p3 = p3 - 1;
	delete[] p3;
	return 0;
}