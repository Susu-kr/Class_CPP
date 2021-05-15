/*
	문제1. 문자열을 앞에서 부터 읽으나 뒤에서부터 읽으나 동일한 경우를 Palindrome 이라고 한다.
	문자열을 입력받아 회문인지 판단하고 결과를 출력하는 프로그램을 작성하라.
	ex > "mom" -> 회문
		"stats" -> 회문
		"noon" -> 회문
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	string str, temp = "";
	cout << "문자열을 입력하세요 : "; getline(cin, str);
	for (int i = str.size()-1; i >= 0; i--) {
		temp += str[i];
	}
	cout << str << " " << temp << endl;
	if (str == temp) cout << "회문이다." << endl;
	else cout << "회문이 아니다." << endl;
	return 0;
}