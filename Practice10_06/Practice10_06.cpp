#include<stdio.h>
#include<iostream>
using namespace std;

template <class T>
T* remove(T src[], int sizeSrc, T minus[], int sizeMinus, int& retSize) {
	retSize = sizeSrc;
	T* newT = new T[retSize];

	for (int i = 0; i < retSize; i++) {
		newT[i] = src[i];
	}

	for (int i = 0; i < retSize; i++) {
		for (int j = 0; j < sizeMinus; j++) {
			if (newT[i] == minus[j]) {
				for (int z = i; z < retSize - 1; z++) {
					newT[z] = newT[z + 1];
				}
				retSize--;
			}
		}
	}

	return newT;
}

int main() {
	int x[] = { 1,2,3,4,5,6,7,8 };
	int y[] = { 2,3,6,7 };
	int retSize = 0;

	int* newT = remove(x, 8, y, 4, retSize);

	for (int i = 0; i < retSize; i++) {
		cout << newT[i] << " ";
	}
}