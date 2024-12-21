#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;


int main() {
	int num,sum = 0;
	vector<int> v;

	while (true) {
		cout << "정수를 입력하세요(0을 입력하면 종료)>>";
		cin >> num;

		if (num == 0) {
			break;
		}

		v.push_back(num);

		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << " ";
		}
		sum += num;
		float avg = (float)sum / v.size();

		cout << endl;
		cout << "평균 = " << avg << endl;


	}
}
