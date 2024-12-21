#include<stdio.h>
#include<iostream>
using namespace std;

class Comparable {
public:
	virtual bool operator > (Comparable& op2) = 0;
	virtual bool operator < (Comparable& op2) = 0;
	virtual bool operator == (Comparable& op2) = 0;
};

class Circle : public Comparable{
	int radius;
public:
	Circle(int radius = 1) : radius(radius) {}
	int getRadius() { return radius; }
	bool operator > (Comparable& op2) override;
	bool operator < (Comparable& op2) override;
	bool operator == (Comparable& op2) override;
};


bool Circle::operator > (Comparable& op2) {
	Circle* s;
	Comparable* c = &op2;
	s = (Circle *) c;
	if (this->getRadius() > s->getRadius()) {
		return true;
	}
	else {
		return false;
	}
}

bool Circle::operator < (Comparable& op2) {
	Circle* s;
	Comparable* c = &op2;
	s = (Circle*)c;
	if (this->getRadius() < s->getRadius()) {
		return true;
	}
	else {
		return false;
	}
}

bool Circle::operator == (Comparable& op2) {
	Circle* s;
	Comparable* c = &op2;
	s = (Circle*)c;
	if (this->getRadius() == s->getRadius()) {
		return true;
	}
	else {
		return false;
	}
}

template <class T>
T bigger(T a, T b) {
	if (a > b) return a;
	else return b;
}

int main() {
	int a = 20, b = 50, c;
	c = bigger(a, b);
	cout << "20과 50중 큰 값은 " << c << endl;
	Circle waffle(10), pizza(20), y;
	y = bigger(waffle, pizza);
	cout << "waffle과 pizza 중 큰 것의 반지름은 " << y.getRadius() << endl;
}