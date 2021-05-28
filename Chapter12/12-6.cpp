#include <iostream>
#include "String1.h"

using namespace std;

const int ArrSize = 10;
const int MaxLen = 81;

int main() {
	String1 name;
	cout << "�ȳ��Ͻʴϱ�? ������ ��� �ǽʴϱ�?\n >>";
	cin >> name;

	cout << name << " �� ! ������ ���� �Ӵ� " << ArrSize << "���� �Է��� �ֽʽÿ�(�������� Enter)\n";
	String1 sayings[ArrSize];
	char temp[MaxLen];
	int i;
	for (i = 0; i < ArrSize; i++) {
		cout << i + 1 << " : ";
		cin.get(temp, MaxLen);
		while (cin && cin.get() != '\n')
			continue;
		if (!cin || temp[0] == '\0') break;
		else sayings[i] = temp;
	}
	int total = i;
	if (total > 0) {
		cout << "(������ ���� �Ӵ���� �Է��ϼ̽��ϴ�.)\n";
		for (i = 0; i < total; i++)
			cout << sayings[i][0] << " : " << sayings[i] << endl;
		int shortest = 0;
		int first = 0;
		for (i = 1; i < total; i++) {
			if (sayings[i].length() < sayings[shortest].length()) shortest = i;
			if (sayings[i] < sayings[first]) first = i;
		}
		cout << "���� ª�� �Ӵ� : " << sayings[shortest] << endl;
		cout << "���������� ���� �տ� ������ �Ӵ� : " << sayings[first] << endl;
		cout << "�� ���α׷��� " << String1::HowMany() << "���� String ��ü�� ����Ͽ����ϴ�." << endl;
	}
	else cout << "�Է� ����!" << endl;
	return 0;
}