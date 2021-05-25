#include <iostream>
#include <string>

using namespace std;

template <typename T>
T max(T arr[], int n);

template <typename T>
void * length(T* arr[], int n);

int main() {
	int arr[6]{ 1, 5, 3, 2 , 4, 8};
	double d_arr[4]{ 1.2, 4.2, 3.4, 6.4};
	const char* c_arr[5]{ "aaaa", "bb", "ccccc", "dddd", "eeeee" };
	cout << max(arr, 6) << ", " << max(d_arr, 4) << ", " << length(c_arr, 5);

	return 0;
}

template <typename T>
T max(T arr[], int n) {
	T max = arr[0];
	for (int i = 1; i < n; i++) {
		if (max < arr[i]) max = arr[i];
	}
	return max;
}

template <typename T>
void * length(T* arr[], int n) {
	int max = strlen(arr[0]);
	int pos = 0;
	for (int i = 1; i < n; i++) {
		if (max < strlen(arr[i])) {
			max = strlen(arr[i]);
			pos = i;
		}
	}
	return &arr[pos];
}