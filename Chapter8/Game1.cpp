/*
	����1.
	�� ���簢���� ���� �߽����� x��ǥ, y��ǥ ��, �� , ���̸� �Է¹޾�
	�� ��° ���簢���� ù ��° ���簢���� ���ο� �ִ���,
	ù ��° ���簢���� ��ġ������ �����ϴ� ���α׷��� �ۼ��϶�.

	ex>
	ù��° �簢�� x, y, width, height �Է� : 2.5 4 2.5 43
	�ι�° �簢�� x, y, width, height �Է� : 1.5 5 0.5 3
	�ι�° �簢���� ù��° �簢���� ���ο� �ִ�.
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
	cout << "ù��° �簢�� x, y, width, height �Է� : ";
	cin >> r[0].x >> r[0].y >> r[0].w >> r[0].h;
	cout << "�ι�° �簢�� x, y, width, height �Է� : ";
	cin >> r[1].x >> r[1].y >> r[1].w >> r[1].h;

	check(r[0], r[1]);
	return 0;
}

void check(struct Rect r1, struct Rect r2) {

	if (r1.w > r2.w && r1.h > r2.h) { // r1 ���ο� r2 or �ܺ�
		if (abs(r1.x - r2.x) < r1.w - r2.w && abs(r1.y - r2.y) < r1.h - r2.h)
			cout << "�� ��° �簢���� ù ��° �簢�� ���ο� �ִ�." << endl;
		else if (abs(r1.x - r2.x) > r1.w || abs(r1.y - r2.y) > r1.h)
			cout << "���� ��ġ�� �ʰ� �ܺο� �����Ѵ�." << endl;
		else cout << "�� �簢���� ��ģ��." << endl;
	}
	else if (r1.w < r2.w && r1.h < r2.h) { // r2 ���ο� r1 or �ܺ�
		if (abs(r2.x - r1.x) < r2.w - r1.w && abs(r2.y - r1.y) < r2.h - r1.h)
			cout << "ù ��° �簢���� �� ��° �簢�� ���ο� �ִ�." << endl;
		else if (abs(r2.x - r1.x) > r2.w || abs(r2.y - r1.y) > r2.h)
			cout << "���� ��ġ�� �ʰ� �ܺο� �����Ѵ�." << endl;
		else cout << "�� �簢���� ��ģ��." << endl;
	}
	else {
		if (abs(r1.x - r2.x) > max(r1.w, r2.w) || abs(r1.h - r2.h) > max(r1.h, r2.h))
			cout << "���� ��ġ�� �ʰ� �ܺο� �����Ѵ�." << endl;
		else
			cout << "�� �簢���� ��ģ��." << endl;
	}
}

float max(float a, float b) {
	return a > b ? a : b;
}