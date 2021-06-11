#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

void Show(int v) { cout << v << ' '; }
const int LIM = 10;

int main() {
	int ar[LIM] = { 4, 5 , 4, 2, 2, 3, 4, 8, 1, 4 };
	list<int> la(ar, ar + LIM);
	list<int> lb(la);
	cout << "오리지널 리스트의 내용:\n\t";
	for_each(la.begin(), la.end(), Show);
	cout << "la's size : " << la.size() << endl;
	la.remove(4);
	cout << "remove() 매서드를 사용한 후 :\nla : ";
	for_each(la.begin(), la.end(), Show);
	cout << "la's size : " << la.size() << endl;
	list<int>::iterator last;
	last = remove(lb.begin(), lb.end(), 4);
	cout << "remove() 함수를 사용한 후 : \nlb : ";
	for_each(lb.begin(), lb.end(), Show);
	cout << "lb's size : " << lb.size() << endl;
	lb.erase(last, lb.end());
	cout << "erase() 매서드를 사용한 후 :\nlb : ";
	for_each(lb.begin(), lb.end(), Show);
	cout << "lb's size : " << lb.size() << endl;
	return 0;
}
