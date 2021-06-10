#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Review {
	string title;
	int rating;
};

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
		for (int i = 0; i < num; i++) {
			ShowReview(books[i]);
		}
		cout << "�� �� �� ����Ѵ� : \n" << "���\t����\n";
		vector<Review>::iterator it;
		for (it = books.begin(); it != books.end(); it++) {
			ShowReview(*it);
		}
		vector<Review> oldlist(books);
		if (num > 3) {
			books.erase(books.begin() + 1, books.begin() + 3);
			cout << "������ �� : \n";
			for (it = books.begin(); it != books.end(); it++) {
				ShowReview(*it);
			}
			books.insert(books.begin(), oldlist.begin() + 1, oldlist.begin() + 2);
			cout << "������ �� : \n";
			for (it = books.begin(); it != books.end(); it++) {
				ShowReview(*it);
			}
		}
		books.swap(oldlist);
		cout << "oldlist�� books�� ��ȯ�� �� : \n";
		for (it = books.begin(); it != books.end(); it++) {
			ShowReview(*it);
		}
	}
	else
		cout << "�Է��� ���� ����, ���� ���� �����ϴ�.\n";
	return 0;
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