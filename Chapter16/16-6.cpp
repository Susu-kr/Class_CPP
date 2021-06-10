#include <iostream>
#include <string>
#include <memory>

using namespace std;

int main() {
	shared_ptr<string> films[5] =
	{
		shared_ptr<string>(new string("Fowl Balls")),
		shared_ptr<string>(new string("Duck Walks")),
		shared_ptr<string>(new string("Chicken Runs")),
		shared_ptr<string>(new string("Turkey Errors")),
		shared_ptr<string>(new string("Goose Eggs")),
	};
	shared_ptr<string> pwin;
	pwin = films[2];

	cout << "다음은 최고의 조류 영화상 후보입니다.\n";
	for (int i = 0; i < 5; i++) {
		cout << *films[i] << endl;
	}
	cout << "수상자는 " << *pwin << "!\n";
	cin.get();
	return 0;
}