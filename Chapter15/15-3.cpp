#include <iostream>
#include "tv.h"

using namespace std;

int main() {
	Tv s42;
	cout << "42\" TV�� �ʱ� ������ : \n";
	s42.settings();
	s42.onoff();
	s42.chanup();
	cout << "\n42\" TV�� ����� ������ : \n";
	s42.settings();

	Remote grey;
	cout << "\n�������� �ʱ� ������ : \n";
	grey.show_mode2();

	grey.set_chan(s42, 10);
	grey.volup(s42);
	grey.volup(s42);
	cout << "\n������ ��� �� 42\" TV�� ������:\n";
	s42.settings();
	s42.set_mode2(grey);
	grey.show_mode2();

	s42.onoff();
	cout << "\nTv ���� �� �������� ��� ����\n";
	s42.settings();
	s42.set_mode2(grey);
	grey.show_mode2();
	return 0;
}