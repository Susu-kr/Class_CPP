#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;
const int SIZE = 60;
int main() {
	char filename[SIZE];
	ifstream inFile;
	cout << "������ ������ �̸��� �Է��Ͻÿ� : ";
	cin.getline(filename, SIZE);
	inFile.open(filename);
	if (!inFile.is_open()) {
		cout << filename << "������ �� �� �����ϴ�." << endl;
		cout << "���α׷��� �����մϴ�." << endl;
		exit(EXIT_FAILURE);
	}
	double value;
	double sum = 0.0;
	int count = 0;

	inFile >> value;
	while (inFile.good()) {
		++count;
		sum += value;
		inFile >> value;
	}
	if (inFile.eof()) {
		cout << "���� ���� �����߽��ϴ�." << endl;
	}
	else if (inFile.fail()) {
		cout << "������ ����ġ�� �Է��� ����Ǿ����ϴ�." << endl;
	}
	else {
		cout << "�� �� ���� ������ �Է��� ����Ǿ����ϴ�." << endl;
	}

	if (count == 0) cout << "�����Ͱ� �����ϴ�." << endl;
	else {
		cout << "���� �׸��� ���� : " << count << endl;
		cout << "�հ� : " << sum << endl;
		cout << "��� : " << sum / count << endl;
	}
	inFile.close();
	return 0;
}