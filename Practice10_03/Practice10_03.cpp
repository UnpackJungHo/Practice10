#include<stdio.h>
#include<iostream>
using namespace std;

template <class T>
void reverseArray(T a[], int x) {
	for (int i = 0; i < x/2; i++) {
		T tmp = a[i];
		a[i] = a[x - i - 1];
		a[x - i - 1] = tmp;
	}
}

int main() {
	int x[] = { 1,10,100,5,4 };
	reverseArray(x, 5);
	for (int i = 0; i < 5; i++) {
		cout << x[i] << " ";
	}
}