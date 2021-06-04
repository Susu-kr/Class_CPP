#include <iostream>
#include "baseDMA.h"

using namespace std;

int main() {
	baseDMA shirt("Portabelly", 8);
	lacksDMA ballon("red", "Blimpo", 4);
	hasDMA map("Mercator", "Buffalo Keys", 5);
	// TODO: 여기에 반환 구문을 삽입합니다.
	cout << "baseDMA 객체를 출력한다 : " << shirt << endl;
	cout << "lacksDMA 객체를 출력한다 : " << ballon << endl;
	cout << "hasDMA 객체를 출력한다 : " << map << endl;
	lacksDMA ballon2(ballon);
	cout << "lacksDMA 복사 결과 : " << ballon2 << endl;
	hasDMA map2;
	map2 = map;
	cout << "hasDMA 대입 결과 : " << map2 << endl;
	return 0;
}