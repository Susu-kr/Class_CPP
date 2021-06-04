/*
	문제
	GeometricObject 베이스 클래스를 설계하라.
	Circle2D, Rectangle2D, MyPoint, Triangle2D 클래스에서 공통된 요소로 추상 클래스 GeometricObject 를 만들고,
	이를 상속 받은 형태로 클래스를 재정의 하라.
	위치, 넓이 구하기 등의 함수를 가상함수로 정의하라.
	각 클래스를 기존 코드에 적용 시켜서 잘 작동하는지 테스트 하라.
	UML 클래스 다이어 그램도 작성
*/

#include <iostream>
#include "GeometricObject.h"
using namespace std;

int main() {


	GeometricObject G(5, 5);
	cout << "GeometricObject : " << G.getX_pos() << ", " << G.getY_pos() << endl;
	Circle2D C(3.0, 3.0, 5.0);
	Circle2D C2(C);
	Rectangle2D R(1.0, 1.0, 3.0, 4.0);
	cout << "Circle2D : "<< C.getX_pos() << ", " << C.getY_pos() << ", " << C.getRadius() << ", 넓이 : " << C.getArea() << ", 둘레 : " << C.getPerimeter() << endl;
	cout << "Circle2D : " << C2.getX_pos() << ", " << C2.getY_pos() << ", " << C2.getRadius() << ", 넓이 : " << C2.getArea() << ", 둘레 : " << C2.getPerimeter() << endl;

	cout << "Rectangle2D : " << R.getX_pos() << ", " << R.getY_pos() << ", " << R.getWidth() << ", " 
		<< R.getHeight() << ", 넓이 : " << R.getArea() << ", 둘레 : " << R.getPerimeter() << endl;
	MyPoint p1(0, 0);
	MyPoint p2(10, 30.5);
	cout << "(0, 0) , (10, 30.5) 사이의 거리 : " << p1.distance(p2) << endl;
	MyPoint p3(3, 4);
	if (p3.isIn(C)) cout << "(3, 4)는 원 안에 있습니다" << endl;
	else cout << "(3, 4)는 원 밖에 있습니다" << endl;
	if (p3.isIn(R)) cout << "(3, 4)는 사각형 안에 있습니다" << endl;
	else cout << "(3, 4)는 사각형 밖에 있습니다" << endl;
	return 0;
}