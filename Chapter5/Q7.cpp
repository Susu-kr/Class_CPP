#include <iostream>
#include <string>

using namespace std;

struct Car {
	int year;
	string name;
};

int main() {
	int N;
	cout << "�� ���� ���� ������� �����Ͻðڽ��ϱ�? "; cin >> N;
	Car* myCar = new Car[N];
	for (int i = 0; i < N; i++) {
		cin.ignore(32767, '\n');
		cout << "�ڵ��� #" << i + 1 << endl;
		cout << "���۾�ü : "; getline(cin,myCar[i].name);
		cout << "���۳⵵ : "; cin >> myCar[i].year;
	}

	cout << "���� ���ϰ� �����ϰ� �ִ� �ڵ��� ����� ������ �����ϴ�." << endl;
	for (int i = 0; i < N; i++) {
		cout << myCar[i].year << "���� " << myCar[i].name << endl;
	}

	delete[] myCar;
	return 0;
}