/*
	����3.
	������ �鸸 �� ������ ���� �ùķ��̼��ϰ�
	�ո�� �޸��� ���� ����ϴ� ���α׷��� �ۼ��϶�..
	�� �յڰ� �� %�� �������� ����� ����϶�
	ex>
		100��° �϶�.. �ո� 00% �޸� 00%
		1000��° �϶�.. �ո� 00% �޸� 00%
		10000��° �϶�.. �ո� 00% �޸� 00%
		...
		100000��° �϶�.. �ո� 00% �޸� 00%
		1000000��° �϶�.. �ո� 00% �޸� 00%

*/

#include <iostream>
#include <time.h>

using namespace std;

int main() {
	srand((unsigned)time(NULL));
	int front = 0, back = 0;
	int cnt = 0, t = 10;
	while (cnt <= 1000000) {
		if (rand() % 2 == 0) front++;
		else back++;
		cnt++;
		if (cnt % t == 0) {
			cout << cnt << "��° �϶�.. �ո� " << (front * 100) / cnt << "%, �޸� " << (back * 100) / cnt << "%" << endl;
			t *= 10;
		}
	}

}