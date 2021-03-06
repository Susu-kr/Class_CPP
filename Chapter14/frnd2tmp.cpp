#include <iostream>
using namespace std;

template <typename T>
class HasFriend{
private:
	T item;
	static int ct;
public:
	HasFriend(const T & i) : item(i) { ct++; }
	~HasFriend() { ct--; }
	friend void counts();
	friend void report(HasFriend<T> &);
};

template <typename T>
int HasFriend<T>::ct = 0;

void counts() {
	cout << "int count : " << HasFriend<int>::ct << "; ";
	cout << "double count : " << HasFriend<double>::ct << endl;
}

void report(HasFriend<int> & hf) {
	cout << "HasFriend<int> : " << hf.item << endl;
}

void report(HasFriend<double> & hf) {
	cout << "HasFriend<double> : " << hf.item << endl;
}

int main() {
	cout << "객체가 선언되지 않았다 : ";
	counts();
	HasFriend<int> hfi1(10);
	cout << "hfi1 선언 후 : ";
	counts();
	HasFriend<int> hfi2(20);
	cout << "hfi2 선언 후 : ";
	counts();
	HasFriend<double> hfdb(10.5);
	cout << "hfdb 선언 후 : ";
	counts();
	report(hfi1);
	report(hfi2);
	report(hfdb);
	return 0;
}