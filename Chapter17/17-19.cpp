#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>

using namespace std;

inline void eatline() { while (cin.get() != '\n') continue; }
struct planet {
	char name[20];
	double population;
	double g;
};

const char * file = "planets.dat";

int main() {
	planet p;
	cout << fixed << right;

	ifstream fin;
	fin.open(file, ios_base::in | ios_base::binary);
	if (fin.is_open()) {
		cout << file << " 파일의 현재 내용은 다음과 같습니다.\n";
		while (fin.read((char *)&p, sizeof p)) {
			cout << setw(20) << p.name << ": "
				<< setprecision(0) << setw(12) << p.population
				<< setprecision(2) << setw(6) << p.g << endl;
		}
		fin.close();
	}

	ofstream fout(file, ios_base::out | ios_base::app | ios_base::binary);
	if (!fout.is_open()) {
		cerr << "출력을 위해 " << file << " 파일을 열 수 없습니다.\n";
		exit(EXIT_FAILURE);
	}
	
	cout << "행성의 이름을 입력하십시오.(끝내려면 빈 줄 입력)\n";
	cin.get(p.name, 20);
	while (p.name[0] != '\0') {
		eatline();
		cout << "행성의 인구를 입력하십시오 : ";
		cin >> p.population;
		cout << "행성의 중력가속도를 입력하십시오 : ";
		cin >> p.g;
		eatline();
		fout.write((char *)&p, sizeof p);
		cout << "행성의 이름을 입력하십시오.(끝내려면 빈 줄 입력)\n";
		cin.get(p.name, 20);
	}
	fout.close();
	
	fin.clear();
	fin.open(file, ios_base::in | ios_base::binary);
	if (fin.is_open()) {
		cout << file << " 파일의 현재 내용은 다음과 같습니다.\n";
		while (fin.read((char *)&p, sizeof p)) {
			cout << setw(20) << p.name << ": "
				<< setprecision(0) << setw(12) << p.population
				<< setprecision(2) << setw(6) << p.g << endl;
		}
		fin.close();
	}
	return 0;
}