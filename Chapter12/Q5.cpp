/*
	하노이의 탑
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> cnt(4); // cnt(원판수 + 1) : 각 자리는 기둥에 꽂힌 원판 수를 의미함
void Move(vector<vector<int>> & v, int n, int b);
void Print(vector<vector<int>> v);
void hanoi(int n, int a, int b, vector<vector<int>> & v);

int main() {
	int num;
	cout << "원반 갯수를 입력 (exit : 0) : ";
	cin >> num;
	if (num == 0) return 0;
	vector<vector<int>> v(num+1, vector<int>(4, 0)); // 0 자리는 쓰지 않음
	for (int i = 1; i < v.size(); i++) { // 첫번째 기둥에 원판 수만큼 차례로 쌓음
		v[i][1] = i;
	}
	cnt[1] = num; // 해당 기둥에 쌓인 원판 입력
	Print(v);
	hanoi(num, 1, 3, v);
	return 0;
}

void Move(vector<vector<int>> & v, int n, int b) {
	for (int i = 1; i < v.size(); i++) {
		for (int j = 1; j < v[i].size(); j++) {
			if (v[i][j] == n) { // 해당하는 번호를 찾음
				v[i][j] = 0; // 0으로 만들고
				cnt[j]--; // 원판수 감소
				v[v.size() - 1 - cnt[b]][b] = n; // [기둥에 꽃힌 갯수][기둥 위치] = 원판
				cnt[b]++; // 해당 기둥 원판수 증가
			}
		}
	}
	Print(v);
}

void Print(vector<vector<int>> v) {
	for (int i = 1; i < v.size(); i++) {
		for (int j = 1; j < v[i].size(); j++) {
			if (v[i][j] == 0) cout << "[   ]\t";
			else cout << "[ " << v[i][j] << " ]\t";
		}
		cout << endl;
	}
	cout << "[ A ]\t[ B ]\t[ C ]" << endl;
	cout << "----------------------" << endl;
}
void hanoi(int n, int a, int b, vector<vector<int>> & v) { // 원판수, 시작 기둥, 이동할 기둥
	int c = 6 - a - b; // c : 중간 기둥
	if (n <= 1) { // 맨 첫번째 원판 이동
		Move(v, n, b); // 이동할 원판, 이동할 기둥
	}
	else {
		hanoi(n - 1, a, c, v);
		Move(v, n, b);
		hanoi(n - 1, c, b, v);
	}
}