#include <iostream>
#include "baseDMA.h"

using namespace std;

int main() {
	baseDMA shirt("Portabelly", 8);
	lacksDMA ballon("red", "Blimpo", 4);
	hasDMA map("Mercator", "Buffalo Keys", 5);
	// TODO: ���⿡ ��ȯ ������ �����մϴ�.
	cout << "baseDMA ��ü�� ����Ѵ� : " << shirt << endl;
	cout << "lacksDMA ��ü�� ����Ѵ� : " << ballon << endl;
	cout << "hasDMA ��ü�� ����Ѵ� : " << map << endl;
	lacksDMA ballon2(ballon);
	cout << "lacksDMA ���� ��� : " << ballon2 << endl;
	hasDMA map2;
	map2 = map;
	cout << "hasDMA ���� ��� : " << map2 << endl;
	return 0;
}