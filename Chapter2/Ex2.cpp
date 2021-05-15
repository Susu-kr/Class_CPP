#include <iostream>

using namespace std;

int main() {

	int n;
	cout << "거리를 입력하세요 : ";
	cin >> n;
	double Kilo = n * 1.60934;
	cout << n << "마일은 " << Kilo << "Km이다.";

	return 0;
}