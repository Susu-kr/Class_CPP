#include <iostream>
#include <string>
using namespace std;

struct TCL {
	string name;
	float diameter;
	float weight;
};

int main() {
	// ���� 7��
	TCL pizza;
	cout << "���� ȸ���� �̸��� �Է��ϼ��� : "; getline(cin, pizza.name);
	cout << "������ ������ �Է��ϼ��� : "; cin >> pizza.diameter;
	cout << "������ ���Ը� �Է��ϼ��� : "; cin >> pizza.weight;
	cout << pizza.name << " " << pizza.diameter << " " << pizza.weight << endl;
	// ���� 8��
	TCL* p = new TCL;
	p = &pizza;
	cout << "������ ������ �Է��ϼ��� : "; cin >> p->diameter;
	cin.ignore(32767, '\n');
	cout << "���� ȸ���� �̸��� �Է��ϼ��� : "; getline(cin, p->name);
	cout << "������ ���Ը� �Է��ϼ��� : "; cin >> p->weight;
	cout << p->diameter << " " << p->name << " " << p->weight << endl;
	delete p;
	return 0;
}