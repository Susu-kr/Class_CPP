#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string filename;
	cout << "새 파일을 위한 이름을 입력하십시오 : ";
	cin >> filename;

	ofstream fout(filename.c_str());
	fout << "비밀 번호 노출에 주의하십시오.\n";
	cout << "비밀 번호를 입력하십시오 : ";
	float pw;
	cin >> pw;
	fout << "귀하의 비밀 번호는 " << pw << "입니다.\n";
	fout.close();

	ifstream fin(filename.c_str());
	cout << filename << " 파일의 내용은 다음과 같습니다.\n";
	char ch;
	while (fin.get(ch))
		cout << ch;
	cout << "프로그램을 종료합니다.\n";
	fin.close();
	return 0;
}
