#include <iostream>
#include <cctype>

using namespace std;

int main() {
	cout << "분석할 텍스트를 입력하십시오. 입력의 끝을 @으로 표시하십시오." << endl;
	char ch;
	int whitespace = 0;
	int digits = 0;
	int chars = 0;
	int punct = 0;
	int others = 0;

	cin.get(ch);
	while (ch != '@') {
		if (isalpha(ch)) chars++;
		else if (isspace(ch)) whitespace++;
		else if (isdigit(ch)) digits++;
		else if (ispunct(ch)) punct++;
		else others++;
		cin.get(ch);
	}
	cout << "알파벳 문자 " << chars << endl;
	cout << "공백 문자 " << whitespace << endl;
	cout << "숫자 문자 " << digits << endl;
	cout << "구두점 문자 " << punct << endl;
	cout << "기타 문자 " << others << endl;
	return 0;


}