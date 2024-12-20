#include<stdio.h>
#include<iostream>
using namespace std;

template <class T>
bool equalArrays(T a[], T b[], int x) {
	for (int i = 0; i < x; i++) {
		if (a[i] == b[i])
			return true;
		else
			return false;
	}
}

int main() {
	int x[] = { 1,10,100,5,4 };
	int y[] = { 1,10,100,5,4 };

	int* n1 = new int[5];
	int* n2 = new int[5];

	for (int i = 0; i < 5; i++) {
		n1 = &x[i];
	}

	for (int i = 0; i < 5; i++) {
		n2 = &y[i];
	}


	if (equalArrays(n1, n2, 5))
		cout << "같다" << endl;
	else
		cout << "다르다" << endl;
}