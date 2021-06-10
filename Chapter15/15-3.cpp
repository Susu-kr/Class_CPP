#include <iostream>
#include "tv.h"

using namespace std;

int main() {
	Tv s42;
	cout << "42\" TV의 초기 설정값 : \n";
	s42.settings();
	s42.onoff();
	s42.chanup();
	cout << "\n42\" TV의 변경된 설정값 : \n";
	s42.settings();

	Remote grey;
	cout << "\n리모컨의 초기 설정값 : \n";
	grey.show_mode2();

	grey.set_chan(s42, 10);
	grey.volup(s42);
	grey.volup(s42);
	cout << "\n리모컨 사용 후 42\" TV의 설정값:\n";
	s42.settings();
	s42.set_mode2(grey);
	grey.show_mode2();

	s42.onoff();
	cout << "\nTv 종료 후 리모컨의 모드 변경\n";
	s42.settings();
	s42.set_mode2(grey);
	grey.show_mode2();
	return 0;
}