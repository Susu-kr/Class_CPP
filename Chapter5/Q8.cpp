#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char str[100];
	int cnt = 0;
	cout << "���� �ܾ���� �Է��Ͻʽÿ� (�������� done�� �Է�) : " << endl;
	while (1) {
		cin >> str;
		if (strcmp(str, "done") == 0) break;
		cnt++;
	}
	cout << "�� " << cnt << " �ܾ �ԷµǾ����ϴ�.";
	
	return 0;
}