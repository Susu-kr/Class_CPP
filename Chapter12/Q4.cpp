/*
	����
	������ �����ϴ� Rectangle2D Ŭ������ �����϶�.
	- ���簢���� �߽��� ��Ÿ���� x, y��� �� ���� double ������ �ʵ� �̿� ���� get, set �Լ�
	�簢���� ���� x��� y�࿡ ������ ������ �����Ѵ�.
	- double �������ʵ� width�� height, �̿� ���� get, set �Լ�
	- (x, y)�� (0, 0), width�� height�� ��� 1�� �⺻ ���簢���� �����ϴ� �μ� ���� ������
	- ������ x, y, width, height�� ���簢���� �����ϴ� ������
	- ���簢���� ������ ��ȯ�ϴ� getArea() ��� �Լ�
	- ���簢���� �ѷ��� ��ȯ�ϴ� getPerimeter() ��� �Լ�
	- ������ ��(x, y)�� ������ ���簢�� ���ο� ���� ���, true�� ��ȯ�ϴ� contains(double x, double y) ��� �Լ�
	- ������ ���簢���� ������ ���簢�� ���ο� ���� ���, true�� ��ȯ�ϴ� contains(const Rectangle2D & R) ��� �Լ�
	- ������ ���簢���� ������ ���簢���� ��ø�Ǵ� ���, true�� ��ȯ�ϴ� overlaps(const Rectangle2D & R) ��� �Լ�
	- Ŭ������ ���� UML ���̾�׷��� �׸���, Ŭ������ �����϶�
	�� ���� r1(2, 2, 5.5, 4.9), r2(5, 5, 10.5, 3.2), r3(3, 5, 2.3, 5.4)�� ����
	r1�� ������ �ѷ� ���
	r1.contains(3, 3), r1.contains(r2), r1.overlaps(r3)�� ��� ���
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

	cout << "R1�� ���� : " << r1.getArea() << ", �ѷ� : " << r1.getPerimeter() << endl;

	if (r1.contains(3, 3)) cout << "��(3, 3)�� r1 ���ο� �����Ѵ�." << endl;
	else cout << "��(3, 3)�� r1 ���ο� �������� �ʴ´�." << endl;
	if (r2.contains(3, 3)) cout << "��(3, 3)�� r2 ���ο� �����Ѵ�." << endl;
	else cout << "��(3, 3)�� r2 ���ο� �������� �ʴ´�." << endl;
	if (r3.contains(3, 3)) cout << "��(3, 3)�� r3 ���ο� �����Ѵ�." << endl;
	else cout << "��(3, 3)�� r3 ���ο� �������� �ʴ´�." << endl;
	if (r1.contains(r2)) cout << "r2�� r1 ���ο� �����Ѵ�." << endl;
	else cout << "r2�� r1 ���ο� �������� �ʴ´�." << endl;
	if (r1.contains(r3)) cout << "r3�� r1 ���ο� �����Ѵ�." << endl;
	else cout << "r3�� r1 ���ο� �������� �ʴ´�." << endl;
	if (r2.contains(r3)) cout << "r3�� r2 ���ο� �����Ѵ�." << endl;
	else cout << "r3�� r2 ���ο� �������� �ʴ´�." << endl;
	if (r1.overlaps(r3)) cout << "�� �簢���� ��ø�Ѵ�." << endl;
	else cout << "�� �簢���� ��ø���� �ʴ´�." << endl;
	return 0;
}