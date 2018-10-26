#include "Foo.h"

A::A() {
	m_a = 2;
}

A::~A() {
	printf("A destructor called\n");
}

A::A(int a) {
	printf("a: %d\n", a);
	m_a = a;
}

void A::printField() {
	printf("m_a: %d\n", m_a);
}

B::B() {
	m_b = 4;
}

B::~B() {
	printf("B destructor called\n");
}

B::B(int b) : A(1) {
	printf("b: %d\n", b);
	m_b = b;	
}

void B::printField() {
	printf("This is B's implementation of \'printField()\'\nm_b: %d\n", m_b);
	printf("But I can also call my parent's implementation:\n");
	A::printField();
}

void B::abstractMethod() {
	printf("Now I'm implemented!\n");
}
