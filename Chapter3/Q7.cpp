#include <iostream>

using namespace std;

int main() {
	const double gallon = 3.875;
	const double mile = 62.14; // 100km
	double liter;
	cout << "�ֹ��� �Һ��� �Է��ϼ��� : "; cin >> liter;
	cout << "USA : " << mile / (liter / gallon) << endl;
	return 0;
}