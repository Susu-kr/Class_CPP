#include <iostream>
#include <string>
#include <cctype>
#include "stacktp.h"

using namespace std;

int main() {
	Stack<string> st;
	char ch;
	string po;
	cout << "주문서를 추가하려면 A, 주문서를 처리하려면 P\n종료하시려면 Q를 입력하세요.\n";
	while (cin >> ch && toupper(ch) != 'Q') {
		while (cin.get() != '\n')
			continue;
		if (!isalpha(ch)) {
			cout << "\a";
			continue;
		}
		switch (ch)
		{
		case 'A':
		case 'a':
			cout << "추가할 주문서의 번호를 입력하십시오 : ";
			cin >> po;
			if (st.isFull())
				cout << "스택이 가득 차 있습니다.\n";
			else st.push(po);
			break;
		case 'P':
		case 'p':
			if (st.isEmpty()) cout << "스택이 비어 있습니다.\n";
			else {
				st.pop(po);
				cout << "#" << po << " 주문서를 처리했습니다.\n";
			}
			break;
		default:
			break;
		}
		cout << "주문서를 추가하려면 A, 주문서를 처리하려면 P\n종료하시려면 Q를 입력하세요.\n";
	}
	cout << "프로그램을 종료합니다.\n";
	return 0;
}