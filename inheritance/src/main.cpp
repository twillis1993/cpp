#include "Foo.h"

int main(int argc, char** argv) {
	//A a = A(1);
	//a.printField();
	B* b = new B(2);
	b->printField();
	b->abstractMethod();
	delete b;
	B c = B(4);
}
