#include <iostream>
using namespace std;

double gildong(int);
double moonsoo(int);
void estimate(int lines, double(*pf)(int));

int main() {
	int code;
	cout << "필요한 코드의 행 수를 입력하십시오 : ";
	cin >> code;
	cout << "홍길동의 시간 예상 : " << endl;
	estimate(code, gildong);
	cout << "박문수의 시간 예상 : " << endl;
	estimate(code, moonsoo);
	return 0;
}

double gildong(int lns) {
	return 0.05 * lns;
}
double moonsoo(int lns) {
	return 0.03 * lns + 0.0004 * lns * lns;
}
void estimate(int lines, double(*pf)(int)) {
	cout << lines << "행을 작성하는 데 " << (*pf)(lines) << "시간이 걸립니다." << endl;
}