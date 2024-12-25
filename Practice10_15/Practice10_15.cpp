#include<stdio.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Circle {
	string name;
	int radius;
public:
	Circle(int radius, string name) : radius(radius), name(name) {}
	double getArea() {
		return radius * radius * 3.14;
	}
	string getName() {
		return name;
	}
};


int main() {
	vector<Circle*> c;
	vector<Circle*>::iterator it;

	int selectNum, radius;
	string name;


	cout << "원을 삽입하고 삭제하는 프로그램입니다," << endl;
	while (true) {
		cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4  >>";
		cin >> selectNum;

		if (selectNum == 1) {
			cout << "생성하고자 하는 원의 반지름과 이름은 >> ";
			cin >> radius >> name;
			c.push_back(new Circle(radius, name));
			it = c.begin();
		}

		if (selectNum == 2) {
			cout << "삭제하고자 하는 원의 이름은 >> ";
			cin >> name;
			for (int i = 0; i < c.size(); i++) {
				if (name == c[i]->getName()) {
					it = it+i;
					it = c.erase(it);
				}
			}
		}

		if (selectNum == 3) {
			for (int i = 0; i < c.size(); i++) {
				cout << c[i]->getName() << endl;
			}
		}

		if (selectNum == 4) {
			break;
		}

	}
}