#include <iostream>
#include <string>
using namespace std;

struct TCL {
	string name;
	float diameter;
	float weight;
};

int main() {
	// 문제 7번
	TCL pizza;
	cout << "피자 회사의 이름을 입력하세요 : "; getline(cin, pizza.name);
	cout << "피자의 지름을 입력하세요 : "; cin >> pizza.diameter;
	cout << "피자의 무게를 입력하세요 : "; cin >> pizza.weight;
	cout << pizza.name << " " << pizza.diameter << " " << pizza.weight << endl;
	// 문제 8번
	TCL* p = new TCL;
	p = &pizza;
	cout << "피자의 지름을 입력하세요 : "; cin >> p->diameter;
	cin.ignore(32767, '\n');
	cout << "피자 회사의 이름을 입력하세요 : "; getline(cin, p->name);
	cout << "피자의 무게를 입력하세요 : "; cin >> p->weight;
	cout << p->diameter << " " << p->name << " " << p->weight << endl;
	delete p;
	return 0;
}