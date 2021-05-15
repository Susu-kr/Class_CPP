#include <iostream>
using namespace std;

double add(double a, double b);
double sub(double a, double b);
double calculate(double a, double y, double (*pf)(double, double));

int main() {
	double x, y;
	
	cin >> x >> y;
	double result = calculate(x, y, add);
	cout << result << endl;
	result = calculate(x, y, sub);
	cout << result << endl;
	return 0;
}
double add(double a, double b) {
	return a + b;
}
double sub(double a, double b) {
	return a - b;
}
double calculate(double a, double y, double (*pf)(double, double)){
	return (*pf)(a, y);
}