#include <iostream>
#include <math.h>

using namespace std;

int main() {
	float x1, x2, y1, y2, x3, x4, y3, y4;
	float x, y;

	cout << "��1�� ����" << endl;
	cout << "��1(x1, y1) : ";
	cin >> x1 >> y1;
	cout << "��2(x2, y2) : ";
	cin >> x2 >> y2;
	cout << "��2�� ����" << endl;
	cout << "��3(x3, y3) : ";
	cin >> x3 >> y3;
	cout << "��4(x4, y4) : ";
	cin >> x4 >> y4;

	if (((x1 - x2) / (y1 - y2)) == ((x3 - x4) / (y3 - y4))) {
		cout << "�� ������ �����ϴ�" << endl;
	}
	else {
		x = ((x1 * y2 - y1 * x2) * (x3 - x4) - (x1 - x2) * (x3 * y4 - y3 * x4)) / ((x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4));
		y = ((x1 * y2 - y1 * x2) * (y3 - y4) - (y1 - y2) * (x3 * y4 - y3 * x4)) / ((x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4));
		cout << "�������� (" << x << ", " << y << ") �̴�." << endl;
	}
}