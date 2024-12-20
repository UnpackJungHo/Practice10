#include<stdio.h>
#include<iostream>
using namespace std;

template <class T>
T bigger(T a[], int x) {
	T max = a[0];
	for (int i = 0; i < x; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	return max;
}

int main() {
	int x[] = { 1,10,100,5,4 };
	char c[] = { 'a','b','c','d'};
	string s[] = { "김정","호박","수박","감자" };
	cout << bigger(s, 4);
}