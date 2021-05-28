/*
	문제
	다음을 포함하는 Rectangle2D 클래스를 정의하라.
	- 직사각형의 중심을 나타내는 x, y라는 두 개의 double 데이터 필드 이에 대한 get, set 함수
	사각형의 변은 x축과 y축에 평행인 것으로 가정한다.
	- double 데이터필드 width와 height, 이에 대한 get, set 함수
	- (x, y)는 (0, 0), width와 height는 모두 1인 기본 직사각형을 생성하는 인수 없는 생성자
	- 지정된 x, y, width, height로 직사각형을 생성하는 생성자
	- 직사각형의 면적을 반환하는 getArea() 상수 함수
	- 직사각형의 둘레를 반환하는 getPerimeter() 상수 함수
	- 지정된 점(x, y)가 생성된 직사각형 내부에 있을 경우, true를 반환하는 contains(double x, double y) 상수 함수
	- 지정된 직사각형이 생성된 직사각형 내부에 있을 경우, true를 반환하는 contains(const Rectangle2D & R) 상수 함수
	- 지정된 직사각형이 생성된 직사각형과 중첩되는 경우, true를 반환하는 overlaps(const Rectangle2D & R) 상수 함수
	- 클래스에 대한 UML 다이어그램을 그리고, 클래스를 구현하라
	세 개의 r1(2, 2, 5.5, 4.9), r2(5, 5, 10.5, 3.2), r3(3, 5, 2.3, 5.4)를 생성
	r1의 면적과 둘레 출력
	r1.contains(3, 3), r1.contains(r2), r1.overlaps(r3)의 결과 출력
*/

#include <iostream>
#include "Rectangle2D.h"

using namespace std;

int main() {
	Rectangle2D r1;
	r1.setX_pos(2);
	r1.setY_pos(2);
	r1.setWidth(5.5);
	r1.setHeight(4.9);
	Rectangle2D r2(5, 5, 10.5, 3.2);
	Rectangle2D r3(3, 5, 2.3, 5.4);

	cout << "R1의 면적 : " << r1.getArea() << ", 둘레 : " << r1.getPerimeter() << endl;

	if (r1.contains(3, 3)) cout << "점(3, 3)은 r1 내부에 존재한다." << endl;
	else cout << "점(3, 3)은 r1 내부에 존재하지 않는다." << endl;
	if (r2.contains(3, 3)) cout << "점(3, 3)은 r2 내부에 존재한다." << endl;
	else cout << "점(3, 3)은 r2 내부에 존재하지 않는다." << endl;
	if (r3.contains(3, 3)) cout << "점(3, 3)은 r3 내부에 존재한다." << endl;
	else cout << "점(3, 3)은 r3 내부에 존재하지 않는다." << endl;
	if (r1.contains(r2)) cout << "r2는 r1 내부에 존재한다." << endl;
	else cout << "r2는 r1 내부에 존재하지 않는다." << endl;
	if (r1.contains(r3)) cout << "r3은 r1 내부에 존재한다." << endl;
	else cout << "r3은 r1 내부에 존재하지 않는다." << endl;
	if (r2.contains(r3)) cout << "r3은 r2 내부에 존재한다." << endl;
	else cout << "r3은 r2 내부에 존재하지 않는다." << endl;
	if (r1.overlaps(r3)) cout << "두 사각형은 중첩한다." << endl;
	else cout << "두 사각형은 중첩하지 않는다." << endl;
	return 0;
}