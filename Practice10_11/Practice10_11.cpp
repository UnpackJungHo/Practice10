#include<stdio.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Book {
	string yy, title, author;
public:
	string getYY() {
		return yy;
	}
	string getTitle() {
		return title;
	}
	string getAuthor() {
		return author;
	}
	void setYY(string yy) {
		this->yy = yy;
	}
	void setTitle(string title) {
		this->title = title;
	}
	void setAuthor(string author) {
		this->author = author;
	}
};

int main() {
	vector<Book> v;
	Book b;
	string yy, title, author;

	cout << "입고할 책을 입력하세요. 년도에 -1을 입력하면 입고를 종료합니다." << endl;
	while (true) {
		cout << "년도>>";
		cin >> yy;
		cin.ignore();

		if (yy == "-1") {
			cout << "총 입고된 책은 " << v.size() << "권 입니다." << endl;
			cout << "검색하고자 하는 저자의 이름을 입력하세요 >>";
			getline(cin, author);
			cout << endl;
			for (int i = 0; i < v.size(); i++) {
				if (v[i].getAuthor() == author) {
					cout << v[i].getYY() << "년도, " << v[i].getTitle() << ", " << v[i].getAuthor() << endl;
				}
			}

			cout << "검색하고자 하는 년도의 이름을 입력하세요 >>";
			cin >> yy;
			cout << endl;
			for (int i = 0; i < v.size(); i++) {
				if (v[i].getYY() == yy) {
					cout << v[i].getYY() << "년도, " << v[i].getTitle() << ", " << v[i].getAuthor() << endl;
				}
			}
			break;
		}

		cout << "책이름>>";
		getline(cin, title);

		cout << "저자>>";
		getline(cin, author);
		
		b.setYY(yy);
		b.setTitle(title);
		b.setAuthor(author);
		v.push_back(b);
	}
}