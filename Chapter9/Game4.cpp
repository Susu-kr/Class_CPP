/*
	문제4.
	아이템 목록이 다음과 같을때
	
	등급		아이템	확률			아이템	확률
	-----------------------------------------
	5star	A-item	1%
	-----------------------------------------
	4star	B-item	3%			C-item	3%
	-----------------------------------------
	3star	D-item	5%			E-item	5%
			F-item	5%
	-----------------------------------------
	2star	G-item	10%			H-item	10%
			I-item	10%			J-item	10%
	-----------------------------------------
	1star	K-item	38%
	-----------------------------------------
	각 아이템이 지정된 확률에 맞게 정확히 나올 수 있도록 프로그램을 작성하시오.
	ex>
	횟수 ? 100	A : 1, B : 3, ........
	횟수 ? 1000	A : 10, B : 30, .................
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <time.h>

using namespace std;

int v[11] = {1, 3, 3, 5, 5, 5, 10, 10, 10, 10, 38};
int v2[11] = { 1, 3, 3, 5, 5, 5, 10, 10, 10, 10, 38 };
string str[12] = {};
int item[12] = {};

void loadFile();
void saveFile();
void getItem(int N);
void print();

int main() {
	srand((unsigned)time(NULL));
	int N;
	cout << "횟수 : ";
	cin >> N;
	loadFile();
	getItem(N);
	print();
	saveFile();
	return 0;
}

void print() {
	cout << "------------------------------------" << endl;
	cout << "A-item : " << item[0] << endl;
	cout << "------------------------------------" << endl;
	cout << "B-item : " << item[1] << "\tC-item : " << item[2] << endl;
	cout << "------------------------------------" << endl;
	cout << "D-item : " << item[3] << "\tE-item : " << item[4] << endl;
	cout << "F-item : " << item[5] << endl;
	cout << "------------------------------------" << endl;
	cout << "G-item : " << item[6] << "\tH-item : " << item[7] << endl;
	cout << "I-item : " << item[8] << "\tJ-item : " << item[9] << endl;
	cout << "------------------------------------" << endl;
	cout << "K-item : " << item[10] << endl;
	cout << "------------------------------------" << endl;
	int total = 0;
	for (int i = 0; i < 11; i++) {
		total += item[i];
	}
	item[11] = total;
	cout << "총 획득 아이템 개수 : " << item[11] << endl;
}

void getItem(int N) {
	int cnt = 0;
	while (cnt < N) {
		int n = rand() % 100 + 1;
		if (n <= 38 && n >= 1 && v[10] > item[10]) { // 1 star
			item[10]++;
			cnt++;
		}
		else if (n == 39 && v[0] > item[0]) { // 5star
			item[0]++;
			cnt++;
		}
		else if (n >= 40 && n <= 45) { // 4 star
			if (n < 43 && v[1] > item[1]) {
				item[1]++;
				cnt++;
			}
			else if (n >= 43 && v[2] > item[2]) {
				item[2]++;
				cnt++;
			}
		}
		else if (n >= 46 && n <= 60) { // 3star
			if (n < 51 && v[3] > item[3]) {
				item[3]++;
				cnt++;
			}
			else if (n > 51 && n < 56 && v[4] > item[4]) {
				item[4]++;
				cnt++;
			}
			else if (n >= 56 && v[5] > item[5]) {
				item[5]++;
				cnt++;
			}
		}
		else { // 2star
			if (n < 71 && v[6] > item[6]) {
				item[6]++;
				cnt++;
			}
			else if (n >= 71 && n < 81 && v[7] > item[7]) {
				item[7]++;
				cnt++;
			}
			else if (n >= 81 && n < 91 && v[8] > item[8]) {
				item[8]++;
				cnt++;
			}
			else if (n >= 91 && v[9] > item[9]) {
				item[9]++;
				cnt++;
			}
		}
		if (cnt % 100 == 0 && cnt != 0) {
			for (int i = 0; i < 11; i++) {
				v[i] += v2[i];
			}
		}
	}
}

void loadFile() {
	ifstream readFile;
	readFile.open("data.txt");
	if (readFile.is_open()) {
		int i = 0;
		while (i < 12) {
			getline(readFile, str[i]);
			item[i] = stoi(str[i]);
			i++;
		}
		readFile.close();
	}
	int t = item[11] / 100 + 1;
	for (int i = 0; i < 11; i++) {
		v[i] = v2[i] * t;
	}
}

void saveFile() {
	ofstream writeFile;
	writeFile.open("data.txt");

	for (int i = 0; i < 12; i++) {
		str[i] = to_string(item[i]) + "\n";
		writeFile.write(str[i].c_str(), str[i].size());
	}
	writeFile.close();
}
