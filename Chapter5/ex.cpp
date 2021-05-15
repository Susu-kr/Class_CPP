#include <iostream>
#include <ctime>

using namespace std;

int main() {
	clock_t start = clock(); // 0;
	clock_t cur = start;
	int x = 0;
	while (1) {
		clock_t dif1 = (cur - start);
		int nCount = (cur - start) / 30;
		int dif2 = (cur - start) % 30;
		if (dif1 > 30) {
			// update();  x += nCount;
			// render();
		}
		cur = clock();

	}
}