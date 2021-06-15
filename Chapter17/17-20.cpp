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
		cout << file << " ������ ���� ������ ������ �����ϴ�.\n";
		while (finout.read((char *)&p, sizeof p)) {
			cout << ct++ << " : " << setw(LIM) << p.name << ": "
				<< setprecision(0) << setw(12) << p.population
				<< setprecision(2) << setw(6) << p.g << endl;
		}
		if(finout.eof()) finout.clear();
		else {
			cerr << file << " ������ �дٰ� ���� �߻�.\n";
			exit(EXIT_FAILURE);
		}
	}
	else {
		cerr << file << " ������ �� �� �����ϴ�. ����.\n";
		exit(EXIT_FAILURE);
	}

	cout << "������ ���ڵ� ��ȣ�� �Է��Ͻʽÿ� : ";
	long rec;
	cin >> rec;
	eatline();
	if (rec < 0 || rec >= ct) {
		cerr << "�߸��� ���ڵ� ��ȣ�Դϴ�. ����.\n";
		exit(EXIT_FAILURE);
	}
	streampos place = rec * sizeof p;
	finout.seekg(place);
	if (finout.fail()) {
		cerr << "���ڵ带 ã�ٰ� ���� �߻�.\n";
		exit(EXIT_FAILURE);
	}

	finout.read((char *)&p, sizeof p);
	cout << "���� ���ڵ��� ����\n";
	cout << rec << " : " << setw(LIM) << p.name << ": "
		<< setprecision(0) << setw(12) << p.population
		<< setprecision(2) << setw(6) << p.g << endl;
	if (finout.eof()) finout.clear();

	cout << "�༺�� �̸��� �Է��Ͻʽÿ�.(�������� �� �� �Է�)\n";
	cin.get(p.name, LIM);
	eatline();
	cout << "�༺�� �α��� �Է��Ͻʽÿ� : ";
	cin >> p.population;
	cout << "�༺�� �߷°��ӵ��� �Է��Ͻʽÿ� : ";
	cin >> p.g;
	finout.seekp(place);
	finout.write((char *)&p, sizeof p) << flush;
	if (finout.fail()) {
		cerr << "���ٰ� ���� �߻�.\n";
		exit(EXIT_FAILURE);
	}

	ct = 0;
	finout.seekg(0);
	cout << file << " ������ ������ ������ ������ �����ϴ�.\n";
	while (finout.read((char *)&p, sizeof p)) {
		cout << ct++ << " : " << setw(LIM) << p.name << ": "
			<< setprecision(0) << setw(12) << p.population
			<< setprecision(2) << setw(6) << p.g << endl;
	}
	finout.close();
	cout << "���α׷��� �����մϴ�.\n";
	return 0;
}