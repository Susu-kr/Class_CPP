#include <iostream>

using namespace std;

int main() {
	const int Size = 15;
	char name1[Size];
	char name2[Size] = "C++owboy";

	cout << "�ȳ��ϼ���! ���� " << name2;
	cout << "�Դϴ�! �Ƿ����� ������?" << endl;
	cin >> name1;
	cout << "��, " << name1 << " ��! ����� �̸��� ";
	cout << strlen(name1) << "���Դϴٸ�" << endl;
	cout << sizeof(name1) << "����Ʈ ũ���� �迭�� ����Ǿ����ϴ�." << endl;
	cout << "�̸��� " << name1[0] << "�ڷ� �����ϴ±���." << endl;
	name2[3] = '\0';
	cout << "�� �̸��� ó�� �� ���ڴ� ������ �����ϴ� : " << name2 << endl;

	return 0;
}