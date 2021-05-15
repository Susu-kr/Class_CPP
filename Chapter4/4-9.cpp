#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
	char arr1[20];
	char arr2[20] = "jaguar";
	string str1;
	string str2 = "panther";

	str1 = str2;
	strcpy(arr1, arr2);
	str1 += " paste";
	strcat(arr1, " juice");

	int len1 = str1.size();
	int len2 = strlen(arr1);

	cout << str1 << " 문자열에는 " << len1 << "개의 문자가 들어있다." << endl;
	cout << arr1 << " 문자열에는 " << len2 << "개의 문자가 들어있다." << endl;


	return 0;
}