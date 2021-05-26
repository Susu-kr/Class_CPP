#include <iostream>
#include "Time.h"

using namespace std;

int main() {
	Time aida(2, 40);
	Time tosca(5, 55);
	Time temp;
	Time temp2;
	Time temp3;
	temp = aida + tosca;
	temp2 = aida - tosca;
	temp3 = aida * 10;
	cout << "aida + tosca : " << temp << endl;
	cout << "aida - tosca : " << temp2 << endl;
	cout << "aida * 10 : " << temp3 << endl;

	/*
		cout << "aida + tosca : " -> ostream : cout
		cout << temp -> operator<<(cout, temp) : ostream
		cout << endl;
	*/
	return 0;
}