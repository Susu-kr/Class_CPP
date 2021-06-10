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
	cout << "ť�� �߰��Ϸ��� A, ť�� ó���Ϸ��� P\n�����Ϸ��� Q�� �Է��Ͻʽÿ�.\n";
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
				cout << "������ �Է��Ͻʽÿ� :\n"
					<< "w : ������  s : ����  t : ���� �� ������  q : ����\n";
				cin >> choice;
				while (strchr("wstq", choice) == NULL) {
					cout << "w, s, t, q �߿��� �ϳ��� �����Ͻʽÿ� : ";
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
				cout << "�� �߰���\n---------------------------------\n";
			}
			break;
		case 'P':
		case 'p':
			while (!lolas.isEmpty()){
				lolas.Dequeue(temp);
				cout << "------------------------------\n";
				temp->Show();
				cout << "�� ���ŵ�\n---------------------------------\n";
			}
			break;
		}
		cout << "ť�� �߰��Ϸ��� A, ť�� ó���Ϸ��� P\n�����Ϸ��� Q�� �Է��Ͻʽÿ�.\n";
	}
	delete temp;
	cout << "���α׷��� �����մϴ�.\n";
	return 0;
}