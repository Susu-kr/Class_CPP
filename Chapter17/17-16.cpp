#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string filename;
	cout << "�� ������ ���� �̸��� �Է��Ͻʽÿ� : ";
	cin >> filename;

	ofstream fout(filename.c_str());
	fout << "��� ��ȣ ���⿡ �����Ͻʽÿ�.\n";
	cout << "��� ��ȣ�� �Է��Ͻʽÿ� : ";
	float pw;
	cin >> pw;
	fout << "������ ��� ��ȣ�� " << pw << "�Դϴ�.\n";
	fout.close();

	ifstream fin(filename.c_str());
	cout << filename << " ������ ������ ������ �����ϴ�.\n";
	char ch;
	while (fin.get(ch))
		cout << ch;
	cout << "���α׷��� �����մϴ�.\n";
	fin.close();
	return 0;
}
