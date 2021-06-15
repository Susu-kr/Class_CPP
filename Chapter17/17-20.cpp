#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>

using namespace std;

const int LIM = 20;

struct planet {
	char name[LIM];
	double population;
	double g;
};

inline void eatline() { while (cin.get() != '\n') continue; }
const char * file = "planets.dat";

int main() {
	planet p;
	cout << fixed;

	fstream finout;
	finout.open(file, ios_base::in | ios_base::out | ios_base::binary);
	int ct = 0;
	if (finout.is_open()) {
		finout.seekg(0);
		cout << file << " 파일의 현재 내용은 다음과 같습니다.\n";
		while (finout.read((char *)&p, sizeof p)) {
			cout << ct++ << " : " << setw(LIM) << p.name << ": "
				<< setprecision(0) << setw(12) << p.population
				<< setprecision(2) << setw(6) << p.g << endl;
		}
		if(finout.eof()) finout.clear();
		else {
			cerr << file << " 파일을 읽다가 에러 발생.\n";
			exit(EXIT_FAILURE);
		}
	}
	else {
		cerr << file << " 파일을 열 수 없습니다. 종료.\n";
		exit(EXIT_FAILURE);
	}

	cout << "수정할 레코드 번호를 입력하십시오 : ";
	long rec;
	cin >> rec;
	eatline();
	if (rec < 0 || rec >= ct) {
		cerr << "잘못된 레코드 번호입니다. 종료.\n";
		exit(EXIT_FAILURE);
	}
	streampos place = rec * sizeof p;
	finout.seekg(place);
	if (finout.fail()) {
		cerr << "레코드를 찾다가 에러 발생.\n";
		exit(EXIT_FAILURE);
	}

	finout.read((char *)&p, sizeof p);
	cout << "현재 레코드의 내용\n";
	cout << rec << " : " << setw(LIM) << p.name << ": "
		<< setprecision(0) << setw(12) << p.population
		<< setprecision(2) << setw(6) << p.g << endl;
	if (finout.eof()) finout.clear();

	cout << "행성의 이름을 입력하십시오.(끝내려면 빈 줄 입력)\n";
	cin.get(p.name, LIM);
	eatline();
	cout << "행성의 인구를 입력하십시오 : ";
	cin >> p.population;
	cout << "행성의 중력가속도를 입력하십시오 : ";
	cin >> p.g;
	finout.seekp(place);
	finout.write((char *)&p, sizeof p) << flush;
	if (finout.fail()) {
		cerr << "쓰다가 에러 발생.\n";
		exit(EXIT_FAILURE);
	}

	ct = 0;
	finout.seekg(0);
	cout << file << " 파일의 개정된 내용은 다음과 같습니다.\n";
	while (finout.read((char *)&p, sizeof p)) {
		cout << ct++ << " : " << setw(LIM) << p.name << ": "
			<< setprecision(0) << setw(12) << p.population
			<< setprecision(2) << setw(6) << p.g << endl;
	}
	finout.close();
	cout << "프로그램을 종료합니다.\n";
	return 0;
}