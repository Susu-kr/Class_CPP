#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char str[100];
	int cnt = 0;
	cout << "영어 단어들을 입력하십시오 (끝내려면 done을 입력) : " << endl;
	while (1) {
		cin >> str;
		if (strcmp(str, "done") == 0) break;
		cnt++;
	}
	cout << "총 " << cnt << " 단어가 입력되었습니다.";
	
	return 0;
}