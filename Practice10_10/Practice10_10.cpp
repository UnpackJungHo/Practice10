#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

class Nation {
	string nation, capital;
public:
	string getNation() {
		return nation;
	}
	string getCapital() {
		return capital;
	}
	void setNation(string nation) {
		this->nation = nation;
	}
	void setCapital(string capital) {
		this->capital = capital;
	}
};

int main() {
	
	int num;
	vector<Nation> v;
	Nation n;
	string nation, capital;

	cout << "***** 나라의 수도 맞추기 게임을 시작합니다. *****" << endl;
	while (true)
	{
		cout << "정보 입력: 1, 퀴즈: 2, 종료: 3 >>";
		cin >> num;
		switch (num)
		{
			case 1:
			{	
				cout << "현재 " << v.size() << "개의 나라가 입력되어 있습니다." << endl;
				cout << "나라와 수도를 입력하세요(no no 이면 입력끝)" << endl;
				while (true) {
					cout << v.size() + 1 << ">>";
					cin >> nation >> capital;
					if (nation == "no" && capital == "no") {
						break;
					}
					n.setNation(nation);
					n.setCapital(capital);
					v.push_back(n);
					
				}
				break;
			}
			case 2:
			{
				while (true) {
					srand((unsigned int)time(NULL));
					int randomNum = rand() % v.size();
					cout << v[randomNum].getNation() << "의 수도는?";
					cin >> capital;
					if (v[randomNum].getCapital() == capital) {
						cout << "Corecct!!" << endl;
					}
					else if (capital == "exit") {
						break;
					}
					else {
						cout << "No !!" << endl;
					}
				}
				break;
			}
			default:
				break;
		}

		if(num == 3)
			break;
	}


}