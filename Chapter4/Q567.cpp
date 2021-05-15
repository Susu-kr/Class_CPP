#include <iostream>
#include <string>
using namespace std;

struct CandyBar {
	string name;
	float weight;
	int cal;
};

int main() {
	// 문제 5
	CandyBar snack = { "Mocha Munch", 2.3, 350 };
	cout << snack.name << " " << snack.weight << " " << snack.cal << endl;

	// 문제 6
	CandyBar s[3];
	for (int i = 0; i < 3; i++) {
		cout << "상표를 입력하세요 : "; getline(cin,s[i].name);
		cout << "무게를 입력하세요 : "; cin >> s[i].weight;
		cout << "칼로리를 입력하세요 : "; cin >> s[i].cal;
		cin.ignore(32767, '\n');
	}
	for (int i = 0; i < 3; i++) {
		cout << "s[" << i << "] : " << s[i].name << " " << s[i].weight << " " << s[i].cal << endl;
	}

	// 문제 9
	CandyBar* ps = new CandyBar[3];
	for (int i = 0; i < 3; i++) {
		cout << "상표를 입력하세요 : "; getline(cin, ps[i].name);
		cout << "무게를 입력하세요 : "; cin >> ps[i].weight;
		cout << "칼로리를 입력하세요 : "; cin >> ps[i].cal;
		cin.ignore(32767, '\n');
	}
	for (int i = 0; i < 3; i++) {
		cout << "ps[" << i << "] : " << ps[i].name << " " << ps[i].weight << " " << ps[i].cal << endl;
	}

	delete[] ps;
	return 0;
}