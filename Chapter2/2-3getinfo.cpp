#include <iostream>

using namespace std;

int main() {
	int carrots;
	cout << "당근을 몇 개나 가지고 있나?" << endl;
	cin >> carrots; // C++ 입력
	cout << "여기 두 개가 더 있다. ";
	carrots = carrots + 2;
	cout << "이제 당근은 모두 " << carrots << "개이다. " << endl;

	return 0;
}