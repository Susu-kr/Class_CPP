#include <iostream>
#include <string>

using namespace std;

int main() {
	char arr1[20];
	char arr2[20] = "jaguar";
	string str1;
	string str2 = "panther";

	cout << "고양이과의 동물 한 종을 입력하시오 : "; cin >> arr1;
	cout << "고양이과의 또 다른 동물 한 종을 입력하시오 : "; cin >> str1;
	cout << "아래 동물들은 모두 고양이과입니다" << endl;
	cout << arr1 << " " << arr2 << " " << str1 << " " << str2 << endl;
	cout << arr2 << "에서 세 번째 글자 : " << arr2[2] << endl;
	cout << str2 << "에서 세 번째 글자 : " << str2[2] << endl;
	cout << str1 + str2 << endl;

	return 0;
}