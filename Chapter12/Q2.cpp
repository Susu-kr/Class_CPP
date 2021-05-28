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

	// ������ �߿���
	while (cnt <= N * N) {
		// �����ʳ����� -> �Ʒ��� ��ĭ
		if (y == N - 1) {
			v[++x][y] = cnt++;
			dir = DOWN;
		}
		// �Ʒ��ʳ����� -> ������ ��ĭ
		if (x == N - 1) {
			v[x][++y] = cnt++;
			dir = UP;
		}
		// ���ʳ����� -> ���������� ��ĭ
		if (x == 0) {
			v[x][++y] = cnt++;
			dir = DOWN;
		}
		// ���ʳ����� -> �Ʒ��� ��ĭ
		if (y == 0) {
			v[++x][y] = cnt++;
			dir = UP;
		}
		// �����
		if (dir == UP && x != 0 && y != N - 1) v[--x][++y] = cnt++;
		// ������
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