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
		cout << "�Ǹ��� �Է��ϼ��� : ";
		cin.getline(P[i].fullname, strsize);
		cout << "������ �Է��ϼ��� : ";
		cin.getline(P[i].title, strsize);
		cout << "BOP ���̵� �Է��ϼ��� : ";
		cin.getline(P[i].bopname, strsize);
		cout << "������ ������ȣ�� �Է��ϼ��� : ";
		cin >> P[i].preference;
		cin.ignore(32767, '\n');
	}
}
void selectMenu(struct bop* P) {
	cout << "Benevolent Order of Programmers" << endl;
	cout << "a. �Ǹ����� ����\t\t\t b. �������� ����" << endl;
	cout << "c. BOP ���̵�� ����\t\t\t d. ȸ���� ������ ������ ����" << endl;
	cout << "q. ����" << endl;

	char ch;
	while (1) {
		cout << "���ϴ� ���� �����Ͻʽÿ� : ";
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
			cout << "���α׷��� �����մϴ�.";
			break;
		}
		cin.ignore(32767, '\n');
	}
}