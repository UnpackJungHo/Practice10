#include<stdio.h>
#include<iostream>
#include<vector>
#include<string>
#include<ctime>
#include<cstdlib>
#include<algorithm>
using namespace std;

class Word {
	string word, meaning;
public:
	Word(string word, string meaning) {
		this->word = word;
		this->meaning = meaning;
	}
	string getWord() {
		return word;
	}
	string getMeaning() {
		return meaning;
	}
	/*void setWord(string word) {
		this->word = word;
	}
	void setMeaning(string meaning) {
		this->meaning = meaning;
	}*/
};

int main() {
	vector<Word> v;
	int num;

	v.push_back(Word("human", "사람"));
	v.push_back(Word("society", "사회"));
	v.push_back(Word("dall", "인형"));
	v.push_back(Word("animal", "동물"));
	v.push_back(Word("trade", "거래"));
	v.push_back(Word("picture", "그림"));

	cout << "***** 영어 어휘 테스트를 시작합니다. *****" << endl;

	srand((unsigned)time(0));

	while (true) {
		vector<string> s;
		int n = rand() % v.size();
		int count = 0;
		int answer,selectQ;
		string addWord, addMean;

		cout << "어휘 삽입: 1, 어휘 테스트: 2, 프로그램 종료: 그 외 키 >> ";
		cin >> selectQ;

		if (selectQ == 1) {
			cout << "영어 단어에 exit을 입력하면 입력 끝" << endl;
			while (true) {
				cout << "영어 >>";
				cin >> addWord;
				if (addWord == "exit")
					break;
				cout << "한글 >>";
				cin >> addMean;
				v.push_back(Word(addWord, addMean));
			}
		}

		if (selectQ == 2)
		{
			cout << "영어 어휘 테스트를 시작합니다. 1~4 외 다른 입력시 종료합니다." << endl;
			while (true) {
				s.clear();
				cout << v[n].getWord() << "?" << endl;

				s.push_back(v[n].getMeaning());
				while (s.size() < 4) {
					int randomIndex = rand() % v.size();
					if (randomIndex != n &&
						find(s.begin(), s.end(), v[randomIndex].getMeaning()) == s.end()) {
						s.push_back(v[randomIndex].getMeaning());
					}
				}

				random_shuffle(s.begin(), s.end());

				for (int i = 0; i < 4; i++) {
					cout << "(" << i + 1 << ")" << s[i] << " ";
				}


				cin >> num;

				if (num != 1 && num != 2 && num != 3 && num != 4) {
					break;
				}

				if (v[n].getMeaning() == s[num - 1]) {
					cout << "Excellent !!" << endl;
				}
				else
					cout << "No !!" << endl;

				n = rand() % v.size();
			}

		}

		if (selectQ != 1 && selectQ != 2) {
			break;
		}
	}
}