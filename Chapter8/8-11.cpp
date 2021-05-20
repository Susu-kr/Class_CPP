#include <iostream>

using namespace std;

template <class Any> // typename Any
void Swap(Any &a, Any &b);

int main() {
	int i = 10;
	int j = 20;
	cout << "i : " << i << ", j : " << j << endl;
	Swap(i, j);
	cout << "i : " << i << ", j : " << j << endl;

	double a = 24.5;
	double b = 85.2;
	cout << "a : " << a << ", b : " << b << endl;
	Swap(a, b);
	cout << "a : " << a << ", b : " << b << endl;

	return 0;
}
template <class Any> // typename Any
void Swap(Any &a, Any &b) {
	Any temp;
	temp = a;
	a = b;
	b = temp;
}