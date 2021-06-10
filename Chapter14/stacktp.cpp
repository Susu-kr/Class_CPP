#include <iostream>
#include <string>
#include <cctype>
#include "stacktp.h"

using namespace std;

int main() {
	Stack<string> st;
	char ch;
	string po;
	cout << "�ֹ����� �߰��Ϸ��� A, �ֹ����� ó���Ϸ��� P\n�����Ͻ÷��� Q�� �Է��ϼ���.\n";
	while (cin >> ch && toupper(ch) != 'Q') {
		while (cin.get() != '\n')
			continue;
		if (!isalpha(ch)) {
			cout << "\a";
			continue;
		}
		switch (ch)
		{
		case 'A':
		case 'a':
			cout << "�߰��� �ֹ����� ��ȣ�� �Է��Ͻʽÿ� : ";
			cin >> po;
			if (st.isFull())
				cout << "������ ���� �� �ֽ��ϴ�.\n";
			else st.push(po);
			break;
		case 'P':
		case 'p':
			if (st.isEmpty()) cout << "������ ��� �ֽ��ϴ�.\n";
			else {
				st.pop(po);
				cout << "#" << po << " �ֹ����� ó���߽��ϴ�.\n";
			}
			break;
		default:
			break;
		}
		cout << "�ֹ����� �߰��Ϸ��� A, �ֹ����� ó���Ϸ��� P\n�����Ͻ÷��� Q�� �Է��ϼ���.\n";
	}
	cout << "���α׷��� �����մϴ�.\n";
	return 0;
}