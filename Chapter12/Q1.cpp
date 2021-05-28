#include <iostream>
#include <string>
#include <vector>
#include <time.h>

using namespace std;

int Game(string s, vector<char> v);

int main() {
	srand((unsigned)time(NULL));
	string s_arr[5] = { "apple", "banana", "orange", "strawberry", "mango" };
	int a[5]{};
	int cnt = 0;
	while (1) {
		string s;
		while (1) {
			int t = rand() % 5;
			if (a[t] == 0) {
				s = s_arr[t];
				a[t] = 1;
				break;
			}
		}
		vector<char> v1;
		for (int i = 0; i < s.size(); i++) {
			v1.push_back('*');
		}
		int i = Game(s, v1);
		if (i == 0) break;
		cin.ignore('2', '\n');
		cnt++;
		if (cnt == 5) break;
	}
	return 0;
}

int Game(string s, vector<char> v) {
	int cnt = 0, correct = 0, fail = 0;
	char c;
	while (correct != s.size()) {
		bool chk = false;
		cnt++;
		cout << "�ܾ� �� �� ���ڸ� �Է��Ͻÿ�. : ";
		for (int i = 0; i < v.size(); i++) {
			cout << v[i];
		}
		cout << " > ";
		cin >> c;
		cout << "\t\t\t\t";
		for (int i = 0; i < v.size(); i++) {
			if (c == s[i]) {
				v[i] = c;
				correct++;
				chk = true;
			}
			cout << v[i];
		}
		if (!chk) fail++;
		cout << endl;
	}
	cout << "�� " << fail << "�� ����, " << cnt << "�� ���� ����!" << s << endl;
	cout << "�ٸ� �ܾ�� ��� �Ϸ��� 'R' Ű�� �����ּ��� : ";
	cin >> c;
	if (c == 'R') return 1;
	else return 0;
}