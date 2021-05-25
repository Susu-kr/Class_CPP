/*
	����2
	�� ���� ���� ���� �߽��� ��ǥ�� �������� �Է¹޾�
	�� ��° ���� ù ��° ���� ���ο� �ִ���, ù ��° ���� ��ġ������ �����ϴ� ���α׷� �ۼ�.

	ex> ù ��° �� x, y, r : 0.5 5.1 13
		�� ��° �� x, y, r : 1 1.7 4.5
		�� ��° ���� ù ��° �� ���ο� �ִ�.
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

	cout << "ù ��° �� x, y, r : ";
	cin >> c1.x >> c1.y >> c1.r;
	cout << "�� ��° �� x, y, r : ";
	cin >> c2.x >> c2.y >> c2.r;

	check(c1, c2);
	return 0;
}

void check(struct Circle c1, struct Circle c2) {
	float distance;

	distance = sqrt(pow(c1.x - c2.x, 2) + pow(c1.y - c2.y, 2));
	if (abs(c1.r + c2.r) < distance) // ������ ����
		cout << "�� ���� ���� �ۿ� �ְ� ������ �ʴ´�." << endl;
	else if (abs(c1.r + c2.r) == distance) // ����
		cout << "�� ���� �����Ѵ�." << endl;
	else if (abs(c1.r - c2.r) < distance && abs(c1.r + c2.r) > distance) // ��ħ
		cout << "�� ���� ���� �ٸ� �������� ������." << endl;
	else if (abs(c1.r - c2.r) == distance) // ����
		cout << "�� ���� �����Ѵ�." << endl;
	else if (abs(c1.r - c2.r) > distance) // ���ο� �ִ�.
		cout << "�� ��° ���� ù��° �� ���ο� �ִ�." << endl;
}