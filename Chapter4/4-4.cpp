#include <iostream>
using namespace std;

int main() {
	const int ArrSize = 20;
	char name[ArrSize];
	char dessert[ArrSize];
	cout << "이름을 입력하십시오: "; cin.getline(name, ArrSize);
	cout << "좋아하는 디저트를 입력하십시오 : "; cin.getline(dessert, ArrSize);
	cout << "맛있는 " << dessert << " 디저트를 준비하겠습니다. " << name << "님!" << endl;
	return 0;
}