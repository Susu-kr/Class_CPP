#include "Worker0.h"
#include <iostream>
using namespace std;

Worker0::~Worker0(){ }

void Worker0::Set()
{
	cout << "��� �̸��� �Է��Ͻʽÿ� : ";
	getline(cin, fullname);
	cout << "��� ��ȣ�� �Է��Ͻʽÿ� : ";
	cin >> id;
	while (cin.get() != '\n')
		continue;
}

void Worker0::Show() const
{
	cout << "��� �̸� : " << fullname << endl;
	cout << "��� ��ȣ : " << id << endl;
}

void Waiter::Set()
{
	Worker0::Set();
	cout << "������ ����� �Է��Ͻʽÿ� : ";
	cin >> panache;
	while (cin.get() != '\n')
		continue;
}

void Waiter::Show() const
{
	cout << "���� : ������\n";
	Worker0::Show();
	cout << "������ ��� : " << panache << endl;
}

const char *Singer::pv[] = { "other", "alto", "contralto", "soprano", "bass", "baritone", "tenor" };

void Singer::Set()
{
	Worker0::Set();
	cout << "������ ��Ҹ� ���� ��ȣ�� �Է��Ͻʽÿ� ::\n";
	int i;
	for (i = 0; i < Vtypes; i++) {
		cout << i << ": " << pv[i] << " ";
		if (i % 4 == 3) cout << endl;
	}
	if (i % 4 != 0)cout << endl;
	while (cin >> voice && (voice < 0 || voice >= Vtypes))
		cout << "0���� ũ�ų� ���� " << Vtypes << "���� ���� ���� �Է��Ͻÿ�." << endl;
	while (cin.get() != '\n')
		continue;
}

void Singer::Show() const
{
	cout << "���� : ����\n";
	Worker0::Show();
	cout << "��Ҹ� ���� : " << pv[voice] << endl;
}
