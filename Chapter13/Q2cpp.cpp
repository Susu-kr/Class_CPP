/*
	����
	GeometricObject ���̽� Ŭ������ �����϶�.
	Circle2D, Rectangle2D, MyPoint, Triangle2D Ŭ�������� ����� ��ҷ� �߻� Ŭ���� GeometricObject �� �����,
	�̸� ��� ���� ���·� Ŭ������ ������ �϶�.
	��ġ, ���� ���ϱ� ���� �Լ��� �����Լ��� �����϶�.
	�� Ŭ������ ���� �ڵ忡 ���� ���Ѽ� �� �۵��ϴ��� �׽�Ʈ �϶�.
	UML Ŭ���� ���̾� �׷��� �ۼ�
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
	cout << "Circle2D : "<< C.getX_pos() << ", " << C.getY_pos() << ", " << C.getRadius() << ", ���� : " << C.getArea() << ", �ѷ� : " << C.getPerimeter() << endl;
	cout << "Circle2D : " << C2.getX_pos() << ", " << C2.getY_pos() << ", " << C2.getRadius() << ", ���� : " << C2.getArea() << ", �ѷ� : " << C2.getPerimeter() << endl;

	cout << "Rectangle2D : " << R.getX_pos() << ", " << R.getY_pos() << ", " << R.getWidth() << ", " 
		<< R.getHeight() << ", ���� : " << R.getArea() << ", �ѷ� : " << R.getPerimeter() << endl;
	MyPoint p1(0, 0);
	MyPoint p2(10, 30.5);
	cout << "(0, 0) , (10, 30.5) ������ �Ÿ� : " << p1.distance(p2) << endl;
	MyPoint p3(3, 4);
	if (p3.isIn(C)) cout << "(3, 4)�� �� �ȿ� �ֽ��ϴ�" << endl;
	else cout << "(3, 4)�� �� �ۿ� �ֽ��ϴ�" << endl;
	if (p3.isIn(R)) cout << "(3, 4)�� �簢�� �ȿ� �ֽ��ϴ�" << endl;
	else cout << "(3, 4)�� �簢�� �ۿ� �ֽ��ϴ�" << endl;
	return 0;
}