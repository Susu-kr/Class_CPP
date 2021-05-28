#include <iostream>
#include <vector>

using namespace std;

int sol(int N, int r, int c);

int main() {
	int N, r, c;
	cin >> N >> r >> c;
	cout << "result : " << sol(N,r,c) << endl;
	return 0;
}

int sol(int N, int r, int c) {
	vector<vector<int>> v;
	for (int i = 0; i < N; i++) {
		vector<int> t(N);
		v.push_back(t);
	}
	int x = -1, y = 0, cnt = 1;
	enum { UP, DOWN } dir;
	dir = UP;

	// 순서가 중요함
	while (cnt <= N * N) {
		// 오른쪽끝도달 -> 아래로 한칸
		if (y == N - 1) {
			v[++x][y] = cnt++;
			dir = DOWN;
		}
		// 아래쪽끝도달 -> 오른쪽 한칸
		if (x == N - 1) {
			v[x][++y] = cnt++;
			dir = UP;
		}
		// 위쪽끝도달 -> 오른쪽으로 한칸
		if (x == 0) {
			v[x][++y] = cnt++;
			dir = DOWN;
		}
		// 왼쪽끝도달 -> 아래로 한칸
		if (y == 0) {
			v[++x][y] = cnt++;
			dir = UP;
		}
		// 우상향
		if (dir == UP && x != 0 && y != N - 1) v[--x][++y] = cnt++;
		// 좌하향
		if (dir == DOWN && x != N - 1 && y != 0) v[++x][--y] = cnt++;
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << v[i][j] << "\t";
		}
		cout << endl;
	}
	return v[r - 1][c - 1];
}