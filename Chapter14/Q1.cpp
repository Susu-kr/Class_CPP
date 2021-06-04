#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	string input;
	cout << "입력 : ";
	cin >> input;
	string R, F;
	int dot = 0;
	for (int i = 0; i < input.size(); i++) {
		if (input[i] == '.') {
			dot = i;
			break;
		}
		R += input[i];
	}
	for (int i = dot + 1; i < input.size(); i++) {
		F += input[i];
	}

	cout << "출력 1 : ";
	for (int i = 0; i < R.size(); i++) {
		cout << R[i] << " ";
	}
	cout << "\t소수점 이하 : ";
	for (int i = 0; i < F.size(); i++) {
		cout << F[i] << " ";
	}
	cout << endl;

	// 0,123,456
	// 01,234 
	string out;
	int tmp = R.size();
	vector<int> comma;
	while (tmp > 0) {
		tmp -= 3;
		if (tmp > 0) comma.push_back(tmp);
	}
	for (int i = 0; i < R.size(); i++) {
		if (!comma.empty()) {
			if (comma.back() == i) {
				out += ",";
				comma.pop_back();
			}
		}
		out += R[i];
	}
	out += "." + F;
	cout << "출력 2 : " << out << endl;
	return 0;
}