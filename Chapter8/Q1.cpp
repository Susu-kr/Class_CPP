#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int x, y, rad, p_x, p_y;
	cout << "원의 중심 : ";
	cin >> x >> y;
	cout << "원의 반지름 : ";
	cin >> rad;
	cout << "점 위치 : ";
	cin >> p_x >> p_y;
	if (sqrt(pow(p_x - x, 2) + pow(p_y - y, 2)) < rad)
		cout << "점 (" << p_x << ", " << p_y << ")는 원 내부에 있다.";
	else
		cout << "점 (" << p_x << ", " << p_y << ")는 원 외부에 있다.";

	return 0;
}