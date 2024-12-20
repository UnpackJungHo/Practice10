#include<stdio.h>
#include<iostream>
using namespace std;

template <class T>
T* remove(T src[], int sizeSrc, T minus[], int sizeMinus, int& retSize) {
	retSize = sizeSrc;
	cout << retSize;
	for (int i = 0; i < sizeSrc; i++) {
		for (int j = 0; j < sizeMinus; j++) {
			if (src[i] == minus[j]) {
				src[i] = src[i + 1];
				sizeSrc--;
			}
		}
	}
	retSize = sizeSrc;
	cout << retSize;
	T* newT = new T[retSize];

	return newT;
}

int main() {
	int x[] = { 1,2,3,4,5 };
	int y[] = { 2,3 };
	int retSize = 0;

	int* newT = remove(x, 5, y, 2, retSize);

	for (int i = 0; i < retSize; i++) {
		cout << newT[i] << " ";
	}
}