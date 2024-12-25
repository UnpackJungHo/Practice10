#include<stdio.h>
#include<iostream>
#include<map>
#include<string>
using namespace std;

int main() {
	map<string, int> scoreList;
	string name;
	int score , selectNum;

	cout << "***** 점수관리 프로그램 HIGH SCORE을 시작합니다 *****" << endl;
	while (true) {
		cout << "입력:1, 조회:2, 종료:3 >> ";
		cin >> selectNum;

		if (selectNum == 1) {
			cout << "이름과 점수 >>";
			cin >> name >> score;
			scoreList[name] = score;
		}

		if (selectNum == 2) {
			cout << "이름 >>";
			cin >> name;
			if (scoreList.find(name) == scoreList.end())
				cout << "존재 x" << endl;
			else {
				cout << name << "의 점수는 " << scoreList[name] << endl;
			}
		}

		if (selectNum == 3) {
			break;
		}
	}
}