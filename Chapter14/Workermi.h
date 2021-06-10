#pragma once
#pragma once
#ifndef WORKERMI_H_
#define WORKERMI_H_
#include <string>
#include <iostream>

using namespace std;

class Worker
{
private:
	string fullname;
	long id;
protected:
	virtual void Data() const {
		cout << "사원 이름 : " << fullname << endl;
		cout << "사원 번호 : " << id << endl;
	}
	virtual void Get() {
		getline(cin, fullname);
		cout << "사원 번호를 입력하십시오 : ";
		cin >> id;
		while (cin.get() != '\n')
			continue;
	}
public:
	Worker() : fullname("no name"), id(0L) {}
	Worker(const string & s, long n) : fullname(s), id(n) {}
	virtual ~Worker() = 0;
	virtual void Set() = 0;
	virtual void Show() const = 0;
};

class Waiter : virtual public Worker {
private:
	int panache;
protected:
	void Data() const {
		cout << "웨이터 등급 : " << panache << endl;
	}
	void Get() {
		cout << "웨이터 등급을 입력하십시오 : ";
		cin >> panache;
		while (cin.get() != '\n')
			continue;
	}
public:
	Waiter() : Worker(), panache(0) {}
	Waiter(const string & s, long n, int p = 0)
		: Worker(s, n), panache(p) { }
	Waiter(const Worker & wk, int p = 0)
		: Worker(wk), panache(p) { }
	void Set() {
		cout << "웨이터의 이름을 입력하십시오 : ";
		Worker::Get();
		Get();
	}
	void Show() const {
		cout << "직종 : 웨이터\n";
		Worker::Data();
		Data();
	}
};

class Singer : virtual public Worker
{
protected:
	enum { other, alto, contralto, soprano, bass, baritone, tenor };
	enum { Vtypes = 7 };
	void Data() const {
		cout << "목소리 유형 : " << pv[voice] << endl;
	}
	void Get() {
		cout << "가수의 목소리 유형 번호를 입력하십시오.\n";
		int i;
		for (i = 0; i < Vtypes; i++) {
			cout << i << ": " << pv[i] << "  ";
			if (i % 4 == 3)
				cout << endl;
		}
		if (i % 4 != 0) cout << '\n';
		cin >> voice;
		while(cin.get() != '\n')
			continue;
	}
private:
	const static char *pv[Vtypes];
	int voice;
public:
	Singer() : Worker(), voice(other) {}
	Singer(const string & s, long n, int v = other)
		: Worker(s, n), voice(v) {}
	Singer(const Worker & wk, int v = other)
		: Worker(wk), voice(v) { }
	void Set() {
		cout << "가수의 이름을 입력하십시오 : ";
		Worker::Get();
		Get();
	}
	void Show() const {
		cout << "직종 : 가수\n";
		Worker::Data();
		Data();
	}
};

class SingingWaiter : public Singer, public Waiter {
protected:
	void Data() const {
		Singer::Data();
		Waiter::Data();
	}
	void Get() {
		Waiter::Get();
		Singer::Get();
	}
public:
	SingingWaiter() { }
	SingingWaiter(const string & s, long n, int p = 0, int v = other)
		: Worker(s, n), Waiter(s, n, p), Singer(s, n, v) { }
	SingingWaiter(const Worker & wk, int p = 0, int v = other)
		: Worker(wk), Waiter(wk, p), Singer(wk, v) { }
	SingingWaiter(const Waiter & wt, int v = other)
		: Worker(wt), Waiter(wt), Singer(wt, v) { }
	SingingWaiter(const Singer & wt, int p = 0)
		: Worker(wt), Waiter(wt, p), Singer(wt) { }
	void Set() {
		cout << "가수 겸 웨이터의 이름을 입력하십시오 : ";
		Worker::Get();
		Get();
	}
	void Show() const {
		cout << "직종 : 가수 겸 웨이터\n";
		Worker::Data();
		Data();
	}
};
#endif // !


