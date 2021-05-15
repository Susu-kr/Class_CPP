/*
	문제3
	삼각형의 3개의 점 (x1, y1), (x2, y2), (x3, y3)을 입력하여 면적을 구하는 프로그램
	s = (side1 + side2 + side3) / 2;
	면적 = root(s(s-side1)(s-side2)(s-side3))
	ex> 세점 입력 : 1.5 -3.4 4.6 5 9.5 -3.4
		삼각형 면적 : 33.6
*/

#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

double Area(struct point t[]);

struct point {
	double x;
	double y;
};

int main() {
	point T[3];
	cout << "삼각형의 면적 : " << Area(T);
	return 0;
}

double Area(struct point t[]) {
	for (int i = 0; i < 3; i++) {
		cout << "x" << i + 1 << ", y" << i + 1 << ": ";
		cin >> t[i].x >> t[i].y;
	}
	vector<double> S;
	S.push_back(sqrt(pow((t[1].x - t[0].x), 2) + pow((t[1].y - t[0].y), 2)));
	S.push_back(sqrt(pow((t[2].x - t[0].x), 2) + pow((t[2].y - t[0].y), 2)));
	S.push_back(sqrt(pow((t[2].x - t[1].x), 2) + pow((t[2].y - t[1].y), 2)));

	double Side = (S[0] + S[1] + S[2]) / 2;

	return sqrt(Side*(Side - S[0])*(Side - S[1])*(Side - S[2]));
}