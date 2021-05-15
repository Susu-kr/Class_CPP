#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char animal[20] = "bear";
	const char* bird = "wren";
	char* ps;
	cout << animal << " and " << bird << endl;

	cout << "동물의 종류를 입력하시오 : "; cin >> animal;
	ps = animal;
	cout << ps << "s!" << endl;
	cout << "strcpy() 사용 전 : " << endl;
	cout << (int*)animal << " : " << animal << endl;
	cout << (int*)ps << " : " << ps << endl;

	ps = new char[strlen(animal) + 1];
	strcpy(ps, animal);
	cout << "strcpy() 사용 후 : " << endl;
	cout << (int*)animal << " : " << animal << endl;
	cout << (int*)ps << " : " << ps << endl;
	delete[] ps;
	return 0;
}