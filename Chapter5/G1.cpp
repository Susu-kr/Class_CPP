/*
	����1.
	������� ���ӵ� a�� �̷��ӵ� v�� �־�������,
	���� ������ ����Ͽ� ����Ⱑ �̷��ϱ� ���� �ּ� Ȱ�� ���̸� ���
	���� = v^2 / 2a
	����ڿ��� m/s ������ v�� m/s^2 ������ a�� �Է¹ް�, �ּ� Ȱ�� ���̸� ����ϴ� ���α׷� �ۼ�

	ex > Speed and Accelation : 60 3.5
		 Minimum runway length : 514.286
*/

#include <iostream>
#include <math.h>

using namespace std;

float Runway_Length(float V, float A);

int main() {
	float V, A;
	cout << "Speed and Accelation : "; cin >> V >> A;
	float L = Runway_Length(V, A);
	cout << "Minimum runway length : " << L << endl;
}

float Runway_Length(float V, float A) {
	// ���� = V^2 / 2A   => V = ?m/s  A = ?m/s^2
	return pow(V, 2) / (2 * A);
}