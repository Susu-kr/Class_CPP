/*
	�ϳ����� ž
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> cnt(4); // cnt(���Ǽ� + 1) : �� �ڸ��� ��տ� ���� ���� ���� �ǹ���
void Move(vector<vector<int>> & v, int n, int b);
void Print(vector<vector<int>> v);
void hanoi(int n, int a, int b, vector<vector<int>> & v);

int main() {
	int num;
	cout << "���� ������ �Է� (exit : 0) : ";
	cin >> num;
	if (num == 0) return 0;
	vector<vector<int>> v(num+1, vector<int>(4, 0)); // 0 �ڸ��� ���� ����
	for (int i = 1; i < v.size(); i++) { // ù��° ��տ� ���� ����ŭ ���ʷ� ����
		v[i][1] = i;
	}
	cnt[1] = num; // �ش� ��տ� ���� ���� �Է�
	Print(v);
	hanoi(num, 1, 3, v);
	return 0;
}

void Move(vector<vector<int>> & v, int n, int b) {
	for (int i = 1; i < v.size(); i++) {
		for (int j = 1; j < v[i].size(); j++) {
			if (v[i][j] == n) { // �ش��ϴ� ��ȣ�� ã��
				v[i][j] = 0; // 0���� �����
				cnt[j]--; // ���Ǽ� ����
				v[v.size() - 1 - cnt[b]][b] = n; // [��տ� ���� ����][��� ��ġ] = ����
				cnt[b]++; // �ش� ��� ���Ǽ� ����
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
void hanoi(int n, int a, int b, vector<vector<int>> & v) { // ���Ǽ�, ���� ���, �̵��� ���
	int c = 6 - a - b; // c : �߰� ���
	if (n <= 1) { // �� ù��° ���� �̵�
		Move(v, n, b); // �̵��� ����, �̵��� ���
	}
	else {
		hanoi(n - 1, a, c, v);
		Move(v, n, b);
		hanoi(n - 1, c, b, v);
	}
}