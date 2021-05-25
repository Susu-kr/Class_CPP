#include <iostream>

using namespace std;

template <typename T>
T max5(T arr[]);

int main() {
	int arr[5]{ 1, 5, 3, 2 , 4 };
	double d_arr[5]{ 1.2, 4.2, 3.4, 6.4, 1.6 };

	cout << max5(arr) << ", " << max5(d_arr);
	
	return 0;
}


template <typename T>
T max5(T arr[]) {
	T max = arr[0];
	for (int i = 1; i < 5; i++) {
		if (max < arr[i]) max = arr[i];
	}
	return max;
}