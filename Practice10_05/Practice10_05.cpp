#include<stdio.h>
#include<iostream>
using namespace std;

template <class T>
T* concat(T a[], int sizeA, T b[], int sizeB){
	T* newT = new T[sizeA + sizeB];
	for (int i = 0; i < sizeA; i++) {
		newT[i] = a[i];
	}
	for (int i = 0; i < sizeB; i++) {
		newT[sizeA+i] = b[i];
	}
	
	return newT;
}

int main() {
	int x[] = { 1,2,3,4,5 };
	int y[] = { 6,7,8,9 };

	int *xy =concat(x, 5, y, 4);

	for (int i = 0; i < 9; i++) {
		cout << xy[i] << " ";
	}
}