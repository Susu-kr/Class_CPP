#include <iostream>
#include <string>

using namespace std;

struct Car {
	int year;
	string name;
};

int main() {
	int N;
	cout << "몇 대의 차를 목록으로 관리하시겠습니까? "; cin >> N;
	Car* myCar = new Car[N];
	for (int i = 0; i < N; i++) {
		cin.ignore(32767, '\n');
		cout << "자동차 #" << i + 1 << endl;
		cout << "제작업체 : "; getline(cin,myCar[i].name);
		cout << "제작년도 : "; cin >> myCar[i].year;
	}

	cout << "현재 귀하가 보유하고 있는 자동차 목록은 다음과 같습니다." << endl;
	for (int i = 0; i < N; i++) {
		cout << myCar[i].year << "년형 " << myCar[i].name << endl;
	}

	delete[] myCar;
	return 0;
}