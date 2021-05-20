#include <iostream>
using namespace std;

template <typename T>
void Swap(T &a, T &b);

struct job {
	char name[40];
	double salary;
	int floor;
};

template <> void Swap<job>(job &j1, job &j2);
void Show(job &j);

int main() {
	cout.precision(2);
	cout.setf(ios::fixed, ios::floatfield);
	int i = 10, j = 20;
	cout << "i : " << i << ", j : " << j << endl;
	Swap(i, j);
	cout << "i : " << i << ", j : " << j << endl;

	job j1 = { "Susan Yaffee", 73000.60, 7 };
	job j2 = { "Sideny Taffee", 78420.12, 9 };
	Show(j1);
	Show(j2);
	Swap(j1, j2);
	Show(j1);
	Show(j2);
	return 0;
}

template <typename T>
void Swap(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}

template <> void Swap<job>(job &j1, job &j2) {
	double t1;
	int t2;
	t1 = j1.salary;
	j1.salary = j2.salary;
	j2.salary = t1;
	t2 = j1.floor;
	j1.floor = j2.floor;
	j2.floor = t2;
}
void Show(job &j) {
	cout << "Name : " << j.name << endl;
	cout << "Salary : " << j.salary << endl;
	cout << "Floor : " << j.floor << endl;
}