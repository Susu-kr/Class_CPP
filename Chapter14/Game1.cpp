#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> v;

int Solution(int L);

int main() {
	int L, N;
	cin >> L >> N;
	for (int i = 0; i < N; i++) {
		int t;
		cin >> t;
		v.push_back(t);
	}
	sort(v.begin(), v.end());
	cout << Solution(L) << endl;
	return 0;
}

int Solution(int L) {
	int D = 0;
	for (int i = 0; i < v.size()-1; i++) {
		if (D < v[i + 1] - v[i]) D = v[i + 1] - v[i]; // 두 가로등 사이의 거리의 최대값 구하기
	}
	if (D % 2 == 1) D = (D / 2) + 1;
	else D /= 2;
	return D;
}