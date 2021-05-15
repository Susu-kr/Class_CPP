/*
	����2.
	�� �� (x1, y1) �� (x2, y2)�� �Է¹޾� �� ���� ������ �Ÿ��� ����ϴ� ���α׷�
	�Ÿ� ��� ���� : sqrt(pow((x2-x1),2) + pow((y2-y1),2)) 
	�� �� �Ÿ� ��� ���� : sqrt(pow((x2-x1),2) + pow((y2-y1),2) + pow((z2-z1),2))
	ex> �Է� x1, y1 : 1.5 -3.4
		�Է� x2, y2 : 4 5
		�� �� ������ �Ÿ��� : 8.7641
*/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
	float x1, x2, y1, y2;
	cout << "�Է� x1, y1 : "; cin >> x1 >> y1;
	cin.ignore(32767, '\n');
	cout << "�Է� x2, y2 : "; cin >> x2 >> y2;
	float L = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	cout << "�� �� ������ �Ÿ��� : " << L << endl;
}
