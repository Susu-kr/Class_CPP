#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char animal[20] = "bear";
	const char* bird = "wren";
	char* ps;
	cout << animal << " and " << bird << endl;

	cout << "������ ������ �Է��Ͻÿ� : "; cin >> animal;
	ps = animal;
	cout << ps << "s!" << endl;
	cout << "strcpy() ��� �� : " << endl;
	cout << (int*)animal << " : " << animal << endl;
	cout << (int*)ps << " : " << ps << endl;

	ps = new char[strlen(animal) + 1];
	strcpy(ps, animal);
	cout << "strcpy() ��� �� : " << endl;
	cout << (int*)animal << " : " << animal << endl;
	cout << (int*)ps << " : " << ps << endl;
	delete[] ps;
	return 0;
}