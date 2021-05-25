/*
	문제3.
	동전을 백만 번 던지는 것을 시뮬레이션하고
	앞면과 뒷면의 수를 출력하는 프로그램을 작성하라..
	각 앞뒤가 몇 %씩 나오는지 계산해 출력하라
	ex>
		100번째 일때.. 앞면 00% 뒷면 00%
		1000번째 일때.. 앞면 00% 뒷면 00%
		10000번째 일때.. 앞면 00% 뒷면 00%
		...
		100000번째 일때.. 앞면 00% 뒷면 00%
		1000000번째 일때.. 앞면 00% 뒷면 00%

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
			cout << cnt << "번째 일때.. 앞면 " << (front * 100) / cnt << "%, 뒷면 " << (back * 100) / cnt << "%" << endl;
			t *= 10;
		}
	}

}