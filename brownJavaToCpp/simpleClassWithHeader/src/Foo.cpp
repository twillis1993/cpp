#include "Foo.h"
#include <stdio.h>

Foo::Foo() : m_a(1), m_b(4), m_x(3.14), m_y(2.718) {
	printf("Building object\n");
	int a = myMethod(5,2);
	printf("a=%d\n",a);
}

Foo::~Foo() {
	printf("Removing object\n");
}

int Foo::myMethod(int a, int b) {
	return a+b;
}

void Foo::printNumber(int n) { printf("n: %d\n", n); }
void Foo::printNumber(double n) { printf("n: %lf\n", n); }
