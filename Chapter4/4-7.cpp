#include <iostream>
#include <string>

using namespace std;

int main() {
	char arr1[20];
	char arr2[20] = "jaguar";
	string str1;
	string str2 = "panther";

	cout << "����̰��� ���� �� ���� �Է��Ͻÿ� : "; cin >> arr1;
	cout << "����̰��� �� �ٸ� ���� �� ���� �Է��Ͻÿ� : "; cin >> str1;
	cout << "�Ʒ� �������� ��� ����̰��Դϴ�" << endl;
	cout << arr1 << " " << arr2 << " " << str1 << " " << str2 << endl;
	cout << arr2 << "���� �� ��° ���� : " << arr2[2] << endl;
	cout << str2 << "���� �� ��° ���� : " << str2[2] << endl;
	cout << str1 + str2 << endl;

	return 0;
}