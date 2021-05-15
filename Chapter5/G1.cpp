/*
	문제1.
	비행기의 가속도 a와 이륙속도 v가 주어졌을때,
	다음 공식을 사용하여 비행기가 이륙하기 위한 최소 활주 길이를 계산
	길이 = v^2 / 2a
	사용자에게 m/s 단위로 v와 m/s^2 단위로 a를 입력받고, 최소 활주 길이를 출력하는 프로그램 작성

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
	// 길이 = V^2 / 2A   => V = ?m/s  A = ?m/s^2
	return pow(V, 2) / (2 * A);
}