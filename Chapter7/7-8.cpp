#include <iostream>
#include <string>
using namespace std;

const int ArrSize = 8;
int sum_arr(const int* begin, const int* end);

int main() {

	int cookies[ArrSize] = { 1,2,4,8,16,32,64, 128 };
	int sum = sum_arr(cookies, cookies + ArrSize);
	cout << sum << endl;
	sum = sum_arr(cookies, cookies + 3);
	cout << sum << endl;
	return 0;
}

int sum_arr(const int* begin, const int* end) {
	const int* p;
	int total = 0;
	for (p = begin; p != end; p++) {
		total += *p;
	}
	return total;
}