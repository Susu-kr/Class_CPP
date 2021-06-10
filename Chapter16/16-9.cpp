#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Review {
	string title;
	int rating;
};

bool operator<(const Review & r1, const Review & r2);
bool worseThan(const Review & r1, const Review & r2);
bool FillReview(Review & rr);
void ShowReview(const Review & rr);

int main() {
	vector<Review> books;
	Review temp;
	while (FillReview(temp)) {
		books.push_back(temp);
	}
	int num = books.size();
	if (num > 0) {
		cout << "�����մϴ�. ����� ������ ���� �Է��ϼ̽��ϴ�.\n" << "���\t����\n";
		for_each(books.begin(), books.end(), ShowReview);

		sort(books.begin(), books.end());
		cout << "å ������ �������� ����:\n���\t����\n";
		for_each(books.begin(), books.end(), ShowReview);

		sort(books.begin(), books.end(),worseThan);
		cout << "å ����� �������� ����:\n���\t����\n";
		for_each(books.begin(), books.end(), ShowReview);
		
		random_shuffle(books.begin(), books.end());
		cout << "������ ������ �ٽ� ��ġ:\n���\t����\n";
		for_each(books.begin(), books.end(), ShowReview);
	}
	else
		cout << "���α׷��� �����մϴ�.\n";
	return 0;
}

bool operator<(const Review & r1, const Review & r2) {
	if (r1.title < r2.title) return true;
	else if (r1.title == r2.title && r1.rating < r2.rating) return true;
	else return false;
}

bool worseThan(const Review & r1, const Review & r2) {
	if (r1.rating < r2.rating) return true;
	else return false;
}
bool FillReview(Review & rr) {
	cout << "å ������ �Է��Ͻʽÿ� (�������� quit�� �Է�) : ";
	getline(cin, rr.title);
	if (rr.title == "quit") return false;
	cout << "å ���(0-10)�� �Է��Ͻʽÿ� : ";
	cin >> rr.rating;
	if (!cin) return false;
	// ���� �Է����� �����Ѵ�.
	while (cin.get() != '\n')
		continue;
	return true;
}

void ShowReview(const Review & rr) {
	cout << rr.rating << "\t" << rr.title << endl;
}