#include <iostream>
#include <cstring>
#include "Workermi.h"
#include "QueueTp.h"

const int SIZE = 5;
const char *Singer::pv[] = { "other", "alto", "contralto", "soprano", "bass", "baritone", "tenor" };
Worker::~Worker() { }
using namespace std;

int main() {
	Queue<Worker *> lolas;
	Worker * temp = NULL;
	char ch;
	cout << "큐를 추가하려면 A, 큐를 처리하려면 P\n종료하려면 Q를 입력하십시오.\n";
	while (cin >> ch && toupper(ch) != 'Q') {
		while (cin.get() != '\n')
			continue;
		switch (ch)
		{
		case 'A':
		case 'a':
			int ct;
			for (ct = 0; ct < SIZE; ct++) {
				char choice;
				cout << "직종을 입력하십시오 :\n"
					<< "w : 웨이터  s : 가수  t : 가수 겸 웨이터  q : 종료\n";
				cin >> choice;
				while (strchr("wstq", choice) == NULL) {
					cout << "w, s, t, q 중에서 하나를 선택하십시오 : ";
					cin >> choice;
				}
				if (choice == 'q') break;
				switch (choice)
				{
				case 'w':
					temp = new Waiter;
					break;
				case 's':
					temp = new Singer;
					break;
				case 't':
					temp = new SingingWaiter;
					break;
				}
				cin.get();
				temp->Set();
				lolas.Enqueue(temp);
				cout << "------------------------------\n";
				temp->Show();
				cout << "가 추가됨\n---------------------------------\n";
			}
			break;
		case 'P':
		case 'p':
			while (!lolas.isEmpty()){
				lolas.Dequeue(temp);
				cout << "------------------------------\n";
				temp->Show();
				cout << "가 제거됨\n---------------------------------\n";
			}
			break;
		}
		cout << "큐를 추가하려면 A, 큐를 처리하려면 P\n종료하려면 Q를 입력하십시오.\n";
	}
	delete temp;
	cout << "프로그램을 종료합니다.\n";
	return 0;
}