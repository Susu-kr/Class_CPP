#include <iostream>
using namespace std;

int main() {
	const int ArrSize = 20;
	char name[ArrSize];
	char dessert[ArrSize];
	cout << "�̸��� �Է��Ͻʽÿ�: "; cin.getline(name, ArrSize);
	cout << "�����ϴ� ����Ʈ�� �Է��Ͻʽÿ� : "; cin.getline(dessert, ArrSize);
	cout << "���ִ� " << dessert << " ����Ʈ�� �غ��ϰڽ��ϴ�. " << name << "��!" << endl;
	return 0;
}