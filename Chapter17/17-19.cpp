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
		cout << file << " ������ ���� ������ ������ �����ϴ�.\n";
		while (fin.read((char *)&p, sizeof p)) {
			cout << setw(20) << p.name << ": "
				<< setprecision(0) << setw(12) << p.population
				<< setprecision(2) << setw(6) << p.g << endl;
		}
		fin.close();
	}

	ofstream fout(file, ios_base::out | ios_base::app | ios_base::binary);
	if (!fout.is_open()) {
		cerr << "����� ���� " << file << " ������ �� �� �����ϴ�.\n";
		exit(EXIT_FAILURE);
	}
	
	cout << "�༺�� �̸��� �Է��Ͻʽÿ�.(�������� �� �� �Է�)\n";
	cin.get(p.name, 20);
	while (p.name[0] != '\0') {
		eatline();
		cout << "�༺�� �α��� �Է��Ͻʽÿ� : ";
		cin >> p.population;
		cout << "�༺�� �߷°��ӵ��� �Է��Ͻʽÿ� : ";
		cin >> p.g;
		eatline();
		fout.write((char *)&p, sizeof p);
		cout << "�༺�� �̸��� �Է��Ͻʽÿ�.(�������� �� �� �Է�)\n";
		cin.get(p.name, 20);
	}
	fout.close();
	
	fin.clear();
	fin.open(file, ios_base::in | ios_base::binary);
	if (fin.is_open()) {
		cout << file << " ������ ���� ������ ������ �����ϴ�.\n";
		while (fin.read((char *)&p, sizeof p)) {
			cout << setw(20) << p.name << ": "
				<< setprecision(0) << setw(12) << p.population
				<< setprecision(2) << setw(6) << p.g << endl;
		}
		fin.close();
	}
	return 0;
}