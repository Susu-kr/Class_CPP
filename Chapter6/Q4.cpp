#include <iostream>

using namespace std;

const int strsize = 50;

struct bop{
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference; // 0 : fullname, 1 : title, 2 : bopname;
};

void inputBOP(struct bop* P);
void selectMenu(struct bop* P);

int main() {
	bop P[5]{};
	inputBOP(P);
	selectMenu(P);
	return 0;
}

void inputBOP(struct bop* P) {
	for (int i = 0; i < 5; i++) {
		cout << "실명을 입력하세요 : ";
		cin.getline(P[i].fullname, strsize);
		cout << "직함을 입력하세요 : ";
		cin.getline(P[i].title, strsize);
		cout << "BOP 아이디를 입력하세요 : ";
		cin.getline(P[i].bopname, strsize);
		cout << "지정할 열람번호를 입력하세요 : ";
		cin >> P[i].preference;
		cin.ignore(32767, '\n');
	}
}
void selectMenu(struct bop* P) {
	cout << "Benevolent Order of Programmers" << endl;
	cout << "a. 실명으로 열람\t\t\t b. 직함으로 열람" << endl;
	cout << "c. BOP 아이디로 열람\t\t\t d. 회원이 지정한 것으로 열람" << endl;
	cout << "q. 종료" << endl;

	char ch;
	while (1) {
		cout << "원하는 것을 선택하십시오 : ";
		cin.get(ch);
		if (ch == 'a') {
			for (int i = 0; i < 5; i++) {
				cout << P[i].fullname << endl;
			}
		}
		else if (ch == 'b') {
			for (int i = 0; i < 5; i++) {
				cout << P[i].title << endl;
			}
		}
		else if (ch == 'c') {
			for (int i = 0; i < 5; i++) {
				cout << P[i].bopname << endl;
			}
		}
		else if (ch == 'd') {
			for (int i = 0; i < 5; i++) {
				if (P[i].preference == 0) cout << P[i].fullname << endl;
				else if (P[i].preference == 1) cout << P[i].title << endl;
				else if (P[i].preference == 2) cout << P[i].bopname << endl;
			}
		}
		else if (ch == 'q') {
			cout << "프로그램을 종료합니다.";
			break;
		}
		cin.ignore(32767, '\n');
	}
}