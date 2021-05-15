#include <iostream>
#include <Windows.h>
using namespace std;

const int Len = 66;
const int Divs = 6;

void subdivide(char arr[], int low, int high, int level);

int main() {
	char ruler[Len];
	int i;
	for (i = 1; i < Len - 2; i++) {
		ruler[i] = ' ';
	}
	ruler[Len - 1] = '\0';
	int max = Len - 2;
	int min = 0;
	ruler[min] = ruler[max] = '|';
	cout << ruler << endl;
	for (i = 1; i <= Divs; i++) {
		Sleep(500);
		subdivide(ruler, min, max, i);
		cout << ruler << endl;
		for (int j = 1; j < Len - 2; j++) {
			ruler[j] = ' ';
		}
	}
	return 0;
}

void subdivide(char arr[], int low, int high, int level) {
	if (level == 0) return;
	int mid = (high + low) / 2;
	arr[mid] = '|';
	subdivide(arr, low, mid, level - 1);
	subdivide(arr, mid, high, level - 1);
}