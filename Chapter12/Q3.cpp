/*
	����
	- ������ �����ϴ� Circle2D�� �����϶�
	- ���� �߽��� ��Ÿ���� x�� y��� �� ���� double ������ �ʵ�� get ��� �Լ�
	- double ������ �ʵ� radius �� get ��� �Լ�
	- (x,y)�� (0,0) radius�� 1�� �⺻ ���� �����ϴ� �μ� ���� ������
	- ������ x, y, radius�� ���� �����ϴ� ������
	- ���� ������ ��ȯ�ϴ� getArea() ��� �Լ�
	- ���� �ѷ��� ��ȯ�ϴ� getPerimeter() ��� �Լ�
	- ������ �� (x, y)�� ������ �� ���ο� ���� ���, true�� ��ȯ�ϴ� contains(double x, double y) ��� �Լ�
	- ������ ���� ������ �� ���ο� ���� ���, true�� ��ȯ�ϴ� contains(const Circle2D & circle) ��� �Լ�
	- ������ ���� ������ ���� ��ø�Ǵ� ���, true�� ��ȯ�ϴ� overlaps(const Circle2D & circle) ��� �Լ�
	- Ŭ������ ���� UML ���̾�׷��� �׸���, Ŭ������ �����϶�.

	Circle2D��ü c1(2, 2, 5.5), c2(2, 2, 5.5), c3(4, 5, 10.5)�� �����ϰ�
	c1�� ������ �ѷ�
	c1.contains(3,3), c1.contains(c2), c1.overlaps(c3)�� ����� ȭ�鿡 ����ϴ� �׽�Ʈ ���α׷��� �ۼ��϶�.
*/

#include <iostream>
#include "Circle2D.h"

using namespace std;

int main() {
	Circle2D c1(2, 2, 5.5);
	Circle2D c2(2, 2, 5.5);
	Circle2D c3(4, 5, 10.5);
	cout << "c1�� ���� : " << c1.getArea() << ", �ѷ� : " << c1.getPerimeter() << endl;
	if (c1.contains(3, 3)) cout << "��(3,3)�� c1 ���ο� �����Ѵ�" << endl;
	else cout << "��(3,3)�� c1 �ܺο� �����Ѵ�" << endl;
	if (c1.contains(c2)) cout << "c2�� c1 ���ο� �����Ѵ�" << endl;
	else cout << "c2�� c1 �ܺο� �����Ѵ�" << endl;
	if (c1.contains(c3)) cout << "c3�� c1 ���ο� �����Ѵ�" << endl;
	else cout << "c3�� c1 �ܺο� �����Ѵ�" << endl;
	if (c1.overlaps(c3)) cout << "�� ���� ��ģ��" << endl;
	else cout << "�� ���� ��ġ�� �ʴ´�" << endl;
	return 0;
}