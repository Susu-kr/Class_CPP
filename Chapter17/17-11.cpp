#include <iostream>

using namespace std;

int main() {
	cout << "수를 입력하십시오 : ";
	int sum = 0;
	int num;
	while (cin >> num) {
		sum += num;
	}
	cout << "마지막으로 입력한 값 = " << num << endl;
	cout << "합계 = " << sum << endl;
	return 0;
}