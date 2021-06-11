#include <iostream>
#include <vector>
#include <algorithm>
#include <time.h>
using namespace std;

vector<int> Lotto(int total, int num);
void print(int n) { cout << n << " "; }

int main() {
	srand(unsigned(time(0)));
	int cnt = 1;
	while (cnt <= 10) {
		vector<int> winners;
		winners = Lotto(45, 6);
		vector<int>::iterator it;
		cout << cnt << "회차 로또";
		if (cnt <= 3) {
			cout << "(for) : ";
			for (int i = 0; i < winners.size(); i++) {
				cout << winners[i] << " ";
			}
			cout << endl;
		}
		else if (cnt > 3 && cnt < 7) {
			cout << "(for_each) : ";
			for_each(winners.begin(), winners.end(), print);
			cout << endl;
		}
		else {
			cout << "(iterator) : ";
			for (it = winners.begin(); it != winners.end(); it++) {
				cout << *it << " ";
			}
			cout << endl;
		}
		cnt++;
	}
	return 0;
}

vector<int> Lotto(int total, int num) {
	vector<int> L;
	for (int i = 1; i <= total; i++) {
		L.push_back(i);
	}
	random_shuffle(L.begin(), L.end());
	L.resize(num);
	sort(L.begin(), L.end());
	return L;
}