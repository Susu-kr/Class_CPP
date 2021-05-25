/*
	문제1.
	두 직사각형에 대해 중심점의 x좌표, y좌표 값, 폭 , 높이를 입력받아
	두 번째 직사각형이 첫 번째 직사각형의 내부에 있는지,
	첫 번째 직사각형과 겹치는지를 결정하는 프로그램을 작성하라.

	ex>
	첫번째 사각형 x, y, width, height 입력 : 2.5 4 2.5 43
	두번째 사각형 x, y, width, height 입력 : 1.5 5 0.5 3
	두번째 사각형은 첫번째 사각형의 내부에 있다.
*/

#include <iostream>
#include <math.h>
using namespace std;

struct Rect {
	float x;
	float y;
	float w;
	float h;
};

float max(float a, float b);
void check(struct Rect r1, struct Rect r2);

int main() {

	Rect r[2];
	cout << "첫번째 사각형 x, y, width, height 입력 : ";
	cin >> r[0].x >> r[0].y >> r[0].w >> r[0].h;
	cout << "두번째 사각형 x, y, width, height 입력 : ";
	cin >> r[1].x >> r[1].y >> r[1].w >> r[1].h;

	check(r[0], r[1]);
	return 0;
}

void check(struct Rect r1, struct Rect r2) {

	if (r1.w > r2.w && r1.h > r2.h) { // r1 내부에 r2 or 외부
		if (abs(r1.x - r2.x) < r1.w - r2.w && abs(r1.y - r2.y) < r1.h - r2.h)
			cout << "두 번째 사각형은 첫 번째 사각형 내부에 있다." << endl;
		else if (abs(r1.x - r2.x) > r1.w || abs(r1.y - r2.y) > r1.h)
			cout << "서로 겹치지 않고 외부에 존재한다." << endl;
		else cout << "두 사각형이 겹친다." << endl;
	}
	else if (r1.w < r2.w && r1.h < r2.h) { // r2 내부에 r1 or 외부
		if (abs(r2.x - r1.x) < r2.w - r1.w && abs(r2.y - r1.y) < r2.h - r1.h)
			cout << "첫 번째 사각형은 두 번째 사각형 내부에 있다." << endl;
		else if (abs(r2.x - r1.x) > r2.w || abs(r2.y - r1.y) > r2.h)
			cout << "서로 겹치지 않고 외부에 존재한다." << endl;
		else cout << "두 사각형이 겹친다." << endl;
	}
	else {
		if (abs(r1.x - r2.x) > max(r1.w, r2.w) || abs(r1.h - r2.h) > max(r1.h, r2.h))
			cout << "서로 겹치지 않고 외부에 존재한다." << endl;
		else
			cout << "두 사각형이 겹친다." << endl;
	}
}

float max(float a, float b) {
	return a > b ? a : b;
}