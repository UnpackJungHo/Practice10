#include<stdio.h>
#include<iostream>
#include<map>
#include<string>
using namespace std;

int main() {
	map<string, string> passwordCheck;
	string name,password;
	int selectNum;

	cout << "***** 암호 관리 프로그램 WHO를 시작합니다 *****" << endl;
	while (true) {
		cout << "삽입:1, 검사:2, 종료:3 >> ";
		cin >> selectNum;

		if (selectNum == 1) {
			cout << "이름 암호 >>";
			cin >> name >> password;
			passwordCheck[name] = password;
		}

		if (selectNum == 2) {
			cout << "이름 >>";
			cin >> name;
			while (true) {
				cout << "암호 >>";
				cin >> password;
				if (password == passwordCheck[name]) {
					cout << "통과 !!" << endl;
					break;
				}
				else {
					cout << "실패 ~~" << endl;
				}
			}
		}

		if (selectNum == 3) {
			break;
		}
	}
}