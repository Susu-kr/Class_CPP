#include <iostream>
#include "tabtenn1.h"

using namespace std;

int main() {
	TableTennisPlayer p1("Tara", "Boomdea", false);
	RatedPlayer r1(1140, "Mallory", "Duck", true);
	r1.Name();
	if (r1.HasTable()) cout << " : Å¹±¸´ë°¡ ÀÖ´Ù." << endl;
	else cout << " : Å¹±¸´ë°¡ ¾ø´Ù." << endl;
	p1.Name();
	if (p1.HasTable()) cout << " : Å¹±¸´ë°¡ ÀÖ´Ù." << endl;
	else cout << " : Å¹±¸´ë°¡ ¾ø´Ù." << endl;
	cout << "ÀÌ¸§ : ";
	r1.Name();
	cout << "·©Å· : " << r1.Rating() << endl;
	RatedPlayer r2(1212, p1);
	cout << "ÀÌ¸§ : ";
	r2.Name();
	cout << "·©Å· : " << r2.Rating() << endl;
	return 0;
}