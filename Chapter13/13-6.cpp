#include <iostream>
#include "tabtenn1.h"

using namespace std;

int main() {
	TableTennisPlayer p1("Tara", "Boomdea", false);
	RatedPlayer r1(1140, "Mallory", "Duck", true);
	r1.Name();
	if (r1.HasTable()) cout << " : Ź���밡 �ִ�." << endl;
	else cout << " : Ź���밡 ����." << endl;
	p1.Name();
	if (p1.HasTable()) cout << " : Ź���밡 �ִ�." << endl;
	else cout << " : Ź���밡 ����." << endl;
	cout << "�̸� : ";
	r1.Name();
	cout << "��ŷ : " << r1.Rating() << endl;
	RatedPlayer r2(1212, p1);
	cout << "�̸� : ";
	r2.Name();
	cout << "��ŷ : " << r2.Rating() << endl;
	return 0;
}