#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int x, y, rad, p_x, p_y;
	cout << "���� �߽� : ";
	cin >> x >> y;
	cout << "���� ������ : ";
	cin >> rad;
	cout << "�� ��ġ : ";
	cin >> p_x >> p_y;
	if (sqrt(pow(p_x - x, 2) + pow(p_y - y, 2)) < rad)
		cout << "�� (" << p_x << ", " << p_y << ")�� �� ���ο� �ִ�.";
	else
		cout << "�� (" << p_x << ", " << p_y << ")�� �� �ܺο� �ִ�.";

	return 0;
}