/*
	문제2.
	두 점 (x1, y1) 과 (x2, y2)를 입력받아 이 두점 사이의 거리를 출력하는 프로그램
	거리 계산 공식 : sqrt(pow((x2-x1),2) + pow((y2-y1),2)) 
	세 점 거리 계산 공식 : sqrt(pow((x2-x1),2) + pow((y2-y1),2) + pow((z2-z1),2))
	ex> 입력 x1, y1 : 1.5 -3.4
		입력 x2, y2 : 4 5
		두 점 사이의 거리는 : 8.7641
*/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
	float x1, x2, y1, y2;
	cout << "입력 x1, y1 : "; cin >> x1 >> y1;
	cin.ignore(32767, '\n');
	cout << "입력 x2, y2 : "; cin >> x2 >> y2;
	float L = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	cout << "두 점 사이의 거리는 : " << L << endl;
}
