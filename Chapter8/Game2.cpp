/*
	문제2
	두 개의 원에 대해 중심점 좌표와 반지름을 입력받아
	두 번째 원이 첫 번째 원의 내부에 있는지, 첫 번째 원과 겹치는지를 결정하는 프로그램 작성.

	ex> 첫 번째 원 x, y, r : 0.5 5.1 13
		두 번째 원 x, y, r : 1 1.7 4.5
		두 번째 원은 첫 번째 원 내부에 있다.
*/

#include <iostream>
#include <math.h>

using namespace std;

struct Circle {
	float x;
	float y;
	float r;
};

void check(struct Circle c1, struct Circle c2);

int main() {
	Circle c1, c2;

	cout << "첫 번째 원 x, y, r : ";
	cin >> c1.x >> c1.y >> c1.r;
	cout << "두 번째 원 x, y, r : ";
	cin >> c2.x >> c2.y >> c2.r;

	check(c1, c2);
	return 0;
}

void check(struct Circle c1, struct Circle c2) {
	float distance;

	distance = sqrt(pow(c1.x - c2.x, 2) + pow(c1.y - c2.y, 2));
	if (abs(c1.r + c2.r) < distance) // 만나지 않음
		cout << "두 원은 서로 밖에 있고 만나지 않는다." << endl;
	else if (abs(c1.r + c2.r) == distance) // 외접
		cout << "두 원은 외접한다." << endl;
	else if (abs(c1.r - c2.r) < distance && abs(c1.r + c2.r) > distance) // 겹침
		cout << "두 원은 서로 다른 두점에서 만난다." << endl;
	else if (abs(c1.r - c2.r) == distance) // 내접
		cout << "두 원은 내접한다." << endl;
	else if (abs(c1.r - c2.r) > distance) // 내부에 있다.
		cout << "두 번째 원은 첫번째 원 내부에 있다." << endl;
}