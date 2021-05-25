#include <iostream>
#include <string>
#include "Stock.h"
using namespace std;

int main() {

	Stock A;
	A.acquire("AAAA", 20, 12.50);
	A.Show();
	A.buy(15, 18.125);
	A.Show();
	A.sell(400, 20.00);
	A.Show();
	A.buy(300000, 40.125);
	A.Show();
	A.sell(300000, 0.125);
	A.Show();
	Stock B("BBBB", 20, 12.50);
	B.Show();
	return 0;
}

//class Person {
//private: // data hiding
//	long number_of_citizen;
//	string name;
//
//public: // 설계의 추상화를 나타낸다. encapsulation :  세부적인 구현들을 따로 결합하여 추상화와 분리하는 것
//
//	// 인터페이스 -> private 변수 접근
//	// 메서드 -> 멤버 함수
//	long GetNumber() {
//		return number_of_citizen;
//	}
//	
//	void SetName(string _name) {
//		name = _name;
//	}
//};
//
//
//class Stock {
//private:
//	string company;
//	long shares;
//	double share_val;
//	double total_val;
//	void set_tot();
//public:
//	void show();
//
//
//protected:
//
//};