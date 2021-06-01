#include <iostream>
#include "MyPoint.h"
using namespace std;

int main() {
	MyPoint p1(0, 0);
	MyPoint p2(10, 30.5);

	cout << "(0, 0) , (10, 30.5) ������ �Ÿ� : " << p1.distance(p2) << endl;

	Circle2D C(3, 3, 5);
	Rectangle2D R(1, 1, 3, 4);
	MyPoint p3(3, 4);

	if (p3.isIn(C)) cout << "(3, 4)�� �� �ȿ� �ֽ��ϴ�" << endl;
	else cout << "(3, 4)�� �� �ۿ� �ֽ��ϴ�" << endl;
	if(p3.isIn(R)) cout << "(3, 4)�� �簢�� �ȿ� �ֽ��ϴ�" << endl;
	else cout << "(3, 4)�� �簢�� �ۿ� �ֽ��ϴ�" << endl;
	return 0;
}