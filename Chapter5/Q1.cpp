/*
	����1. ���ڿ��� �տ��� ���� ������ �ڿ������� ������ ������ ��츦 Palindrome �̶�� �Ѵ�.
	���ڿ��� �Է¹޾� ȸ������ �Ǵ��ϰ� ����� ����ϴ� ���α׷��� �ۼ��϶�.
	ex > "mom" -> ȸ��
		"stats" -> ȸ��
		"noon" -> ȸ��
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	string str, temp = "";
	cout << "���ڿ��� �Է��ϼ��� : "; getline(cin, str);
	for (int i = str.size()-1; i >= 0; i--) {
		temp += str[i];
	}
	cout << str << " " << temp << endl;
	if (str == temp) cout << "ȸ���̴�." << endl;
	else cout << "ȸ���� �ƴϴ�." << endl;
	return 0;
}